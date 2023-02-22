#include<iostream>
using namespace std;
void volume1(int l,int b=3,int h=4);
main()
{
	volume1(2);
}
void volume1(int l,int b,int h)
{
	int z; 
	z=l*b*h;
	cout<<"volume="<<z;
}
