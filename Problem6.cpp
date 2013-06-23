#include <iostream> 

using namespace std;  

int power(int base, int exponent); 

int main()
{
	int sumOfSquares = 0, sum = 0, squareOfSum = 0; 
	
	for(int i = 1; i <= 100; i++)
		sumOfSquares += power(i, 2); 
	
	for(int i = 1; i <= 100; i++)
		sum += i; 
	squareOfSum = power(sum, 2); 
	
	int difference = squareOfSum - sumOfSquares; 
	cout << difference << endl; 
	return 0; 
}

int power(int base, int exponent)
{
	int total = 1; 
	for(int i=1; i<=exponent; i++)
		total = total * base; 
	return total; 
}
