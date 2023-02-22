#include<iostream>
using namespace std;
inline int sum(int x , int y)
{
	return(x+y);
}
main()
{
	int m=10, n=25;
	int a, b, c, d;
	c=sum(7,8);
	d=sum(19,49);
	cout<<" sum ="<<c<<endl;
	cout<<" sum ="<<d<<endl;
}
