#include<bits/stdc++.h>
using namespace std;
int heap_size;
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void heapify(int a[], int i)
{
	int l=2*i+1;
	int r=2*i+2;
	int large=i;
	if(l<heap_size && a[l]>a[i])
	{
		large=l;
	}
	if(r<heap_size && a[r]>a[large])
	{
		large=r;
	}
	if(large!=i)
	{
	    swap(&a[i],&a[large]);
		heapify(a,large);
	}
}
void BuildHeap(int a[], int n)
{
	heap_size=n;
	for(int i=n/2;i>=0;i--)
	{
		heapify(a,i);
	}
}
void Heapsort(int a[],int n)
{
	BuildHeap(a,n);
	for(int i=n-1;i>0;i--)
	{
		swap(&a[0],&a[i]);
		heap_size--;
		heapify(a,0);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	heap_size=n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	Heapsort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}