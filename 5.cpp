#include<iostream>
using namespace std;
main()
{
	int a=3, b=8;
	int sum1(int , int); //prototype
	sum1(3,8); // function call with actual arguments
}
    int sum1(int x, int y)
    {
    	int z;
    	z=x+y;
    	cout<<" sum ="<<z;
    	return z ;
	}
