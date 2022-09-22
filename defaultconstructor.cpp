// Write a cpp program to implement default constructor

#include <iostream>
using namespace std;
class test
{
    int m, n;
    public:
        integer(void);
        void display(void);
};

integer::integer(void)
{
    m=0; n=0;
}

void integer::display(void)
{
    cout<<"M : "<<m<<"\n";
    cout<<"N : "<<n<<"\n";
}

int main()
{
    integer i;
    i.display();
    return 0;
}
