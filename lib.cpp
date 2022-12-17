#include "lib.h"
bool cerca(char nomi[10][20], int &posizione, char check[]){
    for (int i = 0; i <10 ; ++i) {
        for (int j = 0; j < 20; ++j) {
            if (nomi[i][j] != check[j]) {
                j = 20;
            } else {
                if (j == 19) {
                    posizione = i;
                    return true;
                }
            }

        }
    }
    return false;
}
