#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct student{
   public:
    int age=21;
    char first_name[100]="shravani";

    char last_name[100]="mali";
    int standard=14;
    
};
int main(){
    student st;
        cin>>st.age>>st.first_name>>st.last_name>>st.standard;

    cout<<st.age<<" "<<st.first_name<<" "<<st.last_name<<" "<<st.standard<<endl;
    return 0;
}
