/*

To find the maximum number among the given list of numbers in an array

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

	int mx = arr[0]; //Tracks the max number in the array

	for (int i = 0; i < SIZE; i++)
	{
		mx = max(mx, arr[i]);
	}

	cout << "The max number in the array is " << mx << endl;
	return 0;
}