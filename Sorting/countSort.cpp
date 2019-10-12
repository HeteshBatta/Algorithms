#include <iostream>
using namespace std;
void countSort(int *output , int *arr , int n , int k)
{
	int temp[k+1]={0};
	for(int a=1;a<=n;a++)
	{
		temp[arr[a]]++;
	}
	for(int a=1;a<k+1;a++)
	{
		temp[a]=temp[a]+temp[a-1];
	}
	for(int a=1;a<=n;a++)
	{
		output[temp[arr[a]]] = arr[a];
		temp[arr[a]]--;
	}
}
int main()
{
	int n , k;
	cin >> n;
	// no of elements
	cin >> k;
	// range of elements
	int arr[n+1];
	int output[n+1];
	for(int a=1;a<=n;a++)
	{
		cin >> arr[a];
	}
	countSort(output,arr,n,k);
	for(int a=1;a<=n;a++)
	{
		cout << output[a] <<" ";
	}
}
