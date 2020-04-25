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
	ll n,i,k;
	cin>>n;
	ll a[n],r[n],l[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	ll maxi=a[0];
	r[0] = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i] > maxi)
		{
			maxi = a[i];
			r[i] = a[i];
		}
		else
		{
			r[i]=maxi;	
		}
		
	}

	maxi=a[n-1];
	l[n-1] = a[n-1];	
	for(i=n-2;i>=0;i--)
	{
		if(a[i] > maxi)
		{
			maxi = a[i];
			l[i] = a[i];
		}
		else
		{
			l[i]=maxi;	
		}
		
	}
	
	ll min=-1,sum=0; 
	
	for(i=1;i<n-1;i++)
	{
		if(r[i] < l[i])
		{
			//r min
			min = r[i];
			sum=sum + (min - a[i]);
		//	cout<<"up "<<min<<" "<<sum<<endl;
		}
		else
		{
			//l min
			min= l[i];
			sum=sum + (min - a[i]);
		//	cout<<"down "<<min<<" "<<sum<<endl;
			
		}
	}
	cout<<sum<<endl;
//	for(i=0;i<n;i++)
//		cout<<r[i]<<" ";
//	cout<<endl;
//	for(i=0;i<n;i++)
//		cout<<l[i]<<" ";
//	cout<<endl;
	
}
return 0;
}

