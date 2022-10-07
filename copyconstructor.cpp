//Write a Cpp program to implement copy constructor
#include<iostream>
using namespace std;
class code
{
    int id;
    public:
        code(){}
        code(int a)
        {
            id = a;
        }
        code(code &x)
        {
            id = x.id;
        }
    void display(void)
    {
        cout<<id;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C=A;
    cout<<"\n id of A : ";
    A.display();
    cout<<"\n id of B : ";
    B.display();
    cout<<"\n id of C : ";
    C.display();
    return 0;
}
