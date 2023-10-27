#include <iostream>
#include <bitset>
using namespace std;

class Rectangle
{
    private:
    double length;
    double width;

    public:
    Rectangle()
    {
        cout<<"Enter length : ";
        cin>>length;
        cout<<"Enter Width : ";
        cin>>width;
    }

    double area()
    {
        return length*width;
    };
};

int main()
{
    Rectangle R1;
    cout<<"Area : "<<R1.area();
    return 0;
}