//Multi-level Inheritance
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
            cout<<"The value of e is 5"<<"\n";
        }
    /*protected :
        int f;
        void set_f()
        {
            cout<<"The value of f is 6";
        }*/
};

class C : public B
{
    /*private :
        int g;
        void set_g()
        {
            cout<<"The value of g is 7";
        }*/
    public :
        int h;
        void set_h()
        {
            cout<<"The value of h is 8";
        }
    /*protected :
        int i;
        void set_i()
        {
            cout<<"The value of i is 9";
        }*/
};
int main()
{
    C obj;
    //obj.set_a();
    obj.set_b();
    //obj.set_c();
    //obj.set_d();
    obj.set_e();
    //obj.set_f();
    //obj.set_g();
    obj.set_h();
    //obj.set_i();
    return 0;
}
