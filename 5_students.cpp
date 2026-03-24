#include<iostream>
using namespace std;
class Student{
public:
    string name; int roll;
    void input(){ cin>>name>>roll; }
    void display(){ cout<<name<<" "<<roll<<endl; }
};
int main(){
    Student s[10];
    for(int i=0;i<10;i++) s[i].input();
    for(int i=0;i<10;i++) s[i].display();
}