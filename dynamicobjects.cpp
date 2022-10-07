//Dyanamic objects
#include <iostream>
using namespace std;
class object
{
    private : char name[20];
    public : object (char * name_in);
    ~object();
};
object::object(char *name_in)
{
    strn cpy(name, name_in, 19);
    name[19]="\0";
    cout<<"Constructor called"<<name<<endl;
}
object::~object()
{
    cout<<"Destructor called"<<name<<endl;
}
object external_obj;
void main()
{
    cout<<"Beginning of main"<<endl;
}
    object auto_obj("Automatic Object");
    static object static_obj("Static Object");
{
    object * object pointer = new object("Dynamic object");
    delete object.pointer;
    cout<<"End of main"<<endl;
}
