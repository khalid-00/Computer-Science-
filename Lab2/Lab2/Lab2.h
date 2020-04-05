#ifndef LAB2_H
#define LAB2_H

// Function
//=====================================================================
//Q1
//=====================================================================
// numbers swap

void n_swap(int,int);
//matching sings

bool matchSign(int , int ) ;

// even odd

void evenorodd(int ,int);
void printfirst();
void printfirstorscond();
//=====================================================================
//Q2
//=====================================================================

float sin_ln(float);

//=====================================================================
//Q3
//=====================================================================

void s_swap(int* &, int* &);

//=====================================================================
//Q4
//=====================================================================

void bubblesortArray(double* anArray, int size);
//for quick sort
int quickSort(double* anArraycopy, int, int);
int partition(double* anArraycopy, int, int, int&);
//void b_sort();
//void q_sort();



//=====================================================================

//function for taking transpose
void  transpose(int matrixx[][4], int rows,int cols);
//function for mono dimensional array
void  mono(int matrixx[][4], int rows,int cols);
//calling pascal function here
void pascal();

#endif // LAB2_H
