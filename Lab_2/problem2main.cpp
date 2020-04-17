
#include<iostream>
#include<string>
#include <lab2.h>

int main()
{

    std::cout<<"please enter you keyword"<<std::endl;

    std::cout<<"please enter the text"<<std::endl;
    std::string  str;
    std::cin>> str ;
    std::string keyword ;
    std::cin>>keyword;

    std::string key = generateKey(str, keyword);
    std::string cipher_text = cipherText(str, key);

    std::cout << "Ciphertext : "
              << cipher_text << "\n";

    std::cout << "Original/Decrypted Text : "
              << originalText(cipher_text, key);
    return 0;
}
