//Use for loop and while loop to write a program in C++ for printing first 10 prime numbers.
#include<iostream>
using namespace std;
int main()
{
	int list[10]={2};
	int i,j,count=1,prime=0;
	cout<<"The first ten prime numbers are:"<<endl;
	for(i=2;i<=30;i++)
	{
		for(j=0;j<count;j++)
		{
			if(i%list[j]==0)
			{
				prime=1;
			    break;
			}
			else
			{
				prime=0;
			}
		}
		if(prime==0)
		{
			list[count]=i;
			count++;
		}
	}
	i=0;
	while(i<10)
	{
		cout<<list[i]<<endl;
		i++;
	}
	getchar();
	return 0;
}
