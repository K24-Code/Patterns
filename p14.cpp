#include<iostream>
using namespace std;
int main(){
    //void numpat(int n){
    int n;
    cin>>n;
    //NUMBER PYRAMID PATTERN 
    int num = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++){
            cout << num << " ";
        }
            num = num + 1;

            cout << endl;
        
    }
  //  int main(){
    //    int n = 5;

        //FUNCTION CALL
      //  numpat(n);
    return 0;
}