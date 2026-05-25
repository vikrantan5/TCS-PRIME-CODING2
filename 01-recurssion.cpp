#include<iostream>
using namespace std;


int fac(int n){
    if(n ==0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    return n * fac(n-1);


}
int main(){
    cout<<("give me the number for the factorisl");
    int n;

    cin>>n;
    int result = fac(n);
    cout<<result;

    return 0;


}