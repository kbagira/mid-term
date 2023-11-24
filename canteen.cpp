# Canteen.cpp
#include <iostream>
using namespace std;
int main() {
    int A,B,N;
    cin>>A>>B>>N;
    int s=A*N;
    int t=B*N;
    while(t>100){
        s++;
        t=t-100;
    }
    cout<<s<<" som and "<<t<<" tyiyn";
