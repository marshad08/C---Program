#include <bits/stdc++.h>

using namespace std;
void jos(vector <int> v,int k,int index,int &ans)
{
	if(v.size()==1)
	{
		ans=v[0];
		return ;
	}
	index=(index+k)%v.size();
	v.erase(v.begin()+index);
	
	jos(v,k,index,ans);
}
int main()
{
	int n,k;
	cin>>n>>k;
	int ans=-1;
	vector <int> v;
	int i;
	k--;
	for(i=1;i<=n;i++)
	  v.push_back(i);
	jos(v,k,0,ans);
	cout<<ans;
	return 0;
}
