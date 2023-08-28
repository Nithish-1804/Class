#include <iostream>
#include <bitset>
using namespace std;

class cube
{
   public:                    //Access specifier
   double height = 1;
   double width = 1;
   double length = 1;
};

int main()
{
   int vol;
   cube cube1;
   vol = cube1.height*cube1.width*cube1.length;

   cout<<"The volume of the cube is "<<vol<<" m^3";
   
   return 0;
}