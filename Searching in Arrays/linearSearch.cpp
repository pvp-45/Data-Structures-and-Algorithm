/*      LINEAR SEARCH     */

#include <iostream>
#define SIZE 5
using namespace std;

int linearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{

	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	cout << "Enter the key to be found: ";
	int key;
	cin >> key;

	cout << "It is in the index number " << linearSearch(arr, SIZE, key) << endl;
	

	return 0;


	/*
	NOTE:
	--> The time complexity of this algorithm will be O(n)
	*/
	
}