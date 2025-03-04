#include<iostream>
using namespace std;

int main() {
    //HALF PYRAMID
    int n;
    cin>>n;
    for(int i=0; i<n; i++){            
        for(int j=0; j<=i; j++){  //for(int j=0; j< i+1; j++ )
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
/*agr j< i-1 karde to 
for n= 5
answer will be


*
* *
* * *   */