//#include<iostream>
//using namespace std;
//namespace abc{
//	void function(){
//		cout<<"hello "<<endl;
//	}
//}
//
//namespace def{
//	void function(){
//		cout<<"hello iet"<<endl;
//	}
//}
//using namespace abc;
////using namespace def;
//int main(){
////	abc::function();
////	def::function();
////    function();
////    function();
//}

#include<iostream>
using namespace std;
namespace abc{
	void function(){
		cout<<"hello "<<endl;
	}
	
namespace def{
	void function(){
		cout<<"hello iet"<<endl;
	}
}
}

using namespace abc::def;
//using namespace def;
int main(){
//	abc::function();
//	def::function();
//    function();
    function();
}
