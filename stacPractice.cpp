#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector <int> v(n),v1;
	stack <int> s;
	int i;
	for(i=0;i<n;i++)
		cin>>v[i];
	for(i=n-1;i>=0;i--)
	{
		if(s.size()==0)
			v1.push_back(-1);
		else if(s.size()>0 && s.top()>v[i])
			v1.push_back(s.top());
		else if(s.size()>0 && s.top()<=v[i])
		{
			while(s.size()>0 && s.top()<=v[i])
				s.pop();
			if(s.size()==0)
			  v1.push_back(-1);
			else
			  v1.push_back(s.top());
		}
		s.push(v[i]);
	}
	reverse(v1.begin(),v1.end());
	for(i=0;i<n;i++)
		cout<<v1[i]<<" ";
	cout<<endl;
	return 0;
}
