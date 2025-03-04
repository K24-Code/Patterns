#include<iostream>
using namespace std;
int main(){
    int n, start;
    cout<<"Enter the value of n: ";
    cin>>n;

    //1010101 pattern

    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0)
        start = 1;
        else 
        start = 0;

        for(int j = 0; j <= i; j++){
            cout<<start<<" ";
            //start fillping from 0 and 1 and vice versa
            start = 1 - start;
        }
        cout<<endl;5
    }
    return 0;
}