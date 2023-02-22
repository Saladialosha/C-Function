#include<iostream>
using namespace std;
main()
{
	int i=10;
	int &j=i;
	cout<<" i="<<i<<" j="<<j<<endl;
	j=20;
	cout<<" i="<<i<<" j="<<j<<endl;
}
