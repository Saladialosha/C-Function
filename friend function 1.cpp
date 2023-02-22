#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
	public:
		values1()
		{
			length=12;
			breadth=6;
		}
friend int area(rectangle p);
};
int area(rectangle r1)
{
	return(r1.length*r1.breadth);
}
main()
{
	rectangle obj;
	obj.values1();
	cout<<area(obj);
	
}
