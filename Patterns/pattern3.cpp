#include <iostream>
using namespace std;

//Inverted Half Pyramid

int main() {

	int n = 5;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 5; j>count; j--)
		{
			cout << "*";
			
		}
		count += 1;
		cout << endl;
	}

}