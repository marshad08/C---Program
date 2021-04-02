#include<bits/stdc++.h>

using namespace std;
//static int b[100];
//static int k=0;
void Merge(int a[],int l,int mid,int e)
{
	int i=l,j=mid+1;
	int b[e-l+1];
	int k=0;
	while(i<=mid && j<=e)
	{
		if(a[i]<a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}
	
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=e)
		b[k++]=a[j++];
	for(i=l;i<=e;i++)
		a[i]=b[i-l];
}
void MergeSort(int a[],int l,int e)
{
	if(l<e)
	{
		int mid=(l+e)/2;
		MergeSort(a,l,mid);
		MergeSort(a,mid+1,e);
		Merge(a,l,mid,e);
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
	MergeSort(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
