#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    int i;
    for(i=0;i<n;i++)
      cin>>v[i];
    deque <int> dq;
    for(i=0;i<k;i++)
    {
        while(!dq.empty() && v[dq.back()]<=v[i])
             dq.pop_back();
        dq.push_back(i);
    }
    vector <int> a;
    for(;i<n;i++)
    {
        a.push_back(v[dq.front()]);
        while(!dq.empty() && dq.front()<=i-k)
          dq.pop_front();
        while(!dq.empty() && v[dq.back()]<=v[i])
          dq.pop_back();
        dq.push_back(i);
    }
    a.push_back(v[dq.front()]);
    for(i=0;i<a.size();i++)
      cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}