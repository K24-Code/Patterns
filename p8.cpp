#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    //HOLLOW INVERTES HALF PYRAMID
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(i==0 || i==n-1 || j==0 || (i+j == n-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}