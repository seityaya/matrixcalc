#include "header.h"

//###########################################################################################################
//Объявление матрицы
double **CreateMat(int MatX_i, int MatX_j) {
    double **MatX = new double*[MatX_i];
    for(int k = 0; k < MatX_i; k++){
        MatX[k] = new double[MatX_j];
    }
    return MatX;
}
//Заполнение матрицы числом
void FillMat(double **MatX, int MatX_i, int MatX_j, int num){
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            MatX[i][j] = num;
        }
    }
}

//Заполнение матрицы рандомом
void RandMat(double **MatX, int MatX_i, int MatX_j, int min, int max){
    srand(time(NULL));
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            MatX[i][j] = min+rand()%(max-min);
        }
    }
}

//Дублирование матрицы
void DublMat(double **MatX, double **MatY, int MatX_i, int MatX_j){
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            MatY[i][j] = MatX[i][j];
        }
    }
}

//Вывод матрицы в консоль
void PrintMat(double **MatX, int MatX_i, int MatX_j){
    for (int i = 0; i < MatX_i; i++){
        for (int j = 0; j < MatX_j; j++){
            printf("%f ", MatX[i][j]);
        }
        printf("\n");
    }
}
