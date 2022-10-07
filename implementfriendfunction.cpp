#include<iostream>
using namespace std;
class Box
{
    double length, width;
    public :
        void setdim(double l, double w);
        friend void printdim(Box box);
};
void Box :: setdim (double l, double w)
{
    length = l;
    width = w;
}
void printdim (Box box)
{
    cout<<"Length of Box : "<<box.length<<endl;
    cout<<"Width of Box : "<<box.width<<endl;
}
int main()
{
    Box box,
    box.setdim(10.0, 12.0);
    printdim(box);
    return 0;
}
