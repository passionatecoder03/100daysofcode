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

//--------- Question 13 -----------


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
	ll n,i,m,j;
	cin>>m>>n;
	ll a[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];

	ll c1=0,c2=0,c3=0,c4=0,k=0,l=0;
	//for(i=0;i<m*n;i++)
	{
		while(k<m)
		{
			cout<<a[l][k]<<" f ";
			++k;
		}
			cout<<l<<" "<<k<<endl;
			while(l<n-1)
			{
				cout<<a[l][k]<<" s ";
				++l;	
			}
				
				cout<<l<<" "<<k<<endl;
				while(k>0)
				{
					cout<<a[l][k]<<" t ";	
					--k;
				}
					
					cout<<l<<" "<<k<<endl;
				while(l>0)
				{
					cout<<a[l][k]<<" fo ";
					--l;	
				}
						
//		if(l == c1)
//		{
//			cout<<a[l][k++]<<" f";
//			if(k==m-1-c1) c1++;
//		}
//		else if(k == n-1-c2)
//		{
//			cout<<a[l++][k]<<" s";
//			if(l==n-1-c2) c2++;			
//		}
//		else if(k == n-1-c1)
//		{
//			cout<<a[l][k--]<<" t";
//			if(l==c2-1) c3++;
//		}
//		else if(l == n-1-c4)
//		{
//			cout<<a[l--][k]<<" f";
//			if(l==c1-1) c4++;			
//		}
		
		
	}

	


	
}
return 0;
}

