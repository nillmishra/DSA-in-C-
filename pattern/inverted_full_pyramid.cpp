#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r =0; r < n; r++){
            for (int c =0; c < r;c++){ //n - r-  1 = n - (r + 1) 
                cout << " ";
            }
            for (int c =0; c < n-r; c++){ // row  + 1
                cout <<  "* ";
            }
        cout <<endl;
        }   
    }