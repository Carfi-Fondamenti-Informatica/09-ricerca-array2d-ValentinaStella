#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    char nomi[10][20];
    char check[20];
    int pos;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 20; ++j) {
            check[j]=' ';
            nomi[i][j]=' ';


        }

    }
    for (int i = 0; i < 10; ++i) {
        cin>>nomi[i];

    }
    cin>>check;
    if(cerca(nomi,pos, check)){
        cout<<pos;
    }else{
        cout<<"non presente";
    }
    return 0;
}
