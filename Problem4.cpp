#include <iostream> 
#include <string>
#include <sstream>

using namespace std; 

bool isPalindrome(int num);

int main()
{	
	int largestPalindrome = 0; 
	for(int i = 999; i > 100; i--)
	{
		for(int j = 999; j > 100; j--)
		{
			int test = i*j;		
			if(isPalindrome(test))
				if(test > largestPalindrome)
					largestPalindrome = test; 
		}
	}
	cout << "The Answer is " << largestPalindrome; 
	return 0; 
}

bool isPalindrome(int num)
{
	ostringstream stringNum; 
	stringNum << num; 
	string numAsString = stringNum.str(); 
	for(int i = 0, j = numAsString.length()-1; i < j; i++, j--)
	{
		if(numAsString[i] != numAsString[j])
			return false; 
	}
	return true; 
}
