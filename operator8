#include<iostream>
#include<string>
#include<list>
using namespace std;
class Youtube_Channel{
	public:
	string name;
	 int no_of_users;
	 public:
	 Youtube_Channel(string nm,int users){
	 	name=nm;
	 	no_of_users=users;
	 }
};
class MyCollection{
	public:list<Youtube_Channel>myList;
	
		void operator+=(Youtube_Channel&Channel){
	myList.push_back(Channel);
	}
};
ostream& operator<<(ostream&COUT,Youtube_Channel&Channel){
	COUT<<Channel.name;
	COUT<<Channel.no_of_users;
	return COUT;
}
ostream& operator<<(ostream& COUT,MyCollection&mc){
	for(Youtube_Channel ytc:mc.myList)
	COUT<<ytc;
	return COUT;
}
int main(){
    MyCollection mc;
	Youtube_Channel yc1("To be coder:",4000);
	 Youtube_Channel yc2("\nstill learner:",3000);
	 mc+=yc1;
	 mc+=yc2;
	 cout<<mc;
	 return 0;
}
