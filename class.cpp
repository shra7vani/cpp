#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct student{
   public:
    int age;
    string first_name;

    string last_name;
    int standard;
    
};
int main(){
    student st;
        cin>>st.age>>st.first_name>>st.last_name>>st.standard;

    cout<<st.age<<"\n"<<st.last_name<<","<<" "<<st.first_name<<"\n"<<st.standard<<"\n"<<endl;
    cout<<st.age<<","<<st.first_name<<","<<st.last_name<<","<<st.standard<<endl;


    return 0;
}
