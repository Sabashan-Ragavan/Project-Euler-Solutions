#include <iostream> 

using namespace std;  

bool isPrime(int x);  

int main()
{
	int total = 0; 
	int i; 
	for(i=2; ; i++)
	{
		if(isPrime(i))
			total++; 
		if(total == 10001)
			break; 
	}
	cout << "The Answer is " << i << endl; 
	
	return 0; 
}

bool isPrime(int x)
{
	for(int i =2; i < x; i++)
	{
		if(x%i == 0)
			return false; 
	}
	return true; 
}
