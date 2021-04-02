#include<bits/stdc++.h>

using namespace std;

/* Input :
	3 3
	2 1 1
	1 1 0
	0 1 1
   Output: 4
*/	
int RottonOr(vector <vector <int>> a,int n,int m)
{
	queue <pair <int,int>> q;
	int rotton=0,total=0;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==1 || a[i][j]==2)
			  total++;
			if(a[i][j]==2)
			{
				q.push({i,j});
			}
			  
		}
	}
	int time=0;
	if(total==0)
	  return 0;
	while(!q.empty())
	{
		int size=q.size();
		rotton+=size;
		
		if(rotton==total)
		  return time;
		time++;
		for(i=0;i<size;i++)
		{
			int q1=q.front().first;
			int q2=q.front().second;
			if(q1+1<n && a[q1+1][q2]==1)
			{
				a[q1+1][q2]=2;
				q.push({q1+1,q2});
			}
			if(q1-1>=0 && a[q1-1][q2]==1)
			{
				a[q1-1][q2]=2;
				q.push({q1-1,q2});
			}
			if(q2+1<m && a[q1][q2+1]==1)
			{
				a[q1][q2+1]=2;
				q.push({q1,q2+1});
			}
			if(q2-1>=0 && a[q1][q2-1]==1)
			{
				a[q1][q2-1]=2;
				q.push({q1,q2-1});
			}
			q.pop();
		}
	}
	return -1;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector <vector<int>> a(n,vector<int> (m));
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		  cin>>a[i][j];
	}
	
	cout<<RottonOr(a,n,m)<<endl;
	return 0;
}
