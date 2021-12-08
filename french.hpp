#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

void franch();
void frenchNumbers();
void french_numbersF();
void frenchAddHundred();

int french_optionio, frenchIn1, frenchIn10, frenchIn100;
std::string frenchOut100, frenchOut10, frenchOut1, frenchIrrOut;
bool french_irgNum, french_has100, french_has10, french_has1;

void franch()
{
    std::cout << "Would you like numbers (1) or the conjugator (2)?";
    std::cin >> french_optionio;
    if (french_optionio == 1)
    {
        std::cout << "What would you like in the hundreds place?\n";
        std::cin >> frenchIn100;
        std::cout << "What would you like in the tens place?\n";
        std::cin >> frenchIn10;
        std::cout << "And the ones?\n";
        std::cin >> frenchIn1;
        frenchAddHundred();
        frenchNumbers();
        if (french_irgNum != true)
        {
            std::cout << ">>" << french_has10 << " E " << french_has100 << "\n";
            if (french_has100 == true && french_has10 == false && french_has1 == false)
            {

                std::cout << "Your number is... " << frenchOut10 << "s\n";
            }
            if (french_has10 == true && french_has1 == true)
            {
                std::cout << "Your number is: " << frenchOut10 << "-" << frenchOut1 << "\n";
            }
            else if (french_has10 == false && french_has1 == true)
            {
                std::cout << "Your number is: " << frenchOut1 << "\n";
            }
            else if (french_has10 == true && french_has1 == false)
            {
                std::cout << "Your number is: " << frenchOut10 << "\n";
            }
            else
            {
                std::cout << "Your number is: zéro";
            }
        }
        else
        {
            french_numbersF();
            if(french_has100 != true)   {
            std::cout << "Your number is: " << frenchIrrOut << "\n";
            }
            else if(french_has100 == true)  {
                frenchAddHundred();
                std::cout << "Your number is: " << frenchOut10 << " " << frenchIrrOut << "\n";
            }
        }
    }
    else if (french_optionio == 2)
    {
    }
}

void frenchAddHundred()
{

    switch (frenchIn100)
    {
    case 0:
        frenchOut10 = "";
        french_has100 = false;
        break;
    case 1:
        frenchOut10 = "cent";
        french_has100 = true;
        break;
    case 2:
        frenchOut10 = "deux cent";
        french_has100 = true;
        break;
    case 3:
        frenchOut10 = "trois cent";
        french_has100 = true;
        break;
    case 4:
        frenchOut10 = "quatre cent";
        french_has100 = true;
        break;
    case 5:
        frenchOut10 = "cinq cent";
        french_has100 = true;
        break;
    case 6:
        frenchOut10 = "six cent";
        french_has100 = true;
        break;
    case 7:
        frenchOut10 = "sept cent";
        french_has100 = true;
        break;
    case 8:
        frenchOut10 = "huit cent";
        french_has100 = true;
        break;
    case 9:
        frenchOut10 = "neuf cent";
        french_has100 = true;
        break;

    default:
        frenchOut10 = "";
        french_has100 = false;
        break;
    }
}
void frenchNumbers()
{
    switch (frenchIn10)
    {
    case 0:
        frenchOut10.append("");
        french_has10 = false;
    case 1:
        frenchOut10.append(" dix");
        french_has10 = true;
        french_irgNum = true;
        break;
    case 2:
        frenchOut10.append(" vingt");
        french_has10 = true;
        break;
    case 3:
        frenchOut10.append(" trente");

        french_has10 = true;
        break;
    case 4:
        frenchOut10.append(" quarante");
        french_has10 = true;
        break;
    case 5:
        frenchOut10.append(" cinquante");
        french_has10 = true;
        break;
    case 6:
        frenchOut10.append(" soixante");

        french_has10 = true;
        break;
    default:
        french_irgNum = true;
        french_has10 = true;
        break;
    }

    switch (frenchIn1)
    {
    case 1:
        frenchOut1 = "un";
        french_has1 = true;
        break;
    case 2:
        frenchOut1 = "deux";
        french_has1 = true;
        break;
    case 3:
        frenchOut1 = "trois";
        french_has1 = true;
        break;
    case 4:
        frenchOut1 = "quatre";
        french_has1 = true;
        break;
    case 5:
        frenchOut1 = "cinq";
        french_has1 = true;
        break;
    case 6:
        frenchOut1 = "six";
        french_has1 = true;
        break;
    case 7:
        frenchOut1 = "sept";
        french_has1 = true;
        break;
    case 8:
        frenchOut1 = "huit";
        french_has1 = true;
        break;
    case 9:
        frenchOut1 = "neuf";
        french_has1 = true;
        break;
    default:
        frenchOut1 = "zéro";
        french_has1 = false;
        break;
    }
}

void french_numbersF()
{

    switch (frenchIn10)
    {
    case 1:
        switch (frenchIn1)
        {
        case 1:
            frenchIrrOut.append("onze");
            break;
        case 2:
            frenchIrrOut.append("douze");
            break;
        case 3:
            frenchIrrOut.append("treize");
            break;
        case 4:
            frenchIrrOut.append("quatorze");
            break;
        case 5:
            frenchIrrOut.append("quinze");
            break;
        case 6:
            frenchIrrOut.append("seize");
            break;
        default:
            french_irgNum = false;
            break;
        }
    case 2:
        std::cout << "";
        break;
    case 3:
        std::cout << "";
        break;
    case 4:
        std::cout << "";
        break;
    case 5:
        std::cout << "";
        break;
    case 6:
        std::cout << "";
        break;
    case 7:
        switch (frenchIn1)
        {
        case 0:
            frenchIrrOut.append("soixante-dix");
            break;
        case 1:
            frenchIrrOut.append("soixante-et-onze");
            break;
        case 2:
            frenchIrrOut.append("soixante-douze");
            break;
        case 3:
            frenchIrrOut.append("soixante-treize");
            break;
        case 4:
            frenchIrrOut.append("soixante-quatorze");
            break;
        case 5:
            frenchIrrOut.append("soixante-quinze");
            break;
        case 6:
            frenchIrrOut.append("soixante-seize");
            break;
        case 7:
            frenchIrrOut.append("soixante-dix-sept");
            break;
        case 8:
            frenchIrrOut.append("soixante-dix-huit");
            break;
        case 9:
            frenchIrrOut.append("soixante-dix-neuf");
            break;
        }
        break;
    case 8:
        switch (frenchIn1)
        {
        case 0:
            frenchIrrOut.append("quatre-vingts");
            break;
        case 1:
            frenchIrrOut.append("quatre-vingt-un");
            break;
        case 2:
            frenchIrrOut.append("quatre-vingt-deux");
            break;
        case 3:
            frenchIrrOut.append("quatre-vingt-trois");
            break;
        case 4:
            frenchIrrOut.append("quatre-vingt-quatre");
            break;
        case 5:
            frenchIrrOut.append("quatre-vingt-cinq");
            break;
        case 6:
            frenchIrrOut.append("quatre-vingt-six");
            break;
        case 7:
            frenchIrrOut.append("quatre-vingt-sept");
            break;
        case 8:
            frenchIrrOut.append("quatre-vingt-huit");
            break;
        case 9:
            frenchIrrOut.append("quatre-vingt-neuf");
            break;
        }
        break;
    case 9:
        switch (frenchIn1)
        {
        case 0:
            frenchIrrOut.append("quatre-vingt-dix");
            break;
        case 1:
            frenchIrrOut.append("quatre-vingt-onze");
            break;
        case 2:
            frenchIrrOut.append("quatre-vingt-douze");
            break;
        case 3:
            frenchIrrOut.append("quatre-vingt-treize");
            break;
        case 4:
            frenchIrrOut.append("quatre-vingt-quatorze");
            break;
        case 5:
            frenchIrrOut.append("quatre-vingt-quinze");
            break;
        case 6:
            frenchIrrOut.append("quatre-vingt-seize");
            break;
        case 7:
            frenchIrrOut.append("quatre-vingt-dix-sept");
            break;
        case 8:
            frenchIrrOut.append("quatre-vingt-dix-huit");
            break;
        case 9:
            frenchIrrOut.append("quatre-vingt-dix-neuf");
            break;
        }
        break;
    }
}