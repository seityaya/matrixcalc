#include "header.h"

//След главной диагонали
double sledGl(double **MatX, int size){
    int sledGl = 0;
    for (int i = 0; i < size; i++){
        sledGl += MatX[i][i];
    }
    return sledGl;
}

void sledGl (double **MatX, int MatX_i, int MatX_j, char *MatX_sledGl){
    if (MatX_i != MatX_j){
        sprintf(MatX_sledGl,"i!=j");
    }
    else {
        sprintf(MatX_sledGl,"%f", sledGl(MatX, MatX_i));
    }
}

//След побочной диагонали
double sledPb (double **MatX, int size){
    int sledPb = 0;
    for (int i = 0; i < size; i++){
        sledPb += MatX[i][size - i];
    }
    return sledPb;
}
void sledPb (double **MatX, int MatX_i, int MatX_j, char *MatX_sledPb){
    if (MatX_i != MatX_j){
        sprintf(MatX_sledPb,"i!=j");
    }
    else {
        sprintf(MatX_sledPb,"%f", sledPb(MatX, MatX_i));
    }
}
