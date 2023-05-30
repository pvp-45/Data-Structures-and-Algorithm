#include <iostream>
using namespace std;

//Hollow Rectangle Pattern

int main() {
	int row, col;
	cout << "Enter number of rows:";
	cin >> row;
	cout << "Enter number of columns:";
	cin >> col;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 1 || i == 2 || i == 3)
			{
				if (j == 1 || j == 2)
				{
					cout << " ";
					continue;
				}
			}
			cout << "*";
		}
		cout << endl;
	}

}