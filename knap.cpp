#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int max(int a,int b)
{
	return (a>b?a:b);
}
int knapsack(int we[],int pr[],int w,int n)
{
	if(n==0||w==0)
	  return 0;
	if(we[n-1]<=w)
	 return max(pr[n-1]+knapsack(we,pr,w-we[n-1],n-1),knapsack(we,pr,w,n-1));
	else if(we[n-1]>w)
	  return knapsack(we,pr,w,n-1);
}
int main()
{
	int n,w;
	cout<<"Enter number of object and total weight of knapsack:";
	cin>>n>>w;
	int price[n],weight[n];
	int i;
	cout<<"Enter All weight of given object";
	for(i=0;i<n;i++)
	  cin>>weight[i];
	cout<<"Enter all price of object";
	for(i=0;i<n;i++)
	  cin>>price[i];
	  
	cout<<knapsack(weight,price,w,n)<<endl;
	return 0;
}
