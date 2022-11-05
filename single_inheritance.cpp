//Single Inheritance
#include<iostream>
using namespace std;
class A
{
    /*private :
        int a;
        void set_a()
        {
            cout<<"The value of a is 1";
        }*/    
    public :
        int b;
        void set_b()
        {
            cout<<"The value of b is 2"<<"\n";
        }
    /*protected :
        int c;
        void set_c()
        {
            cout<<"The value of c is 3";
        }*/
};
class B : public A
{
    /*private :
        int d;
        void set_d()
        {
            cout<<"The value of d is 4";
        }*/
    public :
        int e;
        void set_e()
        {
            cout<<"The value of e is 5";
        }
    /*protected :
        int f;
        void set_f()
        {
            cout<<"The value of f is 6";
        }*/
};
int main()
{
    B obj;
    //obj.set_a();
    obj.set_b();
    //obj.set_c();
    //obj.set_d();
    obj.set_e();
    //obj.set_f();
    return 0;
}
