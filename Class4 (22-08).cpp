#include <iostream>
#include <bitset>
using namespace std;

class cube
{
   private:                    //Access specifier
   double height;
   double width;
   double length;

   public:
   void userip()
   {
    cout<<"Enter Height : ";
    cin>>height;
    cout<<"Enter width : ";
    cin>>width;
    cout<<"Enter length : ";
    cin>>length;
   };   
   
   double volume()
   {
    double vol = height*width*length;
    return vol;
   };
};

int main()
{
    cube cube1;
    cube1.userip();
    cout<<"The volume of the cube is : "<<cube1.volume();
   
   return 0;
}