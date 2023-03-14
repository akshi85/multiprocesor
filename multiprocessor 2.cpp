#include<iostream>
#include<string.h>
using namespace std;
class Member
{
	public:
		void function0()
		{
			cout<<" with 0 arguments called\n";
		}
		void function1(int arg1)
		{
			cout<<" with 1 arguments called.argument:"<<arg1<<endl;
		}
		void function2(int arg1,int arg2)
		{
			cout<<" with 2 arguments called.argument:"<<arg1<<" "<<arg2<<endl;
		}
		void function3(int arg1,int arg2,int arg3)
		{
			cout<<" with 3 arguments called.argument:"<<arg1<<" "<<arg2<<" "<<arg3<<endl;
		}
};
int main()
{
	Member obj;
	obj.function0();
	obj.function1(1);
	obj.function2(2,3);
	obj.function3(4,5,6);
}
