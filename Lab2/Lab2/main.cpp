#include <Lab2.h>
#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>
//using namespace std;
//#include <string>

int main(){

    //=====================================================================
    //  swap , comparing , even or odd & printing
    //=====================================================================

    int a=0;
    int b= 0;
    std::cout<<"please enter the first number:"<<  std::endl;

    std::cin>>a;
    std::cout<<"please enter the second number:"<<  std::endl;

    std::cin>>b;
    std::swap(a,b);

    std::cout <<"we swap two numbers"<<  std::endl;
    std::cout<<"A :"<<a<<  std::endl;
    std::cout<<"B :"<<b<<  std::endl;
    if(a/b >=0.0f ){
        std::cout<<"the signs of two numbers are positive"<<  std::endl;
    }
    else{
        //matiching sign
        bool matchsign(int a,int b);
        std::cout<<"the sign of one or two numbers are neg"<<  std::endl;
    }
    // even odd

    evenorodd( a, b);

    //     print first
    printfirst();

    //print fist second
    printfirstorscond();
    //============================================================================
    //Q2
    //============================================================================
    float y =0;
    float result=0;
    std::cout<<"please enter number between 0 and 10 "<< std::endl;
    std::cin >>y;
    result= sin_ln(y);

    //============================================================================
    //Q3 Pointer |&| Reference
    //============================================================================

    int i=5,j=7;
    i=a;
    b=j;
    int * p_i = &i;
    int * p_j = &j;

    std::cout << "Before swap" << std::endl;
    std::cout << "I:" << *p_i << "J:" << *p_j << std::endl;
    s_swap(p_i,p_j);
    std::cout << "After swap" << std::endl;
    std::cout << "I:" << *p_i << "J:" << *p_j <<std::endl;


    //============================================================================
    //Q4 Sorting
    //============================================================================
    double* anArray;
    double* anArraycopy;//for quicksort
    int sizea,countv;
    std::cout << "What size array you want to create ";
    std::cin >> sizea;

    anArray = new double[sizea];
    anArraycopy = new double[sizea];

    std::cout << "Enter the value: "<<std::endl;
    for (countv = 0; countv < sizea; countv++)
    {
        std::cout << "Current value " << countv + 1 << ": ";
        std::cin >> anArray[countv];
    }

    for (countv = 0; countv < sizea; countv++)
    {
        anArraycopy[countv]=anArray[countv];
    }

    float start_s=clock();
    bubblesortArray(anArray,sizea);

    std::cout << "After sorting the array using bubble sort"<<std::endl;

    for (countv = 0; countv < sizea; countv++)
    {
        std::cout<<anArray[countv]<<"   ";

    }
    float stop_s=clock();
    std::cout << std::endl<<"Bubble sort time(ms): " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << std::endl;

     //first and last indices are passed to move lower elements to the left of the pivot

    float start_s1=clock();
    int swaps = quickSort(anArraycopy, 0, sizea-1);


    std::cout << "After sorting the array using Quick sort"<<std::endl;
    for(int i = 0; i < sizea; i++)
        {
            std::cout << anArraycopy[i] <<"   ";
        }

    float stop_s1=clock();
    std::cout << std::endl<<"Quick sort time(ms): " << (stop_s1-start_s1)/double(CLOCKS_PER_SEC)*1000 << std::endl;
    std::cout<<std::endl;
   // b_sort();

    //============================================================================
    //Q5
    //============================================================================

    //creating a matrix here (2 dimensional)
    int matrixx[3][4]={{0,1,2,3},{4,5,6,7},{4,3,2}};


    //varaible to store the size of the matrix rows and columns
    int rows =  sizeof matrixx / sizeof matrixx[0]; // 2 rows
    int cols = sizeof matrixx[0] / sizeof(int); // 5 cols



    //display a matrix
    // output each array element's value
    std::cout<<"Original matrix"<<std::endl<<std::endl;
   for ( int i = 0; i < rows; i++ )
   {
      for ( int j = 0; j < cols; j++ )
        {
            std::cout << matrixx[i][j]<<'\t';
        }
        std::cout<<std::endl;
   }

   transpose(matrixx, rows, cols);
   mono(matrixx, rows, cols);
   pascal();

    return 0;

}//end of main
