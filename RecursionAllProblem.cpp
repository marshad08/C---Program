#include <bits/stdc++.h>


using namespace std;

vector <string> v;

// For giving all the permutation of given string
/*void permutation(string ip,string op)
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

    permutation(ip,op1);
    permutation(ip,op2);
}*/

/*
        output:
        A_B_C_D A_B_CD A_BC_D A_BCD AB_C_D AB_CD ABC_D ABCD
*/
/*void addchar(string ip,string op)
{
    if(!ip.length())
    {
        cout<<op<<" ";
        return ;
    }
    string op1=op;
    string op2=op;
    op1.push_back('_');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    addchar(ip,op1);
    addchar(ip,op2);
}*/

/*
inuput: ab
Output : 
ab
aB
Ab
AB
*/
void caseChange(string ip,string op)
{
    if(!ip.length())
    {
        cout<<op<<endl;
        return ;
    }

    string op1=op;
    string op2=op;

    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);

    caseChange(ip,op1);
    caseChange(ip,op2);
}

/*
  input: A1b2
  Output:
a1b2
a1B2
A1b2
A1B2
*/
void solve(string ip,string op)
{
    if(!ip.length())
    {
        cout<<op<<endl;
        return ;
    }

    if(isalpha(ip[0]))
    {
        string op1=op;
        string op2=op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);

        solve(ip,op1);
        solve(ip,op2);
    }
    else{
        string op1=op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1);
    }
}
int main()
{
    string ip;
    cin>>ip;
    string op="";
    /*permutation(ip,op);
    sort(v.begin(),v.end());
    for(auto s:v)
      cout<<s<<" ";
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    addchar(ip,op);
    cout<<endl;
    op.clear();
    op+="";*/
    //caseChange(ip,op);
solve(ip,op);
    return 0;
}