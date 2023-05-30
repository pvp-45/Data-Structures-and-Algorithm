/*

BubbleSort: Reapetedly swap two adjacent elements if they are in wrong order

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

	int counter = 1;

	while (counter < SIZE)
	{
		for (int i = 0; i < SIZE - counter; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		counter++;
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}