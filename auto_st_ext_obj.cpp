#include<iostream>
using namespace std;
class object
{
    private : int value;
    public :
        object();
        void addvalue(int value_in);
        int getvalue();
}; //The constructor initialises "value"
object::object()
{
    value = 0;
}
void object::addvalue(int value_in)
{
    value += value_in;
}
int object::getvalue()
{
    return value;
}
object ext_obj; // This is declaration of an external object visible throughout main. It will persist for the lifetime of the program.
int main()
{
    ext_obj.addvalue(5); // Although an external object, it can only use its methods within the scope of the function body.
    for(int i; i<2; i++)
    {
        object auto_obj;
        auto_obj.addvalue(10); // A static object is declared an initialised. it will persist from its declaration untill the program terminates.
        static object st_obj;
        st_obj.addvalue(15); // The output shows that the state of the static object has persistant.
        cout<<"The automatic object has the value "<<auto_obj.getvalue()<<"\n";
        cout<<"The static object has the value "<<st_obj.getvalue()<<endl;
    }
    cout<<"The value of the external object is "<<ext_obj.getvalue();
    return 0;
}
