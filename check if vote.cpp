// created by Mohit Sheopuri on 10/6/2020
// program to check if one is eligible to vote and can be repeat the program using goto command
#include<iostream>
using namespace std;
int main()
{
	start:
	int i;
	char check;
	cout<<"Please enter your age :";
	cin>>i;
	
	if (i>=18)
	{
	cout<<" You are eligible to vote. Get your voter as soon as possible if not applied yet. "<<endl;
	}
	
	else 
	{
	int rem= 18-i;
	cout<<" Yor are not eligible to vote now. You will be eligble in "<< rem <<" year(s)"<<endl;
	}
	cout<<" Do you want to check again? \n Y for yes or press any other key"<<endl;
	cin>>check;
	
	if (check== 'y' || check== 'Y')
	{
		goto start;
	}	

return 0;	

}
