/* 
   Fibonecci Sequence
--> A sequence where the next term is obtained by the sum of the previous two terms.
   Example
--> 0,1,1,2,3,5,8,13,....
*/ 

#include <iostream>
using namespace std;

void fib(int n)
{
	int t1 = 0;
	int t2 = 1;
	int nextTerm = 0;

	cout << t1 << ", " <<  t2;

	for (int i = 1; i <= n; i++)
	{
		
		nextTerm = t1 + t2;
		cout << ", " << nextTerm;
		t1 = t2;
		t2 = nextTerm; 



	}

}


int main()
{
	int n = 0;
	cout << "Enter a number till the sequence should run: ";
	cin >> n;

	fib(n);
}