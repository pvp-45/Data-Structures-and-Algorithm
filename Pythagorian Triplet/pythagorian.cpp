/*
Pythagorian Triplet:
To see if the three numbers given form a pythagorian triplet or not.
a^2 = b^2 + c^2
(a being the maximum among all the three numbers)

New Function:
max(x,y,z) --> assigning this function to a variable gives the value that is highest among x,y,z to the variable.
*/


#include <iostream>
#include <cmath>

using namespace std;

bool check(int x, int y, int z)
{
	bool isPythagorianTriplet;
	int a, b, c;
	a = max(x, max(y, z));
	
	if (a == x)
	{
		b = y;
		c = z;
	}
	else if (a == y)
	{
		b = x;
		c = z;
	}
	else
	{
		b = y;
		c = x;
	}
	if (a * a == (b * b) + (c * c))
	{
		isPythagorianTriplet = true;
	}
	else {
		isPythagorianTriplet = false;
	}

	return isPythagorianTriplet;
}

int main()
{
	int x, y, z;
	cout << "Enter three numbers: ";
	cin >> x >> y >> z;

	if (check(x, y, z))
	{
		cout << "Pythagorian Triplet";
	}
	else {
		cout << "Not a pythagorian triplet";
	}

}