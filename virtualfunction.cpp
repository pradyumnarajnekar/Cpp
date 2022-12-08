//VIRTUAL FUNCTION

#include<iostream>
using namespace std;
class base{
    public:
    void display()
    {
        cout<<"\nDisplay base";
    }
    virtual void show()
    {
        cout<<"\nShow base";
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"\nDisplay derived";
    }
    void show()
    {
        cout<<"\nShow derived";
    }
};
int main()
{
    base b;
    derived d;
    base *bptr;
    cout<<"\nBptr points to base";
    bptr=&b;
    bptr->display();
    bptr->show();
    cout<<"\nbptr points to derived";
    bptr=&d;
    bptr->display();
    bptr->show();
    return 0;
}
