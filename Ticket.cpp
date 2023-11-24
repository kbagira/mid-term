# Ticket.cpp
#include <iostream>
using namespace std;
int main() {
    int n,a,b,c,d,e,f;
    cin>>n;
    a=(n/100000)%10;
    b=(n/10000)%10;
    c=(n/1000)%10;
    d=(n/100)%10;
    e=(n/10)%10;
    f=n%10;
    if(a+b+c==d+e+f){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

    return 0;
}
