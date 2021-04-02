#include<bits/stdc++.h>

using namespace std;
void caseChange(string ip,string op)
{
	if(ip.length()==0)
	{
		cout<<op<<" ";
		return ;
	}
	string op1=op;
	string op2=op;
	op1+=ip[0];
	op2+=toupper(ip[0]);
	ip.erase(ip.begin()+0);
	caseChange(ip,op1);
	caseChange(ip,op2);
}
int main()
{
	string s;
	cin>>s;
	
	caseChange(s,"");
}
