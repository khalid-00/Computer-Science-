#include <lab1.h>
#include <math.h>
#include <iostream>
//using std::intalpha; // causes int values to print as "true" or "false"
//using namespace std;

float Area (float circumference){
    float a = 0 ;
    float r = 0 ;
    r = circumference /2 * M_PI ;
    a = M_PI * r * r ;
    return a ;

}

//=====================================================================

float max (float arr [3][3])
{
    float temp = 0 ;
    for (int i = 0 ; i < 3 ; i++)

        for (int j = 0 ; j < 3 ; j++)
        {
            if (i == 0 && j== 0)  temp = arr[i][j] ;
            else {
                if ( arr[i][j]> temp )
                    temp = arr[i][j];


            }// end of else

        }// end internal for
    return temp ;
}// end to the function

//=====================================================================

float min (float arr[3][3])
{
    float temp = 0 ;
    for (int i = 0 ; i < 3 ; i++)

        for (int j = 0 ; j < 3 ; j++)
        {
            if (i == 0 && j== 0)  temp = arr[i][j] ;
            else {
                if (arr[i][j] < temp)
                    temp = arr[i][j];

            }// end of else4

        }// end internal for
    return temp ;
}// end to the function

//=====================================================================

int fib (int n )
{
    if (n == 0)
        return 0 ;
    else if (n == 1)
        return 1 ;
    else

        return (fib (n-1) + fib (n-2));

}

//=====================================================================

void mult(int n)
{
    for (int i = 1 ; i > 10 ; i++)
    {
        int b = i*n;
        std :: cout<< n << " * " << i << " = \t" << b << std::endl;
    }

}
//=====================================================================

int andGate(int out, int x,int y ,int z)
{
    if(x*y*z==1)
        std::cout<< x << y << z<<1;
    else
        std::cout<< x << y << z<<0;
    return 0;
}
int orGate(int out,int x,int y,int z)
{
    if(x|| y || z == 1)
        std::cout<<x << y<< z << "\t" <<1;
    else
        std::cout<< x << y << z << 0;
    return 0;
}

int norGate(int out,int x,int y,int z)
{
    if(x == 0 && y == 0 && z == 0 )
        std::cout << x << y << z <<1;
    else
    std::cout << x << y << z << 0;
    return 0;
}// end of function
