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

//--------- Question 19 -----------



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
		if(a[i] < maxi)
		{
			maxi = a[i];
			l[i] = a[i];
		}
		else
		{
			l[i]=maxi;	
		}
		
	}
	ll flag=0;
	for(i=1;i<n-1;i++)
	{
		if(a[i] <= l[i+1] && a[i] >= r[i-1])
		{
			
			cout<<a[i]<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0) cout<<"-1"<<endl;
	

	for(i=0;i<n;i++)
		cout<<r[i]<<" ";
	cout<<endl;
	for(i=0;i<n;i++)
		cout<<l[i]<<" ";
	cout<<endl;
	
}
return 0;
}

