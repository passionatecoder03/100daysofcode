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
		ll i,n,j;
		cin>>n;
		ll a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		ll s=0;
		for(i=0;i<n;i++)
		{
		//	cout<<min(a[i],b[i])<<endl;
			s=s+min(a[i],b[i]);
		}	
		cout<<s<<endl;
	}
return 0;
}

