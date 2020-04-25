#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"

ll bs (ll a[] , ll n , ll f ,ll l)
{ 
	if(f<=l)
	{
		//cout<<f<<" "<<l<<endl;
		if(f==l && a[l]-1 != l) return l+1;
		if(f==l && a[l]-1 == l) return l+2;
		ll mid = (f+l)/2;
		if(a[mid]-1 <= mid)
			bs(a,n,mid+1,l);
		else
			bs(a,n,f,mid);
	}
	
}

int main()
{
speed;
	T
	{
	
		ll n,k,i,j,sum=0;
		cin>>n;
		n =n-1;
		ll a[n];
		
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		ll ans=0;
		if(n>1)
			 ans = bs ( a,n,0,n-1);
		if(n==1)
		{
			if(a[0]==1) ans=2;
			else ans=1;
			
		}
		
		cout<<ans<<endl;
	}
return 0;
}
