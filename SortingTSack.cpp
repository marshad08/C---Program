#include<bits/stdc++.h>

using namespace std;
void insert(stack <int> &,int);
void recsort(stack <int> &a)
{
	if(a.size()==1)
	   return ;
	int t=a.top();
	a.pop();
	recsort(a);
	insert(a,t);
}

void insert(stack <int> &a,int t)
{
	if(a.size()==0 || a.top()<=t)
	{
		a.push(t);
		return ;
	}
	int v=a.top();
	a.pop();
	insert(a,t);
	a.push(v);
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
	stack <int> s;
	for(i=0;i<n;i++)
	 s.push(a[i]);
	recsort(s);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	 
	
	return 0;
}
