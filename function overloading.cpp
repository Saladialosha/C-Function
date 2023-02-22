#include<iostream>
using namespace std;
void sum1(int,int);
void sum1(double,double);
void sum1(char,char);
main()
{
	int a=10,b=90;
	double c=7.52,d=9.12;
	char e='A',f='B';
	sum1(a,b);
	sum1(c,d);
	sum1(e,f);
}
void sum1(int x,int y)
{
	cout<<"sum of int = "<<x+y<<endl;
}
void sum1(double x,double y)
{
	cout<<"sum of double = "<<x+y<<endl;
}
void sum1(char x,char y)
{
	cout<<"sum of char = "<<x+y<<endl;
}
