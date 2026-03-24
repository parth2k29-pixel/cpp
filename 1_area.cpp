#include<iostream>
using namespace std;

float area(float r){ return 3.14*r*r; }
float area(float b,float h){ return 0.5*b*h; }

int main(){
    cout<<"Circle Area: "<<area(5)<<endl;
    cout<<"Triangle Area: "<<area(4,6)<<endl;
}