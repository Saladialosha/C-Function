#include<iostream>
using namespace std;
class c2;  //forward referencing
class c1
{
    private:
		int length,breadth;
	public:
		void get()
		{
			length=12;
			breadth=6;
		}
friend void volume(c1 , c2);
};
class c2
{
	private:
		int height;
	public:
		void get1()
		{
			height=30;
		}
friend void volume(c1,c2);
};
void volume(c1 obj1 ,c2 obj2)
{
	cout<<" volume = "<<(obj1.length*obj1.breadth*obj2.height);
}
main()
{
	c1 obj3;
	c2 obj4;
	obj3.get();
	obj4.get1();
	volume(obj3,obj4);
}
