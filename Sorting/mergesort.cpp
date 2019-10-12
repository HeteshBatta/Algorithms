#include <iostream>
using namespace std;

void merge(int *array , int left , int mid , int right)
{
	int a;
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int Left[n1] , Right[n2];
	int i = 0;
	int j = 0;
	int k = left;
    for(a=0;a<n1;a++)
    {
    	Left[a] = array[left+a];
	}
	for(a=0;a<n2;a++)
	{
		Right[a] = array[mid+1+a];
	}
	while(i<n1 && j<n2)
	{
		if(Left[i]<Right[j])
		{
			array[k++]=Left[i++];
		}
		else
		{
			array[k++]=Right[j++];
		}
	}
	while(i<n1)
	{
		array[k++]=Left[i++];
	}
	while(j<n2)
	{
		array[k++]=Right[j++];
	}
}

void mergeSort(int *array , int left , int right)
{
	if(left<right)
	{
	int mid = left + (right - left)/2;
	mergeSort(array,left,mid);
	mergeSort(array,mid+1,right);
	
	merge(array,left,mid,right);
    }
}

int main()
{
	int n , i , a;
	cin >> n;
	int array[n];
	for(i=0;i<n;i++)
	{
		cin >> array[i];
	}
	mergeSort(array,0,n-1);
	for(a=0;a<n;a++)
	{
		printf("%d " , array[a]);
	}
}
