#include <stdio.h>

void swap_max(int a[], int l, int n)
{
	int max=n;
	for(int i=n+1;i<l;i++)
	{
		if(a[i]>a[max])
		{
			max=i;
		}
	}
	
	int temp=a[n];
	a[n]=a[max];
	a[max]=temp;
}


void ssort(int arr[], int l)
{
	for(int i=0;i<l;i++)
	{
		swap_max(arr,l,i);
	}
}


