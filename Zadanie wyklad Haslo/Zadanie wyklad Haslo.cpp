// Zadanie wyklad Haslo.cpp 
//

#include <iostream>
#include <string>

int main()
{
    std::string password;
    std::string password2;
    std::cout << "Podaj haslo:\n";
    std::cin >> password;

    do

    {
        std::cout << "Powtorz haslo:\n";
        std::cin >> password2;

        if (password2 != password)
        {
            std::cout << "Haslo nie jest takie samo! Sprobuj jeszcze raz:\n";
        }

           
    } 
    
    while (password2 != password);

        std::cout << "Haslo powtorzone poprawnie.";

    return 0;

}

