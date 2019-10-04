#include <iostream>
using namespace std;
int main()
{
	string str , pattern;
	cin >> str;
	cin >> pattern;
	string result = pattern + '$' + str;
	int len1 = result.length();
	int len = pattern.length();
	int M[len1]={0};
	int j=0;
	for(int i=len;i<len1;i++)
	{
		if(result[j]==result[i])
		{
			j++;
		}
		else
		{
			j=0;
		}
		if(j==len)
		{
			M[i]=j;
			j=0;
		}
	}
	for(int i=0;i<len1;i++)
	{
		if(M[i]==len)
		{
			cout << "String present at " <<  i-len << endl; 
		}
	}
}
