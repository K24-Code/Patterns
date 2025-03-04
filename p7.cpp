#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    // HOLLOW  HALF PYRAMID
    for (int row =0; row<n; row++){
        int totalcolumns = row+1;
        for(int col = 0; col<totalcolumns; col++){
            if(row == 0 || row == 1 || row == n-1){
                cout<<"* ";
            }
            else{
                //MIDDLE ROW
                if(col == 0 || col == totalcolumns -1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }


  /* 
  METHOD 2
  for (int row = 0; row< n; row++){
    int totalcolumns = row+1;
    for(int col = 0; col<totalcolumns; col++){
        if(row == 0 || row == n-1 || col == 0 || row == col){
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