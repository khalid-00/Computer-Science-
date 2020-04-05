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
<<<<<<< HEAD
   std::cout<< "please enter x "<< std::endl;
   bool x = 0 ;
   bool y = 1 ;
   bool z = 1 ;

   T_table(x , y ,z );


    return 0;
}// end of Main










=======
    int out,x,y,z;
    std::cout<<"enter this numbers for the operation"<<std::endl;
    std::cout<<"1 for and"<<std::endl;
    std::cout<<"2 for or"<<std::endl;
    std::cout<<"3 for nor"<<std::endl;
    std::cin>>out;
    std::cout<<"X \t Y \t Z\t OUT" <<std::endl;

    switch(out)
    {
    case 1:
        for(x=0;x<=1;x++)
            for(y=0;y<=1;y++)
                for(z=0;z<=1;z++)
                {
                    and = Gates(out,x,y,z);
                }
        break;
    case 2:
        for(x=0;x<=1;x++)
            for(y=0;y<=1;y++)
                for(z=0;z<=1;z++)
                {
                    or =Gates (out,x,y,z);
                }
        break;
    case 3:
        for(x=0;x<=1;x++)
            for(y=0;y<=1;y++)
                for(z=0;z<=1;z++)
                {
                    nor= Gates (out,x,y,z);
                }
        break;

        return 0;
    }
}
>>>>>>> d43fb4c7aca1aff1f5a5a4d037c60a6e3042be71
