#include<iostream>
#include<string.h>
using namespace std;
class A
{
	public:
		void wear()
		{
			cout<<"ice-cream"<<endl;
		}
};
class B:public A 
{
	public:
		void wear()
		{
			cout<<"chocolate"<<endl;
			A a1;
			a1.wear();
		}
};
int main()
{
	B b1;
	b1.wear();
	return 0;
}

