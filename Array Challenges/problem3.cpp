/*

Problem 3:  [Appeared in Google KickStart]

An arithmatic array is an array that contains at least two integers and the differences between consecutive integers are equal.
For example, [9,10],[3,3,3], and [9,7,5,3] are arithmetic arrays, while [1,3,3,7],[2,1,2] and [1,2,4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She wants to choose a contiguous arithmetic
subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.

Input:
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer
N. The second line contains N integers. The ith integer is A.

Output:
For each test case, output one line containing Case #x:y, where x is the test case number (starting from 1) and y is the length of the longest
contiguous arithmetic subarray.

Constraints:
Time limit: 20 seconds per test set.
Memory limit: 1GB
1<=T<=100.
0<=Ai<=10^9                                              1 sec = 10^8 operations[approx]
Test Set 1:                                             20 sec = 2X10^9 operations{approx]
2<=N<=2000

Test Set 2:
2<=N<=2X10^5 for at most 10 test cases.

For the remaining cases, 2<=N<=2000.

*/

#define SIZE 7
#include <iostream>
using namespace std;

int main()
{
	int arr[SIZE] = {};
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	int curr = 2;
	int ans = 2;
	int pd = arr[1] - arr[0];    //previous difference
	int j = 2;

	while (j < SIZE)
	{
		if (pd == arr[j] - arr[j - 1])
		{
			curr += 1;
		}
		else {
			pd = arr[j] - arr[j - 1];
			curr = 2;
		}
		ans = max(ans, curr);
		j++;
	}
	cout << "the length of the longest contiguous arithmetic subarray is " << ans << endl;
	


	return 0;
}