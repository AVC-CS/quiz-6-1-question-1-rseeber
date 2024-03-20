#include "main.hpp"

// Do not change this file.
// Use q1.hpp file to complete the functions

int main()
{
	int begin, end;
	int prime1, prime2;

	getTwoValues(begin, end);
	prime1 = getNextPrime(begin);
	cout << "The prime number after " << begin << " is " << prime1 << endl;
	prime2 = getPrevPrime(end);
	cout << "The prime number before " << end << " is " << prime2 << endl;
}
