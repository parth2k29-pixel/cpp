#include<iostream>
using namespace std;
class Prime{
public:
    int n;
    void check(){
        int flag=0;
        for(int i=2;i<n;i++) if(n%i==0) flag=1;
        if(flag==0) cout<<"Prime";
        else cout<<"Not Prime";
    }
};
int main(){
    Prime p; cin>>p.n; p.check();
}