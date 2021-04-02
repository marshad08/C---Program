#include<bits/stdc++.h>

using namespace std;
int RBS(vector <int> v,int n)
{
	int start=0,end=n-1;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		int next=(mid+1)%n;
		int prev=(mid+n-1)%n;
		if(v[mid]<=v[prev] && v[mid]<=v[next])
		  return mid;
		else if(v[start]<=v[mid])
		  start=mid+1;
		else
		 end=mid-1;
	}
	return -1;
}
int BS(vector <int> v,int s,int e,int x)
{
	while(s<=e)
	{
		int mid=s+(e-s)/2;
		if(v[mid]==x)
		  return mid;
		else if(x<v[mid])
		  e=mid-1;
		else
		 s=mid+1;
	}
	
	return -1;
}
int main()
{
	int n;
	cout<<"enter number of element:";
	cin>>n;
	vector <int> v(n);
	int i;
	for(i=0;i<n;i++)
	  cin>>v[i];
	int x;
	cin>>x;
	int index=RBS(v,n);
	int u;
	if(u=BS(v,0,index-1,x)!=-1)
	  cout<<u;
	else
	{
		u=BS(v,index,n-1,x);
		cout<<u;
	}
	cout<<index;
	return 0;
}
