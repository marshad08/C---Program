#include<bits/stdc++.h>

using namespace std;
void printHelper(vector <vector <int>> v,int s,vector <bool> visited)
{
	cout<<s<<" ";
	visited[s]=true;
	for(int i=0;i<v.size();i++)
	{
		if(v[s][i]==1 && visited[i]==false)
		  printHelper(v,i,visited);
	}
}
void DFS(vector <vector <int>> v,int n)
{
	vector <bool> visited(n);
	int i;
	for(i=0;i<n;i++)
	{
		if(visited[i]==false)
		{
			printHelper(v,i,visited);
		}
	}
}
int main()
{
	int n,e;
	cin>>n>>e;
	vector <vector <int>> v(n,vector<int> (n));
	int i;
	for(i=0;i<e;i++)
	{
		int u1,v1;
		cin>>u1>>v1;
		v[u1][v1]=1;
		v[v1][u1]=1;
	}
	DFS(v,n);
	return 0;
}
