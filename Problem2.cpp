#include <iostream> 

#define MAXLENGTH 10000

using namespace std; 

int main()
{	
	unsigned long long array[MAXLENGTH] = { 0 }; 
	array[0] = 1; 
	unsigned long long sum = array[1] = 2; 
 
	for(int i = 2; ; i++)
	{
		array[i] = array[i-1] + array[i-2]; 
		
		if(array[i] >= 4000000)
			break;
		if((array[i])%2 == 0)
			sum += array[i]; 
	}
	cout << "Sum of even-valued terms of the fib. sequence which dont exceed 4 mill: " << sum; 

	return 0; 
}
