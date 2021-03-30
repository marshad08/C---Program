#include<iostream>

using namespace std;
int sum(int n)
{
    int s=0;
    for(int i=0;i<=n;i++)
      s+=i;
    return s;
}
int main()
{
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    */
    int n;
    //cout<<"Enter two number:";
    cin>>n;
    cout<<sum(n);
    return 0;
}