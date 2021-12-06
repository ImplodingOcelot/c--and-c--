#include <iostream>
#include <vector>
#include <string>
// numbers

// Universals for numbers
void numbers();
void reset_numbs();

//  english voids
void eng_numb_form();
void eng_word_form();
void eng_irregular_numb_fixer();

// spanish voids
void sp_numb_form();
void sp_irregular_numb_fixer();
void sp_word_form();

// reset declare
int numb_empty;
std::string string_empty;
bool bool_empty;

// eng >> spn declare
int number_form, inserted10, insetred1, og_lang, has1eng, has10eng, has10eng2, has1eng2;
std::string output10, output1, eng_in1, eng_in10, eng_out10, eng_out1, eng_out12, eng_out_102, irregular_output;
bool irregular_numb;

// spn >> eng declare
int sp_inserted_10, sp_inserted_1;
std::string sp_out_10, sp_out_1, sp_irregular_out, sp_in_1, sp_in_10;
bool sp_irregular, sp_has_10, sp_has_1;

void numbers()
{
    reset_numbs();
    std::cout << "Would you like to translate from eng > spn (1) or from spn > eng (2)?\n";
    std::cin >> og_lang;
    std::cout << "Now do you want to translate from numeric form (1) or word form (2)?\n";
    std::cin >> number_form;
    if (og_lang == 1) // ENG >> SPN
    {
        if (number_form == 1) // numbers like 93
        {

            std::cout << "What would you like? (0 if you dont want a tens)?\n";
            std::cin >> inserted10;
            std::cout << "Now the ones place?\n";
            std::cin >> insetred1;
            eng_numb_form();
            if (irregular_numb == true)
            {
                eng_irregular_numb_fixer();
            }
            if (irregular_numb != true)
            {
                if (has10eng == 1 && has1eng == 1) // like 93
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
            else if (irregular_numb == true)
            {
                std::cout << irregular_output << "\n";
            }
        }
        else if (number_form == 2) // numbers like ninety three
        {
            std::cout << "What word goes in the tens place? (exeption ex:for thirteen use 'ten three')\n";
            std::cin >> eng_in10;
            std::cout << "What word goes in the ones place?\n";
            std::cin >> eng_in1;
            eng_word_form();
            eng_irregular_numb_fixer();
            if (irregular_numb != true)
            {
                irregular_numb = false;
            }
            if (irregular_numb == false)
            {
                if (has10eng2 == true && has1eng2 == true)
                { // like 93
                    std::cout << "Your answer is... " << eng_out10 << eng_out1 << "\n";
                }
                else if (has10eng2 == false && has1eng2 == true)
                { // like 3
                    std::cout << "Your answer is... " << eng_out1 << "\n";
                }
                else if (has10eng == true && has1eng2 == false)
                { // like 90
                    std::cout << "Your answer is... " << eng_out10 << "\n";
                }
                else if (has10eng == false && has1eng2 == false)
                { // only 0
                    std::cout << "Your answer is... "
                              << "cero";
                }
            }
            else if (irregular_numb == true)
            {
                std::cout << "Your answer is... " << irregular_output << "\n";
            }
        }
        else
        {
            std::cout << "Thats not valid, if this is an error please tell me. Restarting numbers...\n";
            numbers();
        }
    }
    else if (og_lang == 2) // SPN >> ENG
    {
        if (number_form == 1) // NUMBER
        {
            std::cout << "What number would you like in the tens?\n";
            std::cin >> sp_inserted_10;
            std::cout << "And the ones?\n";
            std::cin >> sp_inserted_1;
            sp_numb_form();
            if (sp_irregular != true)
            {
                if (sp_out_1 != "" || sp_out_10 != "")
                {
                    std::cout << "Your output is: " << sp_out_10 << " " << sp_out_1 << "\n";
                }
                else
                {
                    std::cout << "Your output is: zero";
                }
            }
            else if (sp_irregular == true)
            {
                sp_irregular_numb_fixer();
                std::cout << "Your output is: " << sp_irregular_out << "\n";
            }
        }
        else if (number_form == 2) // WORD
        {
            std::cout << "What would you like in your tens? (for 21 do viente uno, not vientiuno)\n";
            std::cin >> sp_in_10;
            std::cout << "And the ones?\n";
            std::cin >> sp_in_1;
            sp_word_form();
            if (sp_irregular != true)
            {
                if (sp_out_1 != "" || sp_out_10 != "")
                {
                    std::cout << "Your output is: " << sp_out_10 << " " << sp_out_1 << "\n";
                }
                else
                {
                    std::cout << "Your output is: zero";
                }
            }
            else if (sp_irregular == true)
            {
                sp_irregular_numb_fixer();
                std::cout << "Your output is: " << sp_irregular_out << "\n";
            }
        }
    }
}

void reset_numbs()
{
    number_form = numb_empty;
    inserted10 = numb_empty;
    insetred1 = numb_empty;
    og_lang = numb_empty;
    has1eng = numb_empty;
    has10eng = numb_empty;
    has10eng2 = numb_empty;
    has1eng2 = numb_empty;
    //
    output10 = string_empty;
    output1 = string_empty;
    eng_in1 = string_empty;
    eng_in10 = string_empty;
    eng_out1 = string_empty;
    eng_out12 = string_empty;
    eng_out_102 = string_empty;
    //
    irregular_output = bool_empty;
    // sp
    sp_inserted_10 = numb_empty;
    sp_inserted_1 = numb_empty;
    //
    sp_out_10 = string_empty;
    sp_out_1 = string_empty;
    sp_irregular_out = string_empty;
    sp_in_1 = string_empty;
    sp_in_10 = string_empty;
    //
    sp_irregular = bool_empty;
    sp_has_10 = bool_empty;
    sp_has_1 = bool_empty;
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
        output10 = "cuarenta";
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
        eng_out_102 = "diez";
        irregular_numb = true;
        has10eng2 = 1;
    }
    else if (eng_in10 == "twenty")
    {
        eng_out_102 = "viente";
        irregular_numb = true;
        has10eng2 = 1;
    }
    else if (eng_in10 == "thirty")
    {
        eng_out_102 = "trienta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "fourty")
    {
        eng_out_102 = "quarenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "fifty")
    {
        eng_out_102 = "cinquenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "sixty")
    {
        eng_out_102 = "sesenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "seventy")
    {
        eng_out_102 = "sestenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "eighty")
    {
        eng_out_102 = "ochenta";
        has10eng2 = 1;
    }
    else if (eng_in10 == "ninety")
    {
        eng_out_102 = "noventa";
        has10eng2 = 1;
    }
    else
    {
        has10eng2 = 0;
    }

    // ONES

    if (eng_in1 == "one") // tens
    {
        eng_out12 = "uno";
        irregular_numb = true;
        has1eng2 = 1;
    }
    else if (eng_in1 == "two")
    {
        eng_out12 = "dos";
        irregular_numb = true;
        has1eng2 = 1;
    }
    else if (eng_in1 == "three")
    {
        eng_out12 = "tres";
        has1eng2 = 1;
    }
    else if (eng_in1 == "four")
    {
        eng_out12 = "cuatro";
        has1eng2 = 1;
    }
    else if (eng_in1 == "five")
    {
        eng_out12 = "cinco";
        has1eng2 = 1;
    }
    else if (eng_in1 == "six")
    {
        eng_out12 = "seis";
        has1eng2 = 1;
    }
    else if (eng_in1 == "seven")
    {
        eng_out12 = "siete";
        has1eng2 = 1;
    }
    else if (eng_in1 == "eight")
    {
        eng_out12 = "ocho";
        has1eng2 = 1;
    }
    else if (eng_in1 == "nine")
    {
        eng_out12 = "nueve";
        has1eng2 = 1;
    }
    else
    {
        has1eng2 = 0;
    }
}
void eng_irregular_numb_fixer()
{
    // TENS
    if (output10 == "diez" || eng_out_102 == "diez")
    {
        if (eng_out12 == "uno" || output1 == "uno")
        {
            irregular_output = "once";
        }
        else if (eng_out12 == "dos" || output1 == "dos")
        {
            irregular_output = "doce";
        }
        else if (eng_out12 == "tres" || output1 == "tres")
        {
            irregular_output = "trece";
        }
        else if (eng_out12 == "cuatro" || output1 == "cuatro")
        {
            irregular_output = "cuatorce";
        }
        else if (eng_out12 == "cinco" || output1 == "cinco")
        {
            irregular_output = "quince";
        }
        else if (eng_out12 == "seis" || output1 == "seis")
        {
            irregular_output = "dieciséis";
        }
        else if (eng_out12 == "siete" || output1 == "siete")
        {
            irregular_output = "diecisiete";
        }
        else if (eng_out12 == "ocho" || output1 == "ocho")
        {
            irregular_output = "dieciocho";
        }
        else if (eng_out12 == "nueve" || output1 == "nueve")
        {
            irregular_output = "diecinueve";
        }
    }

    // TWENTYS

    if (output10 == "viente" || eng_out_102 == "viente")
    {
        if (eng_out12 == "uno" || output1 == "uno")
        {
            irregular_output == "veintiuno";
        }
        else if (eng_out12 == "dos" || output1 == "dos")
        {
            irregular_output == "veintidos";
        }
        else if (eng_out12 == "tres" || output1 == "tres")
        {
            irregular_output = "veintitres";
        }
        else if (eng_out12 == "cuatro" || output1 == "cuatro")
        {
            irregular_output = "veinticuatro";
        }
        else if (eng_out12 == "cinco" || output1 == "cinco")
        {
            irregular_output = "veinticinco";
        }
        else if (eng_out12 == "seis" || output1 == "seis")
        {
            irregular_output = "veintiséis";
        }
        else if (eng_out12 == "siete" || output1 == "siete")
        {
            irregular_output = "veintisiete";
        }
        else if (eng_out12 == "ocho" || output1 == "ocho")
        {
            irregular_output = "veintiocho";
        }
        else if (eng_out12 == "nueve" || output1 == "nueve")
        {
            irregular_output = "veintinueve";
        }
        if (eng_out12 == "" || output1 == "")
        {
            irregular_numb = false;
        }
    }
}
// SP below

void sp_numb_form()
{

    switch (sp_inserted_10)
    {
        // diezes
    case 1:
        sp_out_10 = "ten";
        sp_irregular = true;
        break;
    case 2:
        sp_out_10 = "twenty";
        break;
    case 3:
        sp_out_10 = "thirty";
        break;
    case 4:
        sp_out_10 = "fourty";
        break;
    case 5:
        sp_out_10 = "fifty";
        break;
    case 6:
        sp_out_10 = "sixty";
        break;
    case 7:
        sp_out_10 = "seventy";
        break;
    case 8:
        sp_out_10 = "eighty";
        break;
    case 9:
        sp_out_10 = "ninety";
        break;
    default:
        sp_out_1 = "";
        break;
    }
    // unos
    switch (sp_inserted_1)
    {
    case 1:
        sp_out_1 = "one";
        break;
    case 2:
        sp_out_1 = "two";
        break;
    case 3:
        sp_out_1 = "three";
        break;
    case 4:
        sp_out_1 = "four";
        break;
    case 5:
        sp_out_1 = "five";
        break;
    case 6:
        sp_out_1 = "six";
        break;
    case 7:
        sp_out_1 = "seven";
        break;
    case 8:
        sp_out_1 = "eight";
        break;
    case 9:
        sp_out_1 = "nine";
        break;
    default:
        sp_out_1 = "";
        break;
    }
}
void sp_irregular_numb_fixer()
{
    if (sp_irregular == true)
    {
        // TENS
        if (sp_out_10 == "ten")
        {
            if (sp_out_1 == "one")
            {
                sp_irregular_out = "eleven";
            }
            else if (sp_out_1 == "two")
            {
                sp_irregular_out = "twelve";
            }
            else if (sp_out_1 == "three")
            {
                sp_irregular_out = "thirteen";
            }
            else if (sp_out_1 == "four")
            {
                sp_irregular_out = "fourteen";
            }
            else if (sp_out_1 == "five")
            {
                sp_irregular_out = "fifteen";
            }
            else if (sp_out_1 == "six")
            {
                sp_irregular_out = "sixteen";
            }
            else if (sp_out_1 == "seven")
            {
                sp_irregular_out = "seventeen";
            }
            else if (sp_out_1 == "eight")
            {
                sp_irregular_out = "eighteen";
            }
            else if (sp_out_1 == "nine")
            {
                sp_irregular_out = "nineteen";
            }
        }
    }
}
void sp_word_form()
{
    if (sp_in_10 == "diez")
    {
        sp_out_10 = "ten";
        sp_irregular = true;
    }
    else if (sp_in_10 == "viente")
    {
        sp_out_10 = "twenty";
    }
    else if (sp_in_10 == "treinta")
    {
        sp_out_10 = "thirty";
    }
    else if (sp_in_10 == "cuarenta")
    {
        sp_out_10 = "fourty";
    }
    else if (sp_in_10 == "cincuenta")
    {
        sp_out_10 = "fifty";
    }
    else if (sp_in_10 == "sesenta")
    {
        sp_out_10 = "sixty";
    }
    else if (sp_in_10 == "setenta")
    {
        sp_out_10 = "seventy";
    }
    else if (sp_in_10 == "ochenta")
    {
        sp_out_10 = "eighty";
    }
    else if (sp_in_10 == "noventa")
    {
        sp_out_10 = "ninety";
    }

    if (sp_in_1 == "uno")
    {
        sp_out_1 = "one";
        sp_irregular = true;
    }
    else if (sp_in_1 == "dos")
    {
        sp_out_1 = "two";
    }
    else if (sp_in_1 == "tres")
    {
        sp_out_1 = "three";
    }
    else if (sp_in_1 == "cuatro")
    {
        sp_out_1 = "four";
    }
    else if (sp_in_1 == "cinco")
    {
        sp_out_1 = "five";
    }
    else if (sp_in_1 == "seis")
    {
        sp_out_1 = "six";
    }
    else if (sp_in_1 == "siete")
    {
        sp_out_1 = "seven";
    }
    else if (sp_in_1 == "ocho")
    {
        sp_out_1 = "eight";
    }
    else if (sp_in_1 == "nueve")
    {
        sp_out_1 = "nine";
    }
}
