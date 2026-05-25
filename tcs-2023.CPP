#include <iostream>

using namespace std;

int main(){
    int n;
    int z =0;
    cin>>n;

    int arr[n];

    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i = 1 ; i<n ; i++){
        if(arr[0] ==arr[i]){
            z++;
        }
    }
    int unequal = n-z-1;
    cout<< unequal;


    return 0;


}