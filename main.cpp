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
    bool x;
    bool y;
    bool z;
    std :: cout<< "please enter x as boolean: " << std ::endl ;
    std :: cin >> x ;
    std :: cout<< "please enter x as boolean: " << std ::endl ;
    std :: cin >> y ;
    std :: cout<< "please enter x as boolean: " << std ::endl ;
    std :: cin >> z ;

    op = T_table(bool x , bool y ,bool z, std::result);
    std::cout<<result<< std::endl;

    return 0;
}// end of Main










