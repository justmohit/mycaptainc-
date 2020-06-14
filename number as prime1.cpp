//created by Mohit Sheopuri on 11/2/2020
//program to check whether a number can be expressed as a sum of prime and then expressing as a sum of 
//prime if possible
#include <iostream>
using namespace std;
bool checkP(int n)  //function to check prime
{
	int i;
	    bool isPrime = true;

  			for(i = 2; i <= n/2; ++i)
    			{
      				if(n % i == 0)
        				{
    	   					isPrime = false;
       						break;
        				}
  				}
		return isPrime;
}

int main()
{

	int n, i;
    bool flag = false;

    cout << "Enter a positive integer: ";
    cin >> n;

	    for(i = 2 ; i <= n/2 ; ++i)
   	    {
   	     if (checkP (i) )
   	        {
   	         if (checkP (n-i) )
				{
   	             cout << n << " = " <<i<< " + " << n-i << endl;
   	             flag = true;
   	            }
   	        }
   	    }

    if (!flag)
      cout << n << " cannot be expressed as sum of prime"<<endl;

    return 0;
}
