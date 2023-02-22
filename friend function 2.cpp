#include<iostream>
using namespace std;
class c1
{
	private:
		int b_pay , bonus ;
	public:
		void info()
		{
			b_pay=100000;
			bonus=6000;
		}
friend void totalsalary(c1 );
};
void totalsalary(c1 obj)
{
	cout<<"totalsalary = "<<(obj.b_pay+obj.bonus);
}
main()
{
	c1 obj1;
	obj1.info();
	totalsalary(obj1);
	
}
