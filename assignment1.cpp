/*Write a C++ program to understand 5 comparision,5 aassignment and 3 logical operators*/
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	x=10; //Assignment Operator-1
	cout<<"Value of x is:"<<x<<endl;
	if(x!=0)//Comparision Opeartor-1
	{
		x+=5;//Assignment Operator-2
		cout<<"New value of x after adding 5 is:"<<x<<endl;
	}
	if(x>=10)//Comparision Operator-2
	{
		x-=5;//Assignment Operator-3
		cout<<"New value of x after subtracting 5 is:"<<x<<endl;
	}
	y=10;
	cout<<"Value of y is:"<<y<<endl;
	if(x==y)//Comparision Operator-3
	{
		x*=5;//Assignment Operator-4
		y/=5;//Assignment Opeartor-5
		cout<<"New value of x after multiplying 5 is:"<<x<<endl;
		cout<<"New value of y after multiplying 5 is:"<<y<<endl;
	}
	if(x>0 && y>0)//Comparision Operator-4,5 and Logical Operator-1
	{
		cout<<"By logical AND operator both x and y are checked for certain conditions"<<endl;
	}
	if(!(x==y))//Logical Operator-2
	{
		cout<<"By logical NOT operator x and y is are checked for certain conditions"<<endl;
	}
	if(x>=y  || x<=y)//Logical Operator-3
	{
		cout<<"BY logical OR operator x and y is are checked for certain conditions"<<endl;
	}
	getchar();
	return 0;
}
