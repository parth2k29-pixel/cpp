#include<iostream>
using namespace std;
class Bill{
public:
    float units,amount;
    void input(){ cin>>units; }
    void calc(){
        if(units<=100) amount=units*1.5;
        else amount=100*1.5+(units-100)*2;
        amount=amount*0.98;
    }
    void display(){ cout<<amount; }
};
int main(){
    Bill b; b.input(); b.calc(); b.display();
}