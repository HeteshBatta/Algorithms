#include <iostream>
using namespace std;

int rotationCount(int a[], int size)
{
  for(int b=0;b<size;b++)
  {
    if(a[b]>a[b+1])
      return b+1;
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
	cout << rotationCount(arr,n);
}
