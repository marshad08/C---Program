#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string s1="fam";
    string s2="ily";
    cout<<s1.append(s2)<<endl<<s1.compare(s2)<<endl;
    string s3="nincompoop";
    s3.erase(3,2);
    cout<<s3.find("po")<<endl;
    s3.insert(3,"co");
    cout<<s3<<endl;
    cout<<s3.substr(5,3)<<endl;
    string num="786";
    int n=stoi(num);
    cout<<n<<endl;

    string no=to_string(n);
    cout<<no<<endl;
    transform(s3.begin(),s3.end(),s3.begin(),::toupper);
    cout<<s3<<endl;
    transform(s3.begin(),s3.end(),s3.begin(),::tolower);
    cout<<s3<<endl;

    string s4="686529";
    sort(s4.begin(),s4.end(),greater<int>());
    cout<<s4<<endl;
    /*int n;
    cin>>n;
    cin.ignore();
    char ch[n+1];
   cin.getline(ch,n);
    // getline(cin,ch);   Gives Error

    cin.ignore();
    int i=0,count=0,maxLen=0,maxst=0,st=0;
    while(ch[i])
    {
        if(ch[i]==' ')
        {
            if(maxLen<count)
            {
                maxLen=count;
                maxst=st;
            }
            count=0;
            st=i+1;
        }
        else
         count++;
        i++;
    }
    cout<<maxLen<<endl;
    for(i=0;i<maxLen;i++)
      cout<<ch[i+maxst];*/
    return 0;
}