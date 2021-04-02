#include <bits/stdc++.h>

using namespace std;
void ShellSort(int a[],int n)
{
    // This loop for divide a interval
    for(int gap=n/2;gap>=1;gap/=2)
    {
        // This loop for itreating that element which are comeing after gap
        for(int j=gap;j<n;j++)
        {
            // This loop check for current Element and also check own previous if is possible
            for(int i=j-gap;i>=0;i-=gap)
            {
                if(a[i+gap]>a[i])
                  break;
                else
                 swap(a[i+gap],a[i]);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
      cin>>a[i];
    ShellSort(a,n);
    for(i=0;i<n;i++)
      cout<<a[i]<<" ";
    return 0;
}