#include<iostream>
using namespace std;
class A // base class
{
	int c;
public:
	int a;
protected:
	int b;
public:
	void display()// mf
	{
		cout<<"in display of A\n";
	}
};
class B:private A // derived class but private access specifier
{
public:
	int c;
public:
	void show()
	{
	    display();//allowed
		cout<<a<<b;
	}
};
class C:private B// multilevel
{
	public:
	void show()
	{
	   // display(); not allowed
		//cout<< a<<b; not allowed
		cout<<c;
	}
};
int main()
{
	B bobj;
	bobj.show();
//	bobj.display(); not allowed
}
