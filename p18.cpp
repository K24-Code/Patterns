#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    //same number as row number
    for(int rows=1; rows <= n; rows++){

        for(int col=1; col<= rows; col++){
            //PRINTING NUMBER PATTERN BASED ON THE NUMBER OF ROWS
            cout<< rows <<" ";
        }
        cout<<endl;
    }
    return 0;
}