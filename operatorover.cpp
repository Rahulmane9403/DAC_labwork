#include<iostream> 
#include<string> 
using namespace std; 
  
class Car{ 
  private: 
    string name; 
    int cost; 
    public: 
        Car(string n, int c){ 
            name=n; 
            cost=c; 
        } 
        bool operator == ( Car &c){ 
            if (name == c.name && cost == c.cost) 
                return true; 
            return false; 
        } 
}; 
int main(){ 
    Car car1 ("Santro",500000); 
    Car car2 ("Safari",1000000); 
    if (car1 == car2) //car1.operator==(car2)
        cout<<"Equivalent"<<endl; 
    else
        cout<<"Not Equivalent"<<endl; 
}






//#include<iostream>
//using namespace std;
//class Date1
//{
//      int day;
//      int month;
//      int year;
//      public:
//             Date1(int d,int m,int y)
//             {
//                   day=d;
//                   month=m;
//                   year=y;
//             }
//             
//             friend void operator-(Date1 &,int);
//             friend void operator+(Date1 &,int);
//             void display()
//             {
//                  cout<<"Date:"<<day<<"-"<<month<<"-"<<year<<endl;
//             }
//};
//void operator-(Date1 &x, int y)
//{
//     x.day= x.day-y;
//    x.month=x.month-3;
//x.year=x.year-6;
// cout<<"Date:"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
//}
//void  operator+(Date1 &x,int y)
//{
//     x.day= x.day+y;
//    x.month=x.month+3;
//x.year=x.year+6;
// cout<<"Date:"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
//}
//int main()
//{
//    int dd,mm,yy;
//    cout<<"Enter Day:";
//    cin>>dd;
//    cout<<"Enter Month:";
//    cin>>mm;
//    cout<<"Enter Year:";
//    cin>>yy;
//    
//    Date1 d1(dd,mm,yy);
//    d1-1;//d1=d1.operator-(1)
//   	d1+2;
//   
//    return 0;
//}

