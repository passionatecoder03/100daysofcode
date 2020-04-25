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
		ll n,m,maxi,i;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++) cin>>a[i];
		ll k = n-1;
			for(i=0;i<n/2;i++)
			{
				cout<<a[k--]<<" "<<a[i]<<" ";
			}
			if(n%2!=0) cout<<a[n/2];

		cout<<endl;
		
	}
return 0;
}
