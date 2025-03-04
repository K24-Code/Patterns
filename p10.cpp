#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    //NUMERIC INVERTED HALF PYRAMID
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n-i; j++) {
          /*  if(j == 0 || i == 0 || i == n-1 || (i+j == n-1) ){
            cout<<(j+1)<<"  ";
            }
            else{
                cout<<"  ";
            }*/
            cout<<(j+1)<<"  ";
        }
        cout<<endl;
    }
    return 0;
}