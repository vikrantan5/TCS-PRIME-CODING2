// input output

// how to take the input

// wwith the size given and size will not givne tot oit

// then 2 3 5 74 8 96 3 
// and the 1 , 2 , 2 , 6, 7





// Size of array tggivn3e and we have tot take the input
// #include<iostream>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i];
//     }
//     return 0;
// }



// we can use non premitive array too

// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr;
//     for(int i =0; i<n ;i++){
//         int temp;
//         cin>>temp;
//         arr.push_back(temp);
//     }
//     for(int i: arr){
//        cout<<i;
//     }
//     return 0;
// }









// includeding all the pakages

// #include<bits/stdc++.h>

// using namespace std;
// int main(){

// }






// when you dont knoe the size of teh inoput

// #include<bits/stdc++.h>

// using namespace std;
// int main(){


//     // string : "1 2 3 4 5 6 "
//     //after stringstream: "1""2""3""4""5""6"
//     string s;
//     getline(cin , s);
//     stringstream ss(s);

//     vector<int>arr;

//     int temp;
//     while(ss>>temp){
//         arr.push_back(temp);
//     }
//     for(int a:arr){
//         cout<<a<<" ";
//     }



//     return 0;

// }










// commma sepatrated _INLINE_VARIABLES_SUPPORTED


// #include<bits/stdc++.h>

// using namespace std;
// int main(){


//     // string : "1 2 3 4 5 6 "
//     //after stringstream: "1","2","3","4","5","6"


//     // step 1 : take input as string bcz you dont know thee size of the array
//     string s;
//     // step 2: put the value of the strign from the user
//     getline(cin , s);
//     // now jo string the usko fromat me le aao
//     stringstream ss(s);

//     // ab ek arr lo jisse saare acchhe values ddaal pao
//     vector<int>arr;


//     // ek temp lo jiske dwara acche values daal pao
//     string temp;


//     // jabtak accha vale hai ss me tab tak temp me daaalo
//     while(getline(ss , temp , ',')){
//         // jo v accha valu e temop me aa rha h char h uskjonin me badlo
//         int num = stoi(temp);
//         // numbers ko hi daalo arr me 
//         arr.push_back(num);
//     }
//     for(int a:arr){
//         cout<<a<<" ";
//     }



//     return 0;

// }





















// agagr input me bracke ho to 


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     string s;
//     getline(cin , s);


//     if(s.front()=='[' && s.back()==']'){
//         s = s.substr(1 , s.length()-2);
//     }



//     stringstream ss(s);


//     vector<int>arr;
//     string temp;

//     while(getline(ss , temp ,',')){
//         int num =stoi(temp);
//         arr.push_back(num);
//     }

//     for(int i : arr){
//         cout<<i<<" ";
//     }

//     return 0;
// }













// int and string dono ek saath lenek liye


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n ; 
//     cin>>n;
//     cin.ignore();
//     string s;

//     getline(cin  , s);

//     cout<<n<<" "<<s<<endl;

//     return 0;
// }














// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     string s;
//     getline(cin ,s);
//     int star=0;
//     int hash=0;

//     for(int i = 0 ; i<s.length()-1 ; i++){
//         if(s[i]=='*'){
//             star++;
//         }
//         if(s[i]=='#'){
//             hash++;
//         }
//     }
//     if(star==hash){
//         cout<<star-hash;
//     }
//     else if(star>hash){
//         cout<<star-hash;
//     }
//     else{
//         cout<<star-hash;
//     }
// }








// PRIOR max


// #include<bits/stdc++.h>

// using namespace std;
// int main(){

//     string s;
//     getline(cin ,  s);

//     if(s.front()=='{' &&  s.back()=='}'){
//         s = s.substr(1 , s.length()-2);
//     }
//     stringstream ss(s);

//     vector<int>arr;

//     string temp;

//     while(getline(ss , temp , ',')){
//         int num = stoi(temp);
//         arr.push_back(num);
//     }


//     int maxi =INT_MIN;
//     vector<int>result;
//     for(int i = 0 ; i<arr.size() ;i++){
//         if(arr[i] > maxi){
//             result.push_back(arr[i]);
//             maxi = arr[i];
//         }
//     }

//     cout<<result.size();
//     return 0;
// }














#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin , s);

    stringstream ss(s);

    vector<string>arr;
    string temp;

    while(getline(ss , temp , ',' )){
        arr.push_back(temp);
    }
    unordered_map<string , int>mp;

    for(int i = 0 ; i<arr.size() ;i++){
        mp[arr[i]]++;

    }

    for(auto it : mp){
        if(it.second %2 !=0){
            cout<<it.first;
            break;
        }
    }

    return 0;


}