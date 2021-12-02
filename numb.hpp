#include <iostream>
#include <vector>
#include <string>
// numbers

void numbers();
void eng_numb_form();

// declare
int number_form, inserted10, insetred1, og_lang, has1eng, has10eng;
std::string output10, output1;
bool irregular_numb;

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
            if (has10eng == 1 && has1eng == 1 && irregular_numb == false) // like 93
            {
                std::cout << output10 << " y " << output1 << "\n";
            }
            else if (has10eng == 0 && has1eng == 1) // like 3
            {
                std::cout << output1 << "\n";
            }
            else if (has10eng == 1 && has1eng == 0) // like 90
            {
                std::cout << output10 << "\n";
            }
            else if (has10eng == 0 && has1eng == 0) // only 0
            {
                std::cout << "cero\n";
            }
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

void eng_numb_form()
{

    // checking 10s place
    switch (inserted10)
    {
    case 1:
        output10 = "diez"; // irregular
        has10eng = 1;
        irregular_numb = true;
        break;
    case 2:
        output10 = "viente";
        has10eng = 1;
        irregular_numb = true;
        break;
    case 3:
        output10 = "treinta";
        has10eng = 1;
        break;
    case 4:
        output10 = "quarenta";
        has10eng = 1;
        break;
    case 5:
        output10 = "cincuenta";
        has10eng = 1;
        break;
    case 6:
        output10 = "sesenta";
        has10eng = 1;
        break;
    case 7:
        output10 = "setenta";
        has10eng = 1;
        break;
    case 8:
        output10 = "ochenta";
        has10eng = 1;
        break;
    case 9:
        output10 = "noventa";
        has10eng = 1;
        break;
    default:
        output10 = "";
        has10eng = 0;
        break;
    }
    // checking the ones
    switch (insetred1)
    {
    case 1:
        output1 = "uno";
        has1eng = 1;
        break;
    case 2:
        output1 = "dos";
        has1eng = 1;
        break;
    case 3:
        output1 = "tres";
        has1eng = 1;
        break;
    case 4:
        output1 = "quatro";
        has1eng = 1;
        break;
    case 5:
        output1 = "cinco";
        has1eng = 1;
        break;
    case 6:
        output1 = "sies";
        has1eng = 1;
        break;
    case 7:
        output1 = "siete";
        has1eng = 1;
        break;
    case 8:
        output1 = "ocho";
        has1eng = 1;
        break;
    case 9:
        output1 = "nueve";
        has1eng = 1;
        break;
    default:
        output1 = "";
        has1eng = 0;
        break;
    }
}