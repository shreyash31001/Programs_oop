#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout <<"enter the value of number 1: ";
    cin>>num1;
    cout <<"enter the value of number 2: ";
    cin>>num2;
    cout <<"value of number 1 before swapping: "<<num1;
    cout<<endl;
    cout <<"value of number 2 before swapping: "<<num2;
    cout<<endl;

     swap(num1,num2);
     cout << "value of number 1 after swapping: "<<num1;
     cout<<endl;
     cout << "value of number 2 after swapping: "<<num2;
     cout<<endl;
     return 0;
}
int swap(int &x,int &y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
    return x;
    return y;

}
