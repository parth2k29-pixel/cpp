#include<iostream>
using namespace std;
class Book{
public:
    string name; int available;
    void input(){ cin>>name>>available; }
    void issue(){
        if(available) cout<<"Issued";
        else cout<<"Not Available";
    }
};
int main(){
    Book b; b.input(); b.issue();
}