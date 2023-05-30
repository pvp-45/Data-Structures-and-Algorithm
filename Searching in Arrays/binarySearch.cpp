/*        BINARY SEARCH       */
/* 

The goal of this search is to search faster and more efficiently than the linear search which has the time complexity of O(n). Thus,
in this we need to come up with complexity lesser than O(n). 

To search in the binary format, the array should be sorted first. 
*/


#include <iostream>
#define SIZE 5

using namespace std;

int binarySearch(int arr[], int size, int key)
{
	int s = 0;
	int e = SIZE;

	while (s <= e)
	{
		int mid = (s + e) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}

		else if (arr[mid] > key)
		{
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}

	return -1;
}

int main()
{
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];   //input numbers in ascending order 
	}

	cout << "Enter the number to be found: ";
	int key;
	cin >> key;

	cout << "The number is at the index number " << binarySearch(arr, SIZE, key) << endl;;

}

/*
NOTE: 
--> The time complexity of this algorithm is O(log^n)
                                                  2
*/                                                