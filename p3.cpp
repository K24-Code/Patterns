#include<iostream>
using namespace std;

int main() {
    int n, m;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<endl;

//HOLLLOW RECTANGLE 
//OUTER
    for(int i = 1; i <=n; i++){

        //INNER
        for(int j = 1 ; j <=m ; j++){
            //FIRST AND LAST ROW ME SARE STARs
            if(i == 1 || i ==n ){
                cout<<"* ";
            }
            else if(j == 1 || j ==m ){
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

/*for(int i = 1; i <=n; i++){
    for(int j = 1; j <= m; j++){
      if (i == 1 || i == n || j == 1 || j == m ){
       cout<<"*";
       }
      else{
          cout<<" ";
          }
          }
          cout<<endl;
          }
          */