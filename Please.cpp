#include<bits/stdc++.h>

using namespace std;
/*
// To check a Pythagores Triplet
bool check(int x,int y,int z)
{
    int a=max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;

    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c)
      return true;
    return false;
}
*/
int BinarytoDecimal(int n)
{
    int x=1;
    int sum=0;
    while(n>0)
    {
        int temp=n%10;
        sum+=temp*x;
        x*=2;
        n/=10;
    }

    return sum;
}
int OctaltoDecimal(int n)
{
    int x=1;
    int sum=0;
    while(n>0)
    {
        int temp=n%10;
        sum+=temp*x;
        x*=8;
        n/=10;
    }

    return sum;
}
int HexaToDecimal(string s)
{
    int x=1;
    int sum=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]>='0' && s[i]<='9')
           sum+=(s[i]-'0')*x;
        else if(s[i]>='A' && s[i]<='F')
           sum+=(s[i]-'A'+10)*x;
        x*=16;
    }
    return sum;

}
// Longest Airthmetic Subarray
// 7
// 10 7 4 6 8 10 11
int Longest(vector <int> v,int n)
{
    int curr=2;
    int j=2;
    int pd=v[1]-v[0];
    int ans=2;
    while(j<n)
    {
        if(pd==v[j]-v[j-1])
          curr++;
        else
        {
            pd=v[j]-v[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;

    }
    return ans;
}
// Find Maximum sum of array

void MaxSum(vector <int> a,int n,int s)
{
    int i=0,j=0;
    int sum=0;
    while(j<n && sum+a[j]<=s)
    {
        sum+=a[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j+1<<endl;
        return ;
    }
    while(j<n)
    {
        sum+=a[j];
        while(sum>s)
        {
            sum-=a[i];
            i++;
        }
        if(sum==s)
        {
            cout<<i+1<<" "<<j+1<<endl;
            return ;
        }
        j++;
    }
    cout<<"-1"<<" "<<"-1"<<endl;
}
// Kadane Algorithm

int Kadane(vector <int> v,int n)
{
    int i,currentsum=0,maxsum=INT_MIN;
    for(i=0;i<n;i++)
    {
        currentsum+=v[i];
        if(currentsum<0)
            currentsum=0;
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
// Maximum Circular sub array
int MaxCircular(vector <int> v,int n)
{
    int sum=0;
    int nowrapsum;
    int wrapsum;
    nowrapsum=Kadane(v,n);
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        v[i]=-v[i];
    }
    wrapsum=sum+Kadane(v,n);
    return max(nowrapsum,wrapsum);

}
int main()
{
    /*int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c))
      cout<<"Pythagores Triplet\n";
    else 
      cout<<"Not pythagores Triplet\n";
      */
    /*string n;
    cin>>n;
    cout<<HexaToDecimal(n);
    */
    int n;
    cin>>n;
    vector <int> v(n);
    int i;
    for(i=0;i<n;i++)
      cin>>v[i];
    cout<<Kadane(v,n);
    cout<<MaxCircular(v,n);
    return 0;
    
}