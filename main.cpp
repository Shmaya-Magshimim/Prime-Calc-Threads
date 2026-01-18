#include "threads.h"



int main()
{
	call_I_Love_Threads();

	std::vector<int> primes1;
	getPrimes(58, 100, primes1);

	std::vector<int> primes3 = callGetPrimes(93, 289);

	callWritePrimesMultipleThreads(1, 100000, "primes2.txt", 2);

	system("pause");
	return 0;
}