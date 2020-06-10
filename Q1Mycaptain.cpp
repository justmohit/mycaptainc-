//code created by Mohit Sheopuri on 10/6/2020
//Code 1- Gives the size of different types of variables
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
 	a= sizeof(int);
 	b= sizeof(char);
 	c= sizeof(float);
 	d= sizeof(double);
 	
	cout<<"Size of int is "<<a<<" byte(s)"<<endl;
	cout<<"Size of char is "<<b<<" byte(s)"<<endl;
	cout<<"Size of float is "<<c<<" byte(s)"<<endl;
	cout<<"Size of double is "<<d<<" byte(s)"<<endl;

// code2 - To find the product of two numbers entered by the user

	float x,y;
	cout<<"Please enter the number you want to multiply - "<<endl;
	cin>> x >> y; //command to take input from the user
	float pro = x*y;
	cout<< " The product of the numbers is : "<< pro;
}
