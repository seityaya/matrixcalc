#include "header.h"
//Детерминант
double determ(double** MatX, int size){
    int i, j;
    double det=0;
    double ** matr;

    if(size==1){
        det=MatX[0][0];
    }
    else if(size==2){
        det=MatX[0][0]*MatX[1][1]-MatX[0][1]*MatX[1][0];
    }
    else{
        matr=new double*[size-1];
        for(i=0;i<size;++i){
            for(j=0;j<size-1;++j){
                if(j<i){
                    matr[j]=MatX[j];
                }
                else{
                    matr[j]=MatX[j+1];
                }
            }
            det+=pow((double)-1, (i+j))*determ(matr, size-1)*MatX[i][size-1];
        }
        delete[] matr;
    }
    return det;
}

void determ(double **MatX, int MatX_i, int MatX_j, char *MatX_det){
    if (MatX_i != MatX_j){
        sprintf(MatX_det,"i!=j");
    }
    else {
        sprintf(MatX_det,"%f", determ(MatX, MatX_i));
    }
}
