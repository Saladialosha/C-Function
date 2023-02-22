#include<iostream>
using namespace std;
class c1
{
	private:
		static int a;
		int b;
	public:
		void sample1()
		{
			b=10;
			cout<<" values of a,b are "<<a<<" "<<b<<endl;
			a++;
			b++;
		}
};
 int c1::a;
 main()
 {
 	c1 obj1 , obj2, obj3;
 	obj1.sample1();
 	obj2.sample1();
 	obj3.sample1();
 	
 }
