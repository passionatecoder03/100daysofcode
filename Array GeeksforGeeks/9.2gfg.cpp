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

//--------- Question 9.2 -----------



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
		ll n,m,maxi,i;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++) cin>>a[i];
	int c0 = 0, c1 = 0, c2 = 0;
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
			c0++;
		else if(a[i]==1)
			c1++;
		else 
			c2++;
	}

		for(i=0;i<c0;i++)
			cout<<"0 ";
		for(i=0;i<c1;i++)
			cout<<"1 ";
		for(i=0;i<c2;i++)
			cout<<"2 ";
		cout<<endl;
	}
return 0;
}
