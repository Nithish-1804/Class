#include <iostream>
#include <bitset>
using namespace std;

class cube
{
   public:                    //Access specifier
   double height;
   double width;
   double length;

   void volume()
   {
    double vol = height*width*length;
    cout<<"The volume of the cube is : "<<vol;
   };
};

int main()
{
    cube cube1;

    cout<<"Enter Height : ";
    cin>>cube1.height;
    cout<<"Enter width : ";
    cin>>cube1.width;
    cout<<"Enter length : ";
    cin>>cube1.length;

    cube1.volume();
   
   return 0;
}