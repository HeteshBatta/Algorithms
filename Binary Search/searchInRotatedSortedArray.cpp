#include <iostream>
using namespace std;

int getindex(int *a , int size)
{
  for(int i=0;i<size;i++)
  {
    if(a[i]>a[i+i])
      return i;
  }
  return 0;
}
int searchRotatedSortedArray(int *arr, int n, int target)
{
   int left,right,mid;
   int k = getindex(arr,n);
   if(target>=arr[0])
   {
    left=0;
    right=k;
    while(left<=right)
    {
      mid=(left+right)/2;
      if(arr[mid]==target)
      {
        return mid;
      }
      else if(arr[mid]>target)
      {
         right=mid-1;
      }
      else
      {
        left=mid+1;
      }
    }
   }
   else
   {
     left=k+1;
     right = n;
     while(left<=right)
     {
      mid=(left+right)/2;
      if(arr[mid]==target)
      {
        return mid;
      }
      else if(arr[mid]>target)
      {
        right=mid-1;
      }
      else
      {
        left=mid+1;
      }
     }
   }
  return -1;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int a=0;a<n;a++)
	{
		cin >> arr[a];
	}
	int k;
	cin >> k;
	cout << searchRotatedSortedArray(arr,n,k);
}
