#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string str , pattern;
	cin >> str;
	cin >> pattern;
	int len1 = str.length();
	int len2 = pattern.length();
	int M[len2]={0};
	int j=0 , c=0 , i;
	for(i=1;i<len2;i++)
	{
		if(pattern[j]==pattern[i])
		{
			c++;
			j++;
			M[i]=c;
		}
		else if(c!=0)
		{
			c=0;
			j=0;
		}
	}
	j=0;
	for(i=0;i<len1;i++)
	{
		cout << i << " " << j << " " << str[i] << " " << pattern[j] << endl;
		if(pattern[j]==str[i])
		{
			j++;
		}
		else 
		{
			if(M[j-1]==0)
			{
				j=0;
			}
			else
			{
				j=M[j-1];
				i--;
			}
		}
		if(j==len2)
		{
			cout << "Pattern found at " << i-len2+1 << endl;
		}
	}
}

