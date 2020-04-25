#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"
int main()
{
speed;
	T
	{
		string s;
		cin>>s;
		ll n = s.length();
		ll i,ind=-1;
		for(i=0;i<n;i++)
		{
			if(s[i] == '1') ind=i;
		}
		cout<<ind<<endl;
	}
	
return 0;
}


