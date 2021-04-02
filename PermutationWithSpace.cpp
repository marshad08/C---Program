#include<bits/stdc++.h>

using namespace std;
void per(string ip,string op)
{
	if(ip.length()==0)
	{
		cout<<op<<" ";
		return ;
	}
	
	string op1=op;
	string op2=op;
	op1+='_';
	op1+=ip[0];
	op2+=ip[0];
	ip.erase(ip.begin()+0);
	per(ip,op1);
	per(ip,op2);
}
int main()
{
	string s;
	cin>>s;
	string s1="";
	s1+=s[0];
	s.erase(s.begin()+0);
	per(s,s1);
}
