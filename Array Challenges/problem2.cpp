/*

Problem 2:

Given an array a[] of size n. Output sum of each subarray of the given array.

Approach:

Iterate over all the subArrays

*/

#define SIZE 5
#include <iostream>
using namespace std;

int main()
{
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
	int count = 1;
	for (int i = 0; i < SIZE; i++)
	{
		sum = 0;
		for (int j = i; j < SIZE; j++)
		{

			sum += arr[j];
			cout << "Sub Array " << count << ": " << sum << endl;
			count++;
		}
	}

	return 0;
}