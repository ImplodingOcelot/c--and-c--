#include <iostream>
#include <vector>
#include <string>
// numbers

void numbers();
void eng_numb_form();

// declare
int number_form, inserted10, insetred1, og_lang;
std::string output10, output1;

void numbers()
{
    std::cout << "Would you like to translate from english (1) or from spanish (2)?\n";
    std::cin >> og_lang;
    std::cout << "You have selected numbers, now do you want to translate from numeric form (1) or word form (2)?\n";
    std::cin >> number_form;
    if (og_lang == 1)
    {
        if (number_form == 1) // numbers like 93
        {

            std::cout << "What would you like to be in the tens place (if you want none then just put (0))?\n";
            std::cin >> inserted10;
            std::cout << "What would you like in the ones place?\n";
            std::cin >> inserted1;
            eng_numb_form();
        }
        else if (number_form == 2) // numbers like ninety three
        {
        }
        else
        {
            std::cout << "Thats not valid, if this is an error please tell me. Restarting numbers...\n";
            numbers();
        }
    }
}

void eng_numb_form()    {

    // checking 10s place
    switch(inserted10)  {
        case 0:
        // code
        break;
        case 1:
        // code
        break;
        case 2:
        // code
        break;
        case 3:
        // code
        break;
        case 4:
        // code
        break;
        case 5:
        // code
        break;
        case 6:
        // code
        break;
        case 7:
        // code
        break;
        case 8:
        // code
        break;
        case 9:
        // code
        break;
    }

}