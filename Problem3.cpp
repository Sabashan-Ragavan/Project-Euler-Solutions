#include <iostream> 

unsigned long long MAGICNUMBER = 600851475143ull; 

bool isPrime(long num); 

using namespace std; 

int main()
{
	cout << "The final number printed is the largest prime factor " << endl; 
	long largestPrime = 1; 
	
	for(long i = 2; i <= MAGICNUMBER/2 ; i++)
	{
		if(isPrime(i) && (MAGICNUMBER%i == 0))
		{
			largestPrime = i; 
			cout << largestPrime << endl; 
		}		
	}
	
	return 0; 
}

bool isPrime(long num)
{
	if(num <= 1) 
		return false; 
	for(int i = 2; i*i <= num; i++)
	{
		if(num%i == 0)
			return false; 
	}
	return true; 
}
