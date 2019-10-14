#include <iostream>
using namespace std;

int getPairsCount(int arr[], int n, int sum)
{
  int a,b,c,key,left,right,mid,count=0;
  for(a=0;a<=(n/2);a++)
  {
    c=arr[a];
    key=sum-c;
    left=a;
    right=n-1;
      while(left<=right)
      {
        mid = (left+right)/2;
        if(arr[mid]==key)
        {
          while(arr[mid]==key)
                {
                  count++;
                  mid++;
                }
          break;
        }
        else if(arr[mid]>key)
        {
          right=mid-1;
        }
        else if(arr[mid]<key)
        {
          left=mid+1;
        }
      }
    }
  if(arr[n-1]==1)
  {
    return count-1;
  }
  return count;
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
	cout << getPairsCount(arr,n,k);
}
