#include<bits/stdc++.h>
using namespace std;

int possible=0;

int issafe(int row , int col , int n , vector <int> arr[])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(arr[row][i]==1)
        return 0;
    }
    for(i=row , j=col ; i>=0 && j>=0 ;i--,j--)
    {
        if(arr[i][j]==1)
        return 0;
    }
    for(i=row , j=col ; i<n && j>=0 ; i++ , j--)
    {
        if(arr[i][j]==1)
        return 0;
    }
    return 1;
}

void print(vector <int> arr[], int n)
{
    possible = 1;
    int i=0,j=0;
    cout << "[";    
    while(j<n)
    {
        i=0;
        while(i<n)
        {
            if(arr[i][j]==1)
            cout << i+1 << " ";
            i++;
        }
        j++;
    }
    cout << "] ";
}

int check(vector <int> arr[] , int n , int row , int col)
{
    if(col >= n)
    {
        print(arr,n);
        return 1;
    }
    else
    {
        for(int i=row;i<n;i++)
        {
            if(issafe(i,col,n,arr))
            {
                arr[i][col]=1;
                check(arr,n,0,col+1);
                arr[i][col]=0;
            }
        }
    }
}

int main()
 {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector <int> arr[n];
	    for(int i=0;i<n;i++)
	    {
	        arr[i].resize(n,0);
	    }
	    
	    possible = 0;
	    
	    check (arr,n,0,0);
	    
	    if(possible == 0)
	    cout << "-1";
	    cout << endl;
	}
	return 0;
}
