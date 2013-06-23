#include <iostream> 

using namespace std;   

bool isPrime(int x); 

//Will try to implement a quicker solution later
int main()
{
	unsigned long long total = 0; 
	int i; 
	for(i=2; i <= 2000000 ; i++)
	{
		if(isPrime(i))
		{
			total+=i;  
			cout << "i= " << i << endl; 
			cout << "Total= " << total << endl; 
		}
	}
	cout << "The Answer is " << total << endl; 
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
