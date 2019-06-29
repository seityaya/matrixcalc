#include "header.h"

//Операци
//Сумма
void SumAB(double **MatX, double **MatY, double **MatZ, int *MatX_i, int *MatX_j, int *MatY_i, int *MatY_j, int *MatZ_i, int *MatZ_j){
    if(MatX_i == MatY_i && MatX_j == MatY_j){
        if(MatX_i == MatY_i && MatX_j == MatY_j){
            MatZ_i = MatX_i;
            MatZ_j = MatX_j;
            for (int i = 0; i < *MatZ_i; i++){
                for (int j = 0; j < *MatZ_j; j++){
                    MatZ[i][j] = MatX[i][j] + MatY[i][j];
                }
            }
        }
    }
    else{
        errordoc = "MatX_i != MatY_i && MatX_j != MatY_j";
    }
}

//Разность
void RazAB(double **MatX, double **MatY, double **MatZ, int *MatX_i, int *MatX_j, int *MatY_i, int *MatY_j, int *MatZ_i, int *MatZ_j){
    if(MatX_i == MatY_i && MatX_j == MatY_j){
        MatZ_i = MatX_i;
        MatZ_j = MatX_j;
        for (int i = 0; i < *MatZ_i; i++){
            for (int j = 0; j < *MatZ_j; j++){
                MatZ[i][j] = MatX[i][j] - MatY[i][j];
            }
        }
    }
    else{
        errordoc = "MatX_i != MatY_i && MatX_j != MatY_j";
    }
}
//Умножение
double **MulaAB(double **MatX, double **MatY, int MatX_i, int MatX_j, int MatY_i, int MatY_j){
    double **MatZ = CreateMat(MatX_i, MatX_i);
    int MatZ_i = MatX_j;
    int MatZ_j = MatX_i;
    for (int i = 0; i < MatZ_i; i++)	{
        for (int j = 0; j < MatZ_j; j++){
            MatZ[i][j] = 0;
        }
    }
    for (int i = 0; i < MatZ_i; i++){
        for (int j = 0; j < MatZ_j; j++){
            for (int m = 0; m < MatZ_i; m++){
                MatZ[i][j] += MatX[i][m] * MatY[m][j];
            }
        }
    }
    return MatZ;
}
void MulAB(double **MatX, double **MatY, double **MatZ, int *MatX_i, int *MatX_j, int *MatY_i, int *MatY_j, int *MatZ_i, int *MatZ_j){
//    if(MatX_j == MatY_i){
//        MatZ_i = MatX_j;
//        MatZ_j = MatY_i;

//        MatX = MatY;


//      MatZ = MulaAB(MatX, MatY, MatX_i, MatX_j, MatY_i, MatY_j);
//    }
//    else{
//        errordoc = "MatX_j != MatY_i";
//    }
}
