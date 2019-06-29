#include "header.h"

//Заполнить
void VerhTreyg (double **MatX, int MatX_i, int MatX_j, int num){
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            if(i < j){
                MatX[i][j] = num;
            }
        }
    }
}

void Diag (double **MatX, int MatX_i, int MatX_j, int num){
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            if(i == j){
                MatX[i][j] = num;
            }
        }
    }
}

void NijnTreyg (double **MatX, int MatX_i, int MatX_j, int num){
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            if(i > j){
                MatX[i][j] = num;
            }
        }
    }
}
