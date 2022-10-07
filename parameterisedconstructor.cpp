#include<iostram>
using namespace std;
class integer
{
    int n, m;
    public :
        integer (int i, int j);
        void display (void);
};
integer :: integer(int i, int j)
{
    m=i; n=j;
}
void integer :: display(void)
{
    cout<<"m : "<<m<<"\n";
    cout<<"n : "<<n<<"\n";
}
int main()
{
    integer obj(10, 20);
    obj display;
}
