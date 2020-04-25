/*
Must Do Coding Questions for Companies 
https://www.geeksforgeeks.org/must-do-coding-questions-for-companies-like-amazon-microsoft-adobe/


:::::::::::::: Arrays :::::::::::::::::


1. Subarray with given sum
2. Count the triplets
3. Kadane’s Algorithm
4. Missing number in array
5. Merge two sorted arrays
6. Rearrange array alternatively
7. Number of pairs
8. Inversion of Array
9. Sort an array of 0s, 1s and 2s
10. Equilibrium point
11. Leaders in an array
12. Minimum Platforms
13. Reverse array in groups
14. K’th smallest element
15. Trapping Rain Water
16. Pythagorean Triplet
17. Chocolate Distribution Problem
18. Stock buy and sell
19. Element with left side smaller and right side greater
20. Convert array into Zig-Zag fashion
21. Last Index of 1
22. Spirally traversing a matrix
23. Largest Number formed from an Array


*/

//--------- Question 12 -----------




#include <bits/stdc++.h>
#define ll long long
#define T ll t; cin>>t; while(t--)
using namespace std;
#define speed ios_base::sync_with_stdio(0)
#define endl "\n"

struct lo
{
	ll a;
	ll d;
}lov[100001];

bool aco(lo lhs, lo rhs) { return lhs.a < rhs.a; }
int main()
{
speed;
	T
	{
		
		ll n,m,maxi=-1,i,flag=0;
		cin>>n;
		ll s[n]={0};
		for(i=0;i<n;i++) cin>>lov[i].a;
		for(i=0;i<n;i++) cin>>lov[i].d;
	sort(lov,lov+n,aco);	
		
	ll j=0;
	ll sel = lov[0].d;
	 s[0] = 1;
	 ll ind=1;
	while(flag!=5)
	{
		j++;
//		cout<<j<<" = j"<<endl;
		for(i=ind;i<n;i++)
		{
			if(sel < lov[i].a && s[i]==0)
			{
				s[i]=j;
				sel = lov[i].d; 
			}
		}
		
		for(i=0;i<n;i++)
		{
			if(s[i]==0)
			{
				
				flag=1;
				sel = lov[i].d;
				ind = i;
				s[ind] = j+1;
//				cout<<"iup "<<i<<" "<<sel<<endl;
				break;
			}
			else
			{
				flag=5;
//				cout<<"i "<<i<<endl;
			}
		}
//		for(i=0;i<n;i++) cout<<s[i]<<" ";
//			cout<<endl;
	}
		
		
//cout<<"j =="<<j<<endl;
	cout<<j<<endl;	
		
	
	
	
	}
return 0;
}
