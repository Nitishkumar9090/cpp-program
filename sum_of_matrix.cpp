#include <iostream>
using namespace std;

int main(){
    // first matrix.......
    int a[3][3]={{1,2,5},{6,7,8},{9,1,10}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<" ";
            cout<<a[i][j];
        }
        cout<<endl;
    }

cout<<endl;
// second matrix.....
    int b[3][3]={{10,25,5},{6,11,8},{9,12,10}};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<" ";
            cout<<b[i][j];
        }
        cout<<endl;
    }

   cout<<endl;
   cout<<"sum of matrix are following : "<<endl;
   cout<<endl;

   int c[3][3]={{},{},{}};
   for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<" ";
        cout<<a[i][j]+b[i][j];
    }
    cout<<endl;
   }
}