//created by Mohit Sheopuri on 14/6/2020
//Let's code arrays
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i;
	
	cout<<" Enter the elements of the array"<< endl; //print statement asking user to enter the elements of array
	
		for(i=0; i<5; i++)
			{
				cin>> *(arr + i);
			}
	
	cout<<"\nYou entered these numbers "<<endl;
		
		for(i=0; i<5; i++)
			{
				cout<<*(arr + i)<<endl;
			}
return 0;
}
