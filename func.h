#pragma once
#include "header.h"
#define BUFER 8

//Помощь
static QString helpdoc = "Kyky";

//Ошибка
static QString errordoc = "Ok";

//Константы
static bool sum;
static bool raz;
static bool mul;
static int lambda_const;
static int ij_const;
static int start_const;

//Матрица А
static int MatA_i;
static int MatA_j;
static QString MatA_det;
static QString MatA_sledGl;
static char MatA_sledPb[BUFER];

//Матрица Б
static int MatB_i;
static int MatB_j;
static QString MatB_det;
static QString MatB_sledGl;
static QString MatB_sledPb;

//Матрица С
static int MatC_i;
static int MatC_j;
static QString MatC_det;
static QString MatC_sledGl;
static QString MatC_sledPb;


//func_one_matrix.cpp
double **CreateMat (int MatX_i, int MatX_j); //ok
void FillMat (double **MatX, int MatX_i, int MatX_j, int num); //ok
void DublMat (double **MatX, double **MatY, int MatX_i, int MatX_j); //ok
void RandMat (double **MatX, int MatX_i, int MatX_j, int min, int max); //ok
void PrintMat (double **MatX, int MatX_i, int MatX_j); //ok


//func_determ.cpp
double determ (double** MatX, int size);
void determ (double **MatX, int MatX_i, int MatX_j, int *MatX_det); //ok


//func_sled.cpp
double sledGl (double **MatX, int size);
void sledGl (double **MatX, int MatX_i, int MatX_j, char *MatX_sledGl); //ok
double sledPb (double **MatX, int size);
void sledPb (double **MatX, int MatX_i, int MatX_j, char *MatX_sledPb); // ok


//func_fill.cpp
void VerhTreyg (double **MatX, int MatX_i, int MatX_j, int num); // ok
void NijnTreyg (double **MatX, int MatX_i, int MatX_j, int num); // ok
void Diag (double **MatX, int MatX_i, int MatX_j, int num); // ok


//func_vijl.cpp
void Vozvesti_v_lam (double **MatX, int MatX_i, int MatX_j, int num);
void Umnoj_na_lam (double **MatX, int MatX_i, int MatX_j, int num);
void Umnoj_iStr_na_ij (double **MatX, int MatX_i, int MatX_j, int num, int k);
void Umnoj_jStl_na_ij (double **MatX, int MatX_i, int MatX_j, int num, int k);




void Transp_Po_Glavn ();
void Transp_Po_Pobch ();
void Povern_PoChas ();
void Povern_PrChas ();
void Obratit ();

int sumxy(int x, int y);
void test();



void SumAB (double **MatX, double **MatY, double **MatZ, int *MatX_i, int *MatX_j, int *MatY_i, int *MatY_j, int *MatZ_i, int *MatZ_j); //ok
void RazAB (double **MatX, double **MatY, double **MatZ, int *MatX_i, int *MatX_j, int *MatY_i, int *MatY_j, int *MatZ_i, int *MatZ_j); //ok

void MulAB (double **MatX, double **MatY, double **MatZ, int *MatX_i, int *MatX_j, int *MatY_i, int *MatY_j, int *MatZ_i, int *MatZ_j); //ok
double **MulAB(double **MatX, double **MatY, int MatX_i, int MatX_j, int MatY_i, int MatY_j);
double **MulaAB(double **MatX, double **MatY, int MatX_i, int MatX_j, int MatY_i, int MatY_j);
