#include <stdio.h>

void swap(int *a ,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *array , int left , int right)
{
	int index = left - 1;
	int j;
	int pivot_element=array[right];
	for(j=left;j<right-1;j++)
	{
		if(array[j]<=pivot_element)
		{
			index++;
			swap(&array[index] , &array[j]);
		}
	}
	swap(&array[right] , &array[index+1]);
	return index+1;
}

void quicksort(int *array , int left , int right)
{
	if(left<right)
	{
		int pivot_index = partition(array,left,right);
		quicksort(array,left,pivot_index);
		quicksort(array,pivot_index+1,right);		
	}
}


int main()
{
	int n , a;
	scanf("%d" , &n);
	int array[n];
	for(a=0;a<n;a++)
	{
		scanf("%d" , &array[a]);
	}
	quicksort(array,0,n-1);
	for(a=0;a<n;a++)
	{
		printf("%d " , array[a]);
	}
}
