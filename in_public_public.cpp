#include<iostream>
using namespace std;
class Person{
    public:
    char name[10];
    int age;
    int mob_no;
    char add[15];
        public:void getdata(){
            cout<<"enter the name:"<<endl;
            cin>>name;
            cout<<"enter the age:"<<endl;
            cin>>age;
            cout<<"enter the mobile no:"<<endl;
            cin>>mob_no;
            cout<<"enter the address:"<<endl;
            cin>>add;
        }
};
class Student:public Person{
    int id;
    char div[2];
    public:void getdata2(){
        cout<<"enter student id:"<<endl;
        cin>>id;
        cout<<"enter division:"<<endl;
        cin>>div;
    }
};
class Employee:public Person{
    int emp_id;
    char post[20];
   /*public:void getdata3(){
        cout<<"enter employee id"<<endl;
        cin>>emp_id;
        cout<<"enter the post"<<endl;
        cin>>post;
    }*/
};

int main(){
    Student s1;
    s1.getdata();
     s1.getdata2();
    //  Employee e1;
    //  e1.getdata();
    //  e1.getdata3();
}
