#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //cout << brr[0][2] << endl;

    cout << "row" <<endl;
    for(int j =0; j< 3; j++){
    for(int i =0; i<3; i++){
        cout << brr[j][i] << " ";
    }
    cout << endl;
    }  

    cout << endl;
    cout <<"column" <<endl;
    for(int j =0; j< 3; j++){
    for(int i =0; i<3; i++){
        cout << brr[i][j] << " ";
    }
    cout << endl;   
    }
} 