/*
Must Do Coding Questions for Companies 
https://www.geeksforgeeks.org/must-do-coding-questions-for-companies-like-amazon-microsoft-adobe/


:::::::::::::: Arrays :::::::::::::::::


1. Subarray with given sum
2. Count the triplets
3. Kadane�s Algorithm
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
14. K�th smallest element
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

//--------- Question 5.1 -----------



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
		cin>>n>>m;
		ll a[n],b[m];
		a[n] = 10000000000;
		b[m] = 10000000000;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<m;i++) cin>>b[i];

	ll j=n-1,k=m-1,h;
	
		for(i=0;i<m;i++)
		{
			//cout<<a[j]<<" "<<b[k]<<endl;
			if(a[j] > b[k])
			{
				swap(a[j],b[k]);
				k--;
				for(h=j;h>0;h--)
				{
					if(a[h] < a[h-1])
					{
					 	swap(a[h],a[h-1]);
					 	
					}
					else
					{
						break;
					}
					
				}
				
			}
			else
			{
				k--;
			}
		}

		for(i=0;i<n;i++) cout<<a[i]<<" ";
		for(i=0;i<m;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
return 0;
}
