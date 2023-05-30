/*
Sum of first N natural numbers:

Sum = 1 + 2 + 3 + 4 + 5 + ..... + n
*/

#include <iostream>
using namespace std;

int sum(int n)
{
	int ans = 1;

	for (int i = 2; i <= n; i++)
	{
		ans += i;
	}
	return ans;
}

int main() {

	int n;
	cout << "Enter a number: ";
	cin >> n;

	int ans = sum(n);

	cout << "Sum of first " << n << " natural numbers is " << ans << endl;
}