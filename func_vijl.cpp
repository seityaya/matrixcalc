#include "header.h"

//Преобразовать
void Vozvesti_v_lam (double **MatX, int MatX_i, int MatX_j, int num){
    double **MatRez = CreateMat(MatX_i, MatX_i);
    DublMat(MatX, MatRez, MatX_i, MatX_j);

    for (int i = 0; i < num; i++){
//        MatRez = MulAB(MatRez, MatX, MatX_i, MatX_j, MatX_i, MatX_j);
    }
}

void Umnoj_na_lam (double **MatX, int MatX_i, int MatX_j, int num){
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            MatX[i][j] *= num;
        }
    }
}
void Umnoj_iStr_na_ij (double **MatX, int MatX_i, int MatX_j, int num, int k){
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            MatX[k][j] *= num;
        }
    }
}
void Umnoj_jStl_na_ij (double **MatX, int MatX_i, int MatX_j, int num, int k){
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            MatX[i][k] *= num;
        }
    }
}
