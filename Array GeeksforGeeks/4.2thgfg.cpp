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

//--------- Question 4.2 -----------



#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t, x;
	cin>>t;
	while(t--)
	{
		int n,res=0;
		cin >> n;

		for(int i=1;i<n;i++){
			cin >> x;
			res = res^x;
			cout<<res<<endl;

		}
		for(int i=1;i<=n;i++){
			res = res^i;
			cout<<res<<endl;
		}
		cout<<res<<endl;
	}
	return 0;
}
