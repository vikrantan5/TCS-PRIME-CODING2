#include<iostream>

using namespace std;

int main(){
    int arr[] = {3,4,-7,1,3,3,1,-4};

    int target = 7;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i<n ; i++){
        int sum = 0;
        for(int j = i ; j<n ;j++){
            sum += arr[j];
            if(sum ==target){
                 cout<< "[";
                for(int k = i ; k<=j ; k++){
                   cout<<arr[k]<<" ";

                }
                cout<<"]"<<endl;


            }

        }
    }
    return 0;
}