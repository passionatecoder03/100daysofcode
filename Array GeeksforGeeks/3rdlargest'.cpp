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
	ll n,i;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	ll max1=0 , max2=0,max3=0;	
	
	for(i=0;i<n;i++)
	{
		if(a[i] > max1)
		{
			max3=max2;
			max2=max1;
			max1=a[i];
		}
	}
	cout<<max3<<endl;
}
return 0;
}

