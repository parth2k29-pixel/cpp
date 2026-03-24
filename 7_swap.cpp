#include<iostream>
using namespace std;
class Swap{
public:
    int a,b;
    void input(){ cin>>a>>b; }
    void swapv(){ int t=a;a=b;b=t; }
    void display(){ cout<<a<<" "<<b; }
};
int main(){
    Swap s; s.input(); s.swapv(); s.display();
}