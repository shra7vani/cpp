#include<iostream>
using namespace std;
class Person{
	public:
	char name[10];
	int age;
	char add[20];
	int phone;
	public:
		void getData()
		{
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter your age:";
		cin>>age;
		cout<<"Enter your address:";
		cin>>add;
		cout<<"Enter your phone no.:";
		cin>>phone;
		}
};
class Employee:public virtual Person{
	char post[10];
	int sallary;
};
class Customer:public virtual Person
{
	void Display()
	{
	
	}
	char product[20];
	int cost;
};
class Emp_Cus:public Employee,public Customer
{	
	int bill;
};
int main()
{
	Emp_Cus V1;
	V1.getData();
	return 0;
}

	
