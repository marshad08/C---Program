#include<bits/stdc++.h>
using namespace std;
void Heapify(int a[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && a[l]>a[largest])
		largest=l;
	if(r<n && a[r]>a[largest])
		largest=r;
		
	if(largest!=i)
	{
		swap(a[largest],a[i]);
		Heapify(a,n,largest);
	}
}
void HeapSort(int a[],int n)
{
	int i;
	// For Build Max Heap
	for(i=n/2-1;i>=0;i--)
		Heapify(a,n,i);
	
	// For Delete First Element and swap with last element and again make a max heap
	for(i=n-1;i>0;i--)
	{
		swap(a[0],a[i]);
		Heapify(a,i,0);
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];
	HeapSort(a,n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
