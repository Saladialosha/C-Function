#include<iostream>
using namespace std;
class zz
{
	private:
		static int a;
		int b;
	public:
		void function()
		{
			b=10;
			cout<<" values of a,b are "<<a<<" "<<b<<endl;
			a++;
			b++;
		}
		static stfunction(int z)
		{
			a=z;
		}
};
 int zz::a;
 main()
 {
 	zz obj1;
 	obj1.function();
 	obj1.function();
 	obj1.stfunction(20);  //ZZ::stfunction(20);
 	obj1.function();
 	obj1.function();
 	
 }
