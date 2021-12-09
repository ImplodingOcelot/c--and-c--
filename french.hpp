#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

void franch();
void frenchNumbers();
void french_numbersF();
void frenchAddHundred();
void frenchConjugator();
void french_irregular_cong();
bool Fcompare(std::string root, std::string comparable)
{

    if (root == comparable)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
std::string irregulars(int inputNum, std::string root, int personal, int numbers);

int french_optionio, frenchIn1, frenchIn10, frenchIn100, fWordType, Fpersonal, Fnumber, Fcount, FsavedNum;
std::string frenchOut100, frenchOut10, frenchOut1, frenchIrrOut, Froot, FirregularOut, Fnext;
bool french_irgNum, french_has100, french_has10, french_has1, Firregular, Fcompare2;

std::string Firregular_words[24] = {"êt", "avo", "pouvo", "fai", "mett", "di", "devo", "prend", "all", "voulo", "savo", "fallo", "vo", "rend", "ven", "comprend", "ten", "suiv", "connaît", "entend", "attend", "remett", "appel", "permett"};
void franch()
{
    Fcompare2 = false;
    Fcount = 0;
    // e
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
            if (french_has100 != true)
            {
                std::cout << "Your number is: " << frenchIrrOut << "\n";
            }
            else if (french_has100 == true)
            {
                frenchAddHundred();
                std::cout << "Your number is: " << frenchOut10 << " " << frenchIrrOut << "\n";
            }
        }
    }
    else if (french_optionio == 2)
    {
        frenchConjugator();
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

void frenchConjugator()
{

    std::cout << "What would you like to use for your root?\n";
    std::cin >> Froot;
    if (congjugator_hasEnding(Froot, "er") == true)
    {
        fWordType = 1;
    }
    else if (congjugator_hasEnding(Froot, "ir") == true)
    {
        fWordType = 2;
    }
    else if (congjugator_hasEnding(Froot, "re") == true)
    {
        fWordType = 3;
    }
    else
    {
        std::cout << "That root is shit, but fine...\n";
    }
    Froot.pop_back();
    Froot.pop_back();

    std::cout << "Are you talking in 1st, 2nd or 3rd person?\n"
              << "Use 1/2/3 for your answer.\n";
    std::cin >> Fpersonal;
    std::cout << "Are you talking about multiple people?\n"
              << "Use 1 for one person; 2 for multiple people.\n";
    std::cin >> Fnumber;
    if (Fcount < 25 || Fcompare2 == true)
    {
        french_irregular_cong();
    }
    if (Fcompare2 == false) // common ed
    {
        if (Fpersonal == 1)
        {
            if (fWordType == 1)
            {
                switch (Fnumber)
                {
                case 1:
                    Froot.append("e");
                    break;
                case 2:
                    Froot.append("ons");
                    break;
                default:
                    std::cout << "you good bro?\n";
                }
            }
            else if (fWordType == 2)
            {
                switch (Fnumber)
                {
                case 1:
                    Froot.append("is");
                    break;
                case 2:
                    Froot.append("issons");
                    break;
                default:
                    std::cout << "you good bro?\n";
                }
            }
            else if (fWordType == 3)
            {
                switch (Fnumber)
                {
                case 1:
                    Froot.append("s");
                    break;
                case 2:
                    Froot.append("ons");
                    break;
                default:
                    std::cout << "you good bro?\n";
                }
            }
        }
        else if (cong_personal == 2)
        {
            if (fWordType == 1)
            {
                switch (Fnumber)
                {
                case 1:
                    Froot.append("es");
                    break;
                case 2:
                    Froot.append("ez");
                    break;
                default:
                    std::cout << "you good bro?\n";
                }
            }
            else if (fWordType == 2)
            {
                switch (Fnumber)
                {
                case 1:
                    Froot.append("is");
                    break;
                case 2:
                    Froot.append("issez");
                    break;
                default:
                    std::cout << "you good bro?\n";
                }
            }
            else if (fWordType == 3)
            {
                switch (Fnumber)
                {
                case 1:
                    Froot.append("s");
                    break;
                case 2:
                    Froot.append("ez");
                    break;
                default:
                    std::cout << "you good bro?\n";
                }
            }
        }
        else if (Fpersonal == 3)
        {
            if (fWordType == 1)
            {
                switch (Fnumber)
                {
                case 1:
                    Froot.append("e");
                    break;
                case 2:
                    Froot.append("ent");
                    break;
                default:
                    std::cout << "you good bro?\n";
                }
            }
            if (fWordType == 2)
            {
                switch (Fnumber)
                {
                case 1:
                    Froot.append("it");
                    break;
                case 2:
                    Froot.append("issent");
                    break;
                default:
                    std::cout << "you good bro?\n";
                }
            }
            else if (fWordType == 3)
            {
                switch (Fnumber)
                {
                case 1:
                    Froot.append("");
                    break;
                case 2:
                    Froot.append("ent");
                    break;
                default:
                    std::cout << "you good bro?\n";
                }
            }
        }
    }
    else
    {
        irregulars(FsavedNum, Froot, Fpersonal, Fnumber);
        std::cout << Froot << "\n";
    }
    std::cout << "Your output is..." << Froot << "\n";
}

void french_irregular_cong()
{

    Fnext = Firregular_words[Fcount];
    Fcompare2 = Fcompare(Froot, Fnext);
    if (Fcompare2 == true)
    {
        Fcount = FsavedNum;
    }
}
std::string irregulars(int inputNum, std::string root, int personal, int numbers)
{
    if (inputNum == 1)
    {
        std::string type1[3][2]{
            {"suis", "sommes"},
            {"es", "êtes"},
            {"est", "sont"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 2)
    {
        std::string type1[3][2]{
            {"ai", "avons"},
            {"as", "avez"},
            {"a", "ont"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 3)
    {
        std::string type1[3][2]{
            {"peux", "pouvons"},
            {"peux", "pouvez"},
            {"peut", "peuvent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 4)
    {
        std::string type1[3][2]{
            {"fais", "faisons"},
            {"fais", "faites"},
            {"fait", "font"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 5)
    {
        std::string type1[3][2]{
            {"mets", "mettons"},
            {"mets", "mettez"},
            {"met", "mettent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 6)
    {
        std::string type1[3][2]{
            {"dis", "disons"},
            {"dis", "direz"},
            {"dit", "diront"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 7)
    {
        std::string type1[3][2]{
            {"dois", "devons"},
            {"dois", "devez"},
            {"doit", "doivent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 8)
    {
        std::string type1[3][2]{
            {"prends", "prenons"},
            {"prends", "prenez"},
            {"prend", "prennent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 9)
    {
        std::string type1[3][2]{
            {"vais", "allons"},
            {"vas", "allez"},
            {"va", "vont"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 10)
    {
        std::string type1[3][2]{
            {"veux", "voulons"},
            {"veux", "voulez"},
            {"veut", "veulent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 11)
    {
        std::string type1[3][2]{
            {"sais", "savons"},
            {"sais", "savez"},
            {"sait", "savent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 12)
    {
        std::string type1[3][2]{
            {"faut", "faut"},
            {"faut", "faut"},
            {"faire", "faut"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 13)
    {
        std::string type1[3][2]{
            {"vois", "voyons"},
            {"vois", "voyez"},
            {"voit", "voient"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 14)
    {
        std::string type1[3][2]{
            {"rends", "rendons"},
            {"rends", "rendez"},
            {"rend", "rendent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 15)
    {
        std::string type1[3][2]{
            {"viens", "venons"},
            {"viens", "venez"},
            {"vient", "viennent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 16)
    {
        std::string type1[3][2]{
            {"comprends", "comprenons"},
            {"comprends", "comprenez"},
            {"comprend", "comprennent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 17)
    {
        std::string type1[3][2]{
            {"tiens", "tenons"},
            {"tiens", "tenez"},
            {"tient", "tiennent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 18)
    {
        std::string type1[3][2]{
            {"suis", "suivons"},
            {"suis", "suivez"},
            {"suit", "suivent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 19)
    {
        std::string type1[3][2]{
            {"connais", "connaissons"},
            {"connais", "connaissez"},
            {"connaît", "connaissent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 20)
    {
        std::string type1[3][2]{
            {"entends", "entendons"},
            {"entends", "entendez"},
            {"entend", "entendent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 21)
    {
        std::string type1[3][2]{
            {"remets", "remettons"},
            {"remets", "remettez"},
            {"remet", "remettent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 22)
    {
        std::string type1[3][2]{
            {"appelle", "appelons"},
            {"appelles", "appelez"},
            {"appelle", "appellent"}};
        root = type1[personal][numbers];
    }
    else if (inputNum == 23)
    {
        std::string type1[3][2]{
            {"permets", "permettons"},
            {"permets", "permettez"},
            {"permet", "permettent"}};
        root = type1[personal][numbers];
    }
    return root;
}