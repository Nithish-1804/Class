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

   cube()                      //constructor
   {
    cout<<"Enter Height : ";
    cin>>height;
    cout<<"Enter width : ";
    cin>>width;
    cout<<"Enter length : ";
    cin>>length;
   }
   
   double volume()
   {
    double vol = height*width*length;
    return vol;
   };
   
   void newheight(int nheight)
   {
    this->height = nheight;
   }

};

int main()
{
    cube cube1;
    cout<<"The volume of the cube is : "<<cube1.volume()<<endl;
   
    int n;
    cout<<"Enter new height : ";   
    cin>>n;
    cube1.newheight(n);
    cout<<"The new volume of the cube is : "<<cube1.volume();
   
   return 0;
}