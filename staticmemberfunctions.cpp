// Write a cpp program using static member functions

#include <iostream>
using namespace std;
class test
{
    int code;
    static int count;
    int number;
    public:
        void setcode(void)
        {
            code = ++count;
        }
        void showcode(void)
        {
            cout<<"Object number : "<<code<<"\n";
        }
        static void showcount(void)
        {
            cout<<"Count : "<<count<<"\n";
        }
};

int test :: count;
int main()
{
    test t1, t2; 
    t1.setcode();
    t2.setcode();
    
    test::showcount();
    
    test t3;
    t3.setcode();
    
    test::showcount();
    
    t1.showcode();
    t2.showcode();
    t3.showcode();
    
    return 0;
}
