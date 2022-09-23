#include<iostream>
 using namespace std;
 int count = 0;
 class test
 {
     public :
        test()
        {
            count++;
            cout<<"Contstructor message : object number"<<count<<" Created\n";
        }
        ~test()
        {
            cout<<"Destructor message : object number"<<count<<" Destroyed\n";
            count--;
        }
 };
 int main()
 {
     cout<<"Inside Main block\n";
     cout<<"Creating first object T1\n";
     test T1;
    {
         //block 1
         cout<<"\nInside Block 1\n";
        cout<<"Creating two more objects T2 and T3\n";
         test T2, T3;
         cout<<"\nLeaving Block 1\n";
    }
    cout<<"\nBack inside the main block\n";
    return 0;
}
