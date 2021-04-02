#include<bits/stdc++.h>

using namespace std;

// To Get the specific which we want
int getBit(int num,int key)
{
    return (num &(1<<key)!=0);
}
// To Set the specific bit
int setBit(int num,int key)
{
    return (num|(1<<key));
}

// Clear Bit
int ClearBit(int num,int pos)
{
    int mask=~(1<<pos);
    return (num&mask);
}
//Update bit 
int updateBit(int num,int pos,int value)
{
    int mask=~(1<<pos);
    num&=mask;
    return (num|(value<<pos));
}

// Write a program to check a given number is power of 2 or not?
bool isPowerof2(int n)
{
    return (n && (!(n & (n-1))));
}

// Wap to count the number of 1 in binary representation of number

int count(int n)
{
    int c=0;
    while(n>0)
    {
        n&=(n-1);
        c++;
    }
    return c;
}

// Wap to genreate all possible subsets of a set
void subset(int a[],int n)
{
    int i,j;
    for(i=0;i<(1<<n);i++)
    {

        for(j=0;j<n;j++)
        {
            if(i & (1<<j))
              cout<<a[j];
        }
        cout<<endl;
        //int x=stoi(s);
        //v.push_back(x);
    }

    
}
// Wap to find a 2 unique numbers in array where all numbers except 2,are present twice

void unique(int a[],int n)
{
    int xorsum=0;
    int i;
    for(i=0;i<n;i++)
      xorsum^=a[i];
    
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1)
    {
        setbit=(tempxor & 1);
        pos++;
        tempxor=tempxor>>1;
    }
    int newxor=0;
    for(i=0;i<n;i++)
    {
        if(setBit(a[i],pos-1))
          newxor=(newxor^a[i]);
    }

    cout<<newxor<<endl;
    cout<<(xorsum^newxor)<<endl;


}
int main()
{
    int num,key;
    cin>>num>>key;
    cout<<getBit(num,key)<<endl;
    cout<<setBit(num,key)<<endl;
    cout<<ClearBit(num,key)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    int x;
    cin>>x;
    if(isPowerof2(x))
       cout<<"Number is power of 2\n";
    else 
        cout<<"Not power of 2\n";
    cout<<count(x)<<endl;
    int arr[]={1,2,3};
    subset(arr,3);
    int brr[]={1,2,3,1,2,3,7,5};
    unique(brr,8);
    return 0;

}