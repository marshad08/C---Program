#include<bits/stdc++.h>

using namespace std;

void printHelper(vector <int> ad[],int s,vector <bool> vi)
{
    cout<<s<<" ";
    vi[s]=true;
    for(int i:ad[s])
    {
        if(vi[i]==false)
         printHelper(ad,i,vi);
    }
}
void DFS(vector <int> ad[],int n)
{
    vector <bool> vi(n);
    int i;
    for(i=0;i<n;i++)
      vi[i]=false;
    for(int i=0;i<n;i++)
    {
        if(vi[i]==false)
          printHelper(ad,i,vi);
    }
}
void print(vector <int> ad[],int s,vector <bool> vi)
{
    queue <int> q;
    vi[s]=true;
    q.push(s);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        for(int i:ad[x])
        {
            if(vi[i]==false)
            {
                q.push(i);
                vi[i]=true;
            }
        }
    }
}
void BFS(vector <int> ad[],int n)
{
    vector <bool> vi(n);
    int i;
    for(i=0;i<n;i++)
      vi[i]=false;
    for(int i=0;i<n;i++)
    {
        if(vi[i]==false)
          print(ad,i,vi);
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector <int> ad[n];
    int i;
    for(i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    BFS(ad,n);
    return 0;
}
