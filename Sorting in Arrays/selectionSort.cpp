/*
SELECTION SORT:
--> Find the minimum element in unsorted array and swap it with element at begining
*/


#include <iostream>
#define SIZE 5
using namespace std;

int main()
{
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < (SIZE - 1); i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}



	return 0;

}