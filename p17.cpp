#include<iostream>
using namespace std;
int main(){
    int n, num=1;
    cout<<"Enter the value of n: ";
    cin>>n;

    //counting pattern
    //time complexity O(n^2)
    
    for(int rows = 0; rows<= n; rows++){

        for(int col = 0; col < rows;  col++){
            cout<< num <<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}