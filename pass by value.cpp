#include<iostream>
using namespace std;
main()
{
	int a,b;
	void swap(int ,int);
	cout<<" enter the values for a,b"<<endl;
	cin>>a>>b;
	cout<<" a,b before function call "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<" a,b after function call  "<<a<<" "<<b<<endl;
}
void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	cout<<" values of x,y after swaping  "<<x<<" "<<y<<endl;
}
