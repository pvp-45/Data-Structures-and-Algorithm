// check if the given number is armstrong or not 

/*
What is an armstrong number?

--> Given any number, if every single digit's cube is being added to one another the number obtained would be equal to the original 
    number.
Example: 1 5 3
         1^3 + 5^3 + 3^3 = 153 (original number)
Thus, 153 is an armstrong number
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    int sum = 0;
    int lastDigit = 0;
    int originalN = n;

    while (n > 0) {
        lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }

    if (sum == originalN)
    {
        cout << "It is an armStrong Number";
    }

    else {
        cout << "Not an armStrong Number";
    }

}