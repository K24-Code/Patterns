#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    //NUMERIC HALF PYRAMID
    for(int i=1; i<=n; i++)   // int i=0
    {    
        for(int j=1; j<=i; j++)  // for(int j=0; j<i+1; j++)
        {
            cout<< j <<" ";
        }
        cout<<endl;
    }

    /*int num = 1;
    for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
    cout << num << " ";
    num++
    }
    cout<<endl;
    }
    */
    return 0;
}