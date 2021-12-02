#include <iostream>
#include <vector>
#include <string>
// numbers

void numbers();
void eng_numb_form();
void eng_word_form();

// declare
int number_form, inserted10, insetred1, og_lang, has1eng, has10eng, has10eng2, has1eng2;
std::string output10, output1, eng_in1, eng_in10, eng_out10, eng_out1;
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
            if (irregular_numb != true)
            {
                irregular_numb = false;
            }
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
            std::cout << "What word goes in the tens place?\n";
            std::cin >> eng_in10;
            std::cout << "What word goes in the ones place?\n";
            std::cin >> eng_in1;
            eng_word_form();
            if (irregular_numb != true)
            {
                irregular_numb = false;
            }
            if(irregular_numb == false) {
                if(has10eng2 == true && has1eng2 == true)   {

                }else if(has10eng2 == false && has1eng2 == true)    {

                }else if(has10eng == true && has1eng2 == false) {

                }else if(has10eng == false && has1eng2 == false)    {
                    std::cout << "cero";
                }
            }
        }
        else
        {
            std::cout << "Thats not valid, if this is an error please tell me. Restarting numbers...\n";
            number_form = nullptr; // issue maybe
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

void eng_word_form()
{

    if (eng_in10 == "ten") // tens
    {
        eng_out10 = "diez";
        irregular_numb = true;
        has10eng2 = 1;
    }
    else if (eng_in10 == "twenty")
    {
        eng_out10 = "viente";
        irregular_numb = true;
        has10eng2 = 1;
    }
    else if (eng_in10 == "thirty")
    {
        eng_out10 = "trienta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "fourty")
    {
        eng_out10 = "quarenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "fifty")
    {
        eng_out10 = "cinquenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "sixty")
    {
        eng_out10 = "sesenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "seventy")
    {
        eng_out10 = "sestenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "eighty")
    {
        eng_out10 = "ochenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "ninety")
    {
        eng_out10 = "noventa";
        has10eng2 = 1;
    } else {
        has10eng2 = 0;
    }

    // ONES

    if (eng_in1 == "one") // tens
    {
        eng_out10 = "uno";
        irregular_numb = true;
        has1eng2 = 1;
    }
    else if (eng_in1 == "two")
    {
        eng_out10 = "dos";
        irregular_numb = true;
        has1eng2 = 1;
    }
    else if (eng_in1 == "three")
    {
        eng_out10 = "tres";
        has1eng2 = 1;
    }
    else if (eng_in1 == "four")
    {
        eng_out10 = "cuatro";
        has1eng2 = 1;
    }
    else if (eng_in1 == "five")
    {
        eng_out10 = "cinco";
        has1eng2 = 1;
    }
    else if (eng_in1 == "six")
    {
        eng_out10 = "sies";
        has1eng2 = 1;
    }
    else if (eng_in1 == "seven")
    {
        eng_out10 = "siete";
        has1eng2 = 1;
    }
    else if (eng_in1 == "eight")
    {
        eng_out10 = "ocho";
        has1eng2 = 1;
    }
    else if (eng_in1 == "nine")
    {
        eng_out10 = "nueve";
        has1eng2 = 1;
    } else {
        has1eng2 = 0;
    }

}