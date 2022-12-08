//METHOD OVERRIDING

#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    int add(int x,int y)
    {
        a=x;
        b=y;
        return x+y;
    }
};
class b:public demo
{
    int c,d;
    public:
    int add(int x,int y)
    {
        c=x;
        d=y;
        return x+y;
    }
};
int main()
{
    b b1;
    cout<<b1.add(1,2)<<endl;
    cout<<b1.demo::add(3,4);
    return 0;
}
