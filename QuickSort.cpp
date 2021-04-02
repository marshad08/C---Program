#include<bits/stdc++.h>

using namespace std;

// This is for when Pivot as a last Element
int Partition(int a[],int lb,int ub)
{
	int start=lb,end=ub;
	int pivot=a[ub];
	do
	{
		while(a[start]<pivot && start<ub)
			start++;
		while(a[end]>=pivot)
			end--;
		if(start<end)
			swap(a[start],a[end]);
	}while(start<end);
	swap(a[ub],a[start]);
	return start;
}

// This is for pivot as a first Element
/*int Partition(int a[],int lb,int ub)
{
	int start=lb,end=ub;
	int pivot=a[lb];
	do
	{
		while(a[start]<=pivot && start<ub)
			start++;
		while(a[end]>pivot)
			end--;
		if(start<end)
			swap(a[start],a[end]);
	}while(start<end);
	swap(a[lb],a[end]);
	return end;
}*/
void QuickSort(int a[],int l,int e)
{
	if(l<e)
	{
		int p=Partition(a,l,e);
		QuickSort(a,l,p-1);
		QuickSort(a,p+1,e);
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
	QuickSort(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
