#include<iostream>
using namespace std;
class Leap{
public:
    int y;
    void check(){
        if((y%4==0 && y%100!=0)||y%400==0) cout<<"Leap";
        else cout<<"Not Leap";
    }
};
int main(){
    Leap l; cin>>l.y; l.check();
}