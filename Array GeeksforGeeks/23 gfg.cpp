#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"

int compare(string X , string Y)
{
	string XY = X.append(Y);
	string YX = Y.append(X);
	
	return XY.compare(YX) > 0 ? 1 : 0;
}

int printLargest(vector<string>arr)
{
	sort(arr.begin() , arr.end() , compare);
	
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	
}

int main()
{
speed;
	T
	{
		vector<string> arr; 
		ll n,i;
		cin>>n;
		string a;
		for(i=0;i<n;i++)
		{
			cin>>a;
			arr.push_back(a); 
		}
    			
		printLargest(arr) ;
	}
return 0;
}


