#include <iostream>
#include <cmath>

int numberOfFactors(int num); 

using namespace std;

int main() 
{	
	for(int i=1, n =1; ; i = (n*(n+1))/2)
	{
		if(numberOfFactors(i) > 500)
		{
			cout << "The answer is: " << i << endl; 
			break; 
		}
		n++;  
	}	
	return 0; 
}

int numberOfFactors(int num)
{
	if(num == 1)
		return 1; 
	
	int counter=0;
	int sqrtVar = (int)sqrt(num); 
	for(int i=1; i<= sqrtVar; i++)
		if(num%i == 0)
			counter+=2; 
	if(sqrtVar*sqrtVar == num)
		counter--; 	
		
	return counter; 
}



