// To reverse a number

//Any number which is to be divided can be expressed in the form of

//Dividend = Divisor x(Quotient) + Remainder

#include <iostream>
using namespace std;

int main() {

	cout << "Enter the number to be reversed: ";
	int n;
	cin >> n;

	int reverse = 0;     // variable that will store the reversed number
	int lastDigit = 0;   

	while (n > 0)
	{
		lastDigit = n % 10;   
		reverse = reverse * 10 + lastDigit;   
		n = n / 10;   

	}

	cout << "Reversed number: " ;
	cout << reverse;

}
