#include<bits/stdc++.h>

using namespace std;

vector <string> v;
void per(string ip,string op)
{
	if(ip.length()==0)
	{
		v.push_back(op);
		return ;
	}
	string op1=op;
	string op2=op;
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	
	per(ip,op1);
	per(ip,op2);
}
int main()
{
	string s;
	cin>>s;
	
	per(s," ");
	int i;
	//sort(v.begin(),v.end());
	set <string> s1;
	for(i=0;i<v.size();i++)
	 s1.insert(v[i]);
	for(auto i=s1.begin();i!=s1.end();i++)
	   cout<<*i<<" ";
	return 0;
}
