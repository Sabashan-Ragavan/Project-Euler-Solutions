#include <iostream> 

using namespace std;   

int power(int base, int exponent); 

int main()
{
	for(int a=1; a <= 1000 ; a++)
		for(int b=a+1; a+b <= 1000 ; b++)
			for(int c=b+1; a+b+c <= 1000; c++)
			{
				if((power(a,2) + power(b,2)) == power(c, 2))
					if(a+b+c == 1000)
						cout << "The Answer is " << a*b*c << endl; 
			}
			
	return 0; 
}

int power(int base, int exponent)
{
	int total = 1; 
	for(int i=1; i<=exponent; i++)
		total = total * base; 
	return total; 
}
