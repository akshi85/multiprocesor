#include<iostream>
#include<string.h>
using namespace std;
class Message
{
	private:
		char A[];
		public:
			Message(char B[])
			{
				strcpy(A,B);
			}
			void print()
			{
				cout<<"my name:"<<endl;
			}
			void print(char B[])
			{
				cout<<A<<" "<<B;
			}
};
int main()
{
	Message obj("akshita");
	obj.print();
	obj.print("ajudiya");
	return 0;
}
