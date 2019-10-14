#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int a=0;a<n;a++)
	{
		cin >> arr[a];
	}
	int mid,num,left=0,right=n-1;
	cin >> num;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(num<arr[mid])
		{
			right=mid-1;
		}
		else if(num>arr[mid])
		{
			left=mid+1;
		}
		else if(num==arr[mid])
		{
			cout << mid;
			break;
		}
	}
}
