# Numbers.cpp
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int even=0;
    int odd=0;
   for(i=0; i<=n; i++){
        cin>>i;
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Evens:"<<even<<endl;
    cout<<"Odds:"<<odd;

    return 0;
}
