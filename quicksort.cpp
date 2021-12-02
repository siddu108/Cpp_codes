#include<bits/stdc++.h>
using namespace std;
void Quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int p=partition(a,l,h);
		Quicksort(a,0,l-1);
		Quicksort(a,l+1,h);
	}
} 
void swap(int a[],int i,int j)
{
	int t=a[i];
	a[j]=a[i];
	a[i]=t;
}
int partition(int a[],int l,int h)
{
	int pivot=a[h-1];
	int i=l-1;
	for(int j=l;j<h;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(a,i,j);
		}
	}
	swap(a,i+1,h-1);
	return i+1;
}
int main()
{
	int n;
	cout<<"enter size: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{	
		cin>>a[i];
	}
	Quicksort(a,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}