#include <iostream> 

using namespace std;  

int main()
{
	bool innerEscape = false; 
	int i, j; 
	for(i = 20; ; i+=20) 
	{
		for(j = 1; j <= 20; j++)
		{
			if(i%j != 0)
				 break; 
		}	
		if(j == 21)
			break; 
	}
	cout << "The Answer is " << i << endl; 
	
	return 0; 
}
