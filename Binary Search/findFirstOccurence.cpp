#include <stdio.h>
/* Include other headers as needed */
int main()
{ 
    int a,b,mid,key,n,ans=99,left,right;
    scanf("%d" , &b);
    while(b--)
    {
    scanf("%d" , &n);
    int arr[n];
    scanf("%d" , &key);
    for(a=0;a<n;a++)
    {
      scanf("%d" , &arr[a]);
    }
    left=0;
    right=n-1;
    while(left<=right)
    {
      mid=(left+right)/2;
      if(arr[mid]==key)
      {
        while(arr[mid]==key)
        {
          ans=mid;
          mid--;
        }
        break;
      }
      else if(arr[mid]>key)
      {
        right=mid-1;
      }
      else
      {
        left=mid+1;
      }
    }
    printf("%d\n",ans);
    }
    return 0;
}
