#include<iostream>
using namespace std;
class Date
{
    private:
    int day;
    int month;
    int year;
    
    public:
    Date(int d,int m,int y)
    {
        day=d;
    month=m;
        year=y;
    }
   void setDate(int d,int m,int y)
    {        day=d;
    month=m;
        year=y;

    }
    void displayDate(){
        cout<<"Date:"<<day<<"/ "<<month<<" /"<<year<<"/ "<<endl;
    }
    
};
    int main(){
        
        Date date(16,3,2024);
       date.displayDate();
       return 0;
    }
    
    

