#include <iostream>
#include <bitset>
using namespace std;

class Date 
{
    private:
    int date;
    int month;
    int year;
    int date2,month2,year2;

    public:
    Date()
    {
        cout<<"Enter Todays Date "<<endl;
        cout<<"Date : ";
        cin>>date;
        cout<<"Month : ";
        cin>>month;
        cout<<"Year : ";
        cin>>year;
    }

    void userdate()
    {       
       cout<<"Enter Your Birth-Date "<<endl;
       cout<<"Date : ";
       cin>>date2;
       cout<<"Month : ";
       cin>>month2;
       cout<<"Year : ";
       cin>>year2; 
    };

    void leapyear()
    {
        if ((year2%4==0 && year2%100!=0) || (year2%400==0))
        {
            cout<<"Your Birth Year is Leap Year"<<endl;
        }
        else
        {
            cout<<"Your Birth Year is not a Leap Year"<<endl;
        }
    };

    void age()
    {
        int dd,mm,yyyy;
        dd = year - year2;
        mm = month - month2;
        yyyy = year - year2;
        cout<<"You are "<<yyyy<<" years, "<<mm<<" months and "<<dd<<" days old"<<endl;
    };

    void dispdate()
    {
        cout<<"Entered Date : "<<date2<<"/"<<month2<<"/"<<year2<<endl;
    };
};

int main()
{
    Date date1;
    date1.userdate();
    date1.dispdate();
    date1.leapyear();
    date1.age();
}