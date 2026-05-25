#include<iostream>

using namespace std;

int main(){
    int flag = 1;
    cout<<"give a number for the [prime check]";
    int n;
    cin>>n;
    for(int i = 2 ; i<sqrt(n) ; i++){
        if(n%i ==0){
            flag = 0;
            break;
        }

    }
    if(flag == 1){
        cout<<"this is the prime number";
    }
    else{
        cout<<"this is not a prime nunber";
    }
    return 0;
}