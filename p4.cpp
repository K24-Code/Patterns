#include<iostream>
using namespace std;

int main() {
    //HOLLOW SQUARE
    int n;
    cout<< "Enter n: "<< endl;
    cin>>n;

//OUTER LOOP
   for(int r = 1; r <= n; r++){
        //INNER LOOP
        for(int c = 1; c <= n; c++){
            if(r == 1 || r == n){
                cout<<"* ";
            }
            else{
                 // MIDDLE ROW
                 if(c == 1|| c == n){
                    cout<<"* ";
                 }
                 else{
                    //MIDDLE COLUMN
                    cout<<"  ";
                 }
            }
        }
        cout<<endl;
    }

    //ANOTHER WAY
   /*for(int i = 0; i < n ; i++){
    for(int j = 0; j < n; j++){
        if(i == 0 || i == n-1 || j == 0 || j == n-1){ // JAHA JAHA ZERO AA RAHA USKO HI LIKH DOO
            cout<<"* ";
        }
        else{
            cout<< "  ";
        }
    }
    cout<<endl;
   }*/
   
    return 0;
}