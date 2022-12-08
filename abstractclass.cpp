//ABSTRACT CLASS

#include<iostream>
using namespace std;
class shape
{
    public:
    int height,width;
    virtual int area()=0;
    
    void set_dim(int h,int w)
    {
        height=h;
        width=w;
    }
};
class rectangle:public shape
{
    public:
    int area()
    {
        return(height*width);
    }
};
int main()
{
    rectangle r;
    r.set_dim(10,20);
    cout<<"Area of rectangle= "<<r.area();
    return 0;
}
