#include<bits/stdc++.h>
using namespace std;

void permute(string s , int l , int r , vector<string> &v)
{
    if(l==r)
    v.push_back(s);
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            permute(s,l+1,r,v);
            swap(s[l],s[i]);
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
	    string s;
	    cin >> s;
	    int len = s.length();
	    vector <string> v;
	    permute(s,0,len-1,v);
	    sort(v.begin(),v.end());
	    vector <string> :: iterator it;
		for(it=v.begin();it!=v.end();it++)
	    {
	        cout << *it << " ";
	    }
	    cout << endl;
	}
	return 0;
}
