// To check if a number is prime or not

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n;
	cout << "Enter the number: ";
	cin >> n;
	int flag = 0;

	for (int i = 2; i < sqrt(n); i++)       //it is not necessary to run the loop till the number i reaches the value n, if we run it 
		                                    // till the square root of n, we will still be able to find if the number is prime or not.
	{
		if (n % i == 0)
		{
			cout << "Non-Prime";
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		cout << "Prime";
	}
}
