//
//#include<iostream>
//using namespace std;
//class complex
//{
//	int real,img;
//public:
//	complex();
//	complex(int,int);
//	void display();
//	complex operator+(int);
//	friend complex operator+(int,complex&);
//};
//complex::complex() //deafult constructor calling
//{}
//complex::complex(int real,int img) // (4,8)
//{
//	this->real=real; //
//	this->img=img;
//}
//void complex::display()
//{
//	if(img>0)
//	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
//	else
//	cout<<"complex number is "<<real<<img<<"i"<<endl;
//}
//complex complex::operator+(int num)//c2=5+c1(4,8)
//{
//	complex temp;
//	temp.real=real + num;// 4+5
//	temp.img=this->img + num;// 5+8=13i
//	return temp;
//}
//complex operator+(int num,complex& c)
//{
//	complex temp;
//	temp.real=c.real + num;
//	temp.img=c.img + num;
//	return temp;
//}
//int main()
//{
//
//	
//	complex c1(4,8);//class c1 obj
//	complex c2=5+c1;// c2=5.operator+(c1) =====> c2=operator+(5,c1)            
//	c2.display();
//}

#include<iostream>
using namespace std;
class complex
{
	int real,img;
public:
	complex(int,int);
	void display();
	
	complex operator-();
	complex operator--();
	complex operator--(int);
	 complex();
};
complex::complex()
{
	real=img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}

complex complex::operator--()//pre
{
	--this->real;//this->real=this->real + 1
	--this->img;//this->img=this->img + 1
	return (*this);
}
complex complex::operator--(int)
{
	complex temp= (*this);
	--this->real;
	--this->img;
	return temp;
}
int main()
{
	complex c1(9,20);
	complex c2=--c1;//c2=c1.operator--()
	c1.display();
	c2.display();


	

}
