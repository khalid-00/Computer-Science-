#include <Lab2.h>
#include <iostream>
#include <cmath>


int main ()
{



std::cout << "if you want to print First for 1 time press f for more press m"<<std::endl;

    char ans = 'F';
    do {
        std:: cout << "Do you want to continue (Y/N)?\n";
        std::cout << "You must type a 'Y' or an 'N' :";
        std::cin >> ans;
    } while ((ans == 'Y') || (ans == 'y'));
    return 0;


return 0 ;
}
