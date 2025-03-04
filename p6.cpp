#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    //INVERTED HALF PYRAMID
    for(int i=0; i<n; i++){
        for(int j=0; j< n-i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    //METHOD 2 TO SOLVE THIS

   /* for(int i=n; i>0; i--){
    for(int j=i; j>0; j--){
        cout<<" * ";
    }
    cout<<endl;
    }*/
   
    return 0;
}
