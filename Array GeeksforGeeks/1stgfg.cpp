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

//--------- Question 1 -----------



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
	ll n,k,i;
		cin>>n>>k;
		ll a[n];
		
		for(i=0;i<n;i++)
			cin>>a[i];
		
		ll csum=a[0],s=0 , flag=1;
		
		for(i=1;i<=n;i++)
		{
			while(csum > k && s < i - 1)
			{
				csum=csum - a[s];
				s++;
				//cout<<csum<<endl;
			}
			
			if(csum==k)
			{
				cout<<s+1<<" "<<i<<endl;
				flag=0;
				break;
			}
			
			if(i < n)
				csum = csum + a[i];
			
		}
		if(flag==1)
		    cout<<"-1"<<endl;
		
		
	}
return 0;
}
