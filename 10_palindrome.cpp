#include<iostream>
using namespace std;
class Pal{
public:
    inline void check(int n){
        int rev=0,t=n;
        while(n){ rev=rev*10+n%10; n/=10; }
        if(t==rev) cout<<"Palindrome";
        else cout<<"Not";
    }
};
int main(){
    Pal p; int n; cin>>n; p.check(n);
}