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

//--------- Question 10 -----------



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
		ll n,m,maxi,i,flag=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++) cin>>a[i];
	ll f[n]={0},l[n]={0};
	f[0]=a[0]; l[n-1]=a[n-1];
	for(i=1;i<n;i++)
	{
		f[i]=f[i-1]+a[i];
	}
	for(i=n-2;i>=0;i--)
	{
		l[i]=l[i+1]+a[i];
	}
	m = n-1;
	for(i=0;i<n-2;i++)
	{
		if(f[i]==l[i+2])
		{
			cout<<i+2<<endl;
			flag=1;
			break;
		}
	}
if(n==1) cout<<"1"<<endl;
else if(flag==0) cout<<"-1"<<endl;
//		for(i=0;i<n;i++) cout<<f[i]<<" ";
//		cout<<endl;
//		for(i=0;i<n;i++) cout<<l[i]<<" ";
//		cout<<endl;
	}
return 0;
}
