#include<iostream>
using namespace std;
class sister; //forward referencing 
class brother
{
	private:
		int b_pay,bonus,totalb;
	public:
		void getinfo()
		{
			b_pay=100000;
			bonus=6000;
			totalb=b_pay+bonus;
			cout<<totalb <<endl;
		}
friend class sister;
};
class sister
{
	private:
		int old_saving,new_saving,totals;
	public:
		void getinfo1()
		{
			old_saving=10000;
			new_saving=20000;
			totals=old_saving+new_saving;
			cout<<totals <<endl;
		}
		void total_amount(brother b, sister s)
{
	cout<<" total_amount = "<<(b.totalb+s.totals)<<endl;
}
};

main()
{
  brother objb;
  sister objs;
  objb.getinfo();
  objs.getinfo1();
  objs.total_amount(objb,objs);
}

