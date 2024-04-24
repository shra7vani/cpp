#include<iostream>
using namespace std;
class Person{
   private:
    char name[10];
    int age;
    int mob_no;
    char add[15];
        private:void getdata(){
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
class Student:private Person{
    int id;
    char div[2];
    private:void getdata2(){
        cout<<"enter student id:"<<endl;
        cin>>id;
        cout<<"enter division:"<<endl;
        cin>>div;
    }
};
class Employee:private Person{
    int emp_id;
    char post[20];
   
};

int main(){
    Student s1;
    s1.getdata();
     s1.getdata2();
    //  Employee e1;
    //  e1.getdata();
    //  e1.getdata3();
}
