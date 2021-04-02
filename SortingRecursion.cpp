#include<bits/stdc++.h>

using namespace std;
void insert(vector <int> &,int);
void recsort(vector <int> &a)
{
	if(a.size()==1)
	   return ;
	int t=a[a.size()-1];
	a.pop_back();
	recsort(a);
	insert(a,t);
}

void insert(vector <int> &a,int t)
{
	if(a.size()==0 || a[a.size()-1]<=t)
	{
		a.push_back(t);
		return ;
	}
	int v=a[a.size()-1];
	a.pop_back();
	insert(a,t);
	a.push_back(v);
	return ;
}
int main()
{
	int n;
	cin>>n;
	vector <int> a(n);
	int i;
	for(i=0;i<n;i++)
	 cin>>a[i];
	recsort(a);
	for(i=0;i<n;i++)
	 cout<<a[i]<<" ";
	
	return 0;
}
