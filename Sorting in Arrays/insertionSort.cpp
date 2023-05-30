/*
 
Insertion Sort: Insert an element from unsorted array to its correct position in sorted array

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

	for (int i = 1; i < SIZE; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && key < arr[j])
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = key;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}