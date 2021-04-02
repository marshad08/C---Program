#include<bits/stdc++.h>

using namespace std;
void solve(int open,int close,string op)
{
	if(open==0 && close==0)
	{
		cout<<op<<" ";
		return ;
	}
	if(open!=0)
	{
		string op1=op;
		op1+='(';
		solve(open-1,close,op1);
	}
	if(close>open)
	{
		string op2=op;
		op2+=')';
		solve(open,close-1,op2);
	}
}
int main()
{
    string op="";
    solve(3,3,op);
    return 0;
}
