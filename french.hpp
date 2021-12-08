
void franch();
void frenchNumbers();
void french_numbersF();

int french_optionio, frenchIn1, frenchIn10;
std::string frenchOut10, frenchOut1, frenchIrrOut;
bool french_irgNum, french_has10, french_has1;

void franch()
{
    std::cout << "Would you like numbers (1) or the conjugator (2)?";
    std::cin >> french_optionio;
    if (french_optionio == 1)
    {
        std::cout << "What would you like in the tens place?\n";
        std::cin >> frenchIn10;
        std::cout << "And the ones?\n";
        std::cin >> frenchIn1;
        frenchNumbers();
        if (french_irgNum != true)
        {
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
            std::cout << "Your number is: " << frenchIrrOut << "\n";
        }
    }
    else if (french_optionio == 2)
    {
    }
}

void frenchNumbers()
{
    switch (frenchIn10)
    {
    case 0:
        frenchOut10 = "zéro";
        french_has10 = false;
    case 1:
        frenchOut10 = "dix";
        french_has10 = true;
        french_irgNum = true;
        break;
    case 2:
        frenchOut10 = "vingt";
        french_has10 = true;
        break;
    case 3:
        frenchOut10 = "trente";
        french_has10 = true;
        break;
    case 4:
        frenchOut10 = "quarante";
        french_has10 = true;
        break;
    case 5:
        frenchOut10 = "cinquante";
        french_has10 = true;
        break;
    case 6:
        frenchOut10 = "soixante";

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
            frenchIrrOut = "onze";
            break;
        case 2:
            frenchIrrOut = "douze";
            break;
        case 3:
            frenchIrrOut = "treize";
            break;
        case 4:
            frenchIrrOut = "quatorze";
            break;
        case 5:
            frenchIrrOut = "quinze";
            break;
        case 6:
            frenchIrrOut = "seize";
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
            frenchIrrOut = "soixante-dix";
            break;
        case 1:
            frenchIrrOut = "soixante-et-onze";
            break;
        case 2:
            frenchIrrOut = "soixante-douze";
            break;
        case 3:
            frenchIrrOut = "soixante-treize";
            break;
        case 4:
            frenchIrrOut = "soixante-quatorze";
            break;
        case 5:
            frenchIrrOut = "soixante-quinze";
            break;
        case 6:
            frenchIrrOut = "soixante-seize";
            break;
        case 7:
            frenchIrrOut = "soixante-dix-sept";
            break;
        case 8:
            frenchIrrOut = "soixante-dix-huit";
            break;
        case 9:
            frenchIrrOut = "soixante-dix-neuf";
            break;
        }
        break;
    case 8:
        switch (frenchIn1)
        {
        case 0:
            frenchIrrOut = "quatre-vingts";
            break;
        case 1:
            frenchIrrOut = "quatre-vingt-un";
            break;
        case 2:
            frenchIrrOut = "quatre-vingt-deux";
            break;
        case 3:
            frenchIrrOut = "quatre-vingt-trois";
            break;
        case 4:
            frenchIrrOut = "quatre-vingt-quatre";
            break;
        case 5:
            frenchIrrOut = "quatre-vingt-cinq";
            break;
        case 6:
            frenchIrrOut = "quatre-vingt-six";
            break;
        case 7:
            frenchIrrOut = "quatre-vingt-sept";
            break;
        case 8:
            frenchIrrOut = "quatre-vingt-huit";
            break;
        case 9:
            frenchIrrOut = "quatre-vingt-neuf";
            break;
        }
        break;
    case 9:
        switch (frenchIn1)
        {
        case 0:
            frenchIrrOut = "quatre-vingt-dix";
            break;
        case 1:
            frenchIrrOut = "quatre-vingt-onze";
            break;
        case 2:
            frenchIrrOut = "quatre-vingt-douze";
            break;
        case 3:
            frenchIrrOut = "quatre-vingt-treize";
            break;
        case 4:
            frenchIrrOut = "quatre-vingt-quatorze";
            break;
        case 5:
            frenchIrrOut = "quatre-vingt-quinze";
            break;
        case 6:
            frenchIrrOut = "quatre-vingt-seize";
            break;
        case 7:
            frenchIrrOut = "quatre-vingt-dix-sept";
            break;
        case 8:
            frenchIrrOut = "quatre-vingt-dix-huit";
            break;
        case 9:
            frenchIrrOut = "quatre-vingt-dix-neuf";
            break;
        }
        break;
    }
}