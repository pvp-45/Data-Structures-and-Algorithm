/*
Factorial of a number n can be written as:
n! = n * n - 1 * n-2 * n-3 .... * 1
5! = 5 * 4 * 3 * 2 * 1
*/

#include <iostream>
using namespace std;	

int fac(int n)
{
	int factorial = 1;
	for (int i = 2; i <= n; i++)
	{
		factorial *= i;

	}

	return factorial;
}

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int ans = fac(n);

	cout << "The factorial of the number " << n << " is " << ans << endl;

}