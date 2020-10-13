#include<iostream>
using namespace std;
class abc{
public:
    int a;
public:
    void accept()
    {
        cout<<"enter the value: ";
        cin>>a;
    }
    void operator ++()
    {
        a = a+3;

    }
    void print()
    {
        cout<<a<<endl;
    }

};
int main()
{
    abc obj;
    obj.accept();
    ++obj;
    obj.print();
    return 0;
}
