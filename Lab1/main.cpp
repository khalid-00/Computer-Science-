#include <lab1.h>
#include <iostream>



//using namespace std;

int main()
{
    
    //=====================================================================
    //  calculating the area of a circle
    //=====================================================================
    
    float circumference = 0;
    float ar = 0;
    
    std::cout<< "please enter the circumfernce :"<< std :: endl;
    std::cin>> circumference;
    
    ar = Area(circumference);
    std::cout<< "area of the circle =\t"<<ar<<std::endl;
    //=====================================================================
    // Max And Min of a Table
    //=====================================================================
    
    float arr[3][3];
    for (int i = 0 ; i < 3 ; i++)
        
        for (int j = 0 ; j < 3 ; j++)
        {
            arr[i][j]= (i-j) ;
            
        }// end of internal for
    float mk = 0 ;
    float mn = 0 ;
    
    mk = max ( arr );
    mn = min ( arr );
    std :: cout << "max = \t " << mk << "\nmin =\t" << mn << std :: endl;
    
    
    
    //=====================================================================
    //Fibonacci
    //=====================================================================
    
    int num = 0 ;
    std ::cout<< "please enter fibonacci number" << std ::endl;
    std :: cin >> num ;
    int  result=fib (num);
    std :: cout << " the result = \t "<< result << std:: endl;

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
    //Multiplication table// NOTE Not work
    //=====================================================================
    int num2 = 0;
    std:: cout << "enter the integer "<< std ::endl;
    mult(num2);
    std :: cin >> num2;
    
    
    //=====================================================================
    //Truth Table
    //=====================================================================
   std::cout<< "please enter x "<< std::endl;
   bool x = 0 ;
   bool y = 1 ;
   bool z = 1 ;

   T_table(x , y ,z );


    return 0;
}// end of Main










