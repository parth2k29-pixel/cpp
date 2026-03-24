#include<iostream>
using namespace std;
class Print{
public:
    int n;
    void show(){
        for(int i=1;i<=n;i++) cout<<i<<" ";
    }
};
int main(){
    Print p; cin>>p.n; p.show();
}