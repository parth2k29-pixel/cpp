#include<iostream>
using namespace std;
class Medical{
public:
    float cost;
    Medical(float c){ cost=c; }
    void display(){ cout<<cost; }
};
int main(){
    Medical m(5000); m.display();
}