#include<iostream>
using namespace std;
class A
{
    int num;
    public:
    A()
    {
        num=10;
    }
    friend class B;
};
class B
{
    void show(A obj)
    {
        cout<<"Value of num:"<<obj.num<<endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    obj2
}