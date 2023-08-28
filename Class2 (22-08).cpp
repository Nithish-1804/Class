#include <iostream>
#include <bitset>
using namespace std;

class cube
{
   public:                    //Access specifier
   double height;
   double width;
   double length;
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

   int vol;
   vol = cube1.height*cube1.width*cube1.length;

   cout<<"The volume of the cube is : "<<vol;
   
   return 0;
}