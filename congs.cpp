// Written by Imploding_Ocelot (think59@outlook.com)
#include <iostream>
#include <vector>
#include <string>
// spanish declorations
std::string root, type, answer, ed1, ed2, ed3, form, tens, ones, Ften1, Fone1, outTens, outOnes, empty, irregular_output, language;
int word_type, personal, number, runthrough, ranthrough, tense, level, numb_type, ntens, nones, Ften, Fone, numberOutput, placeholder;
bool irregular, onesTrue, tensTrue, irregular_n;

// ending
bool hasEnding(std::string const &fullString, std::string const &ending);

// spanish void decs.
void irregularity_fixer();
void past_irregularity_fixer();
void future_irregularity_fixer();
void numbers_switcher();
void words_switcher();
void irregular_number();

int main()
{
    // determines basic start-up for best user experience
    // determines # of words
    std::cout << "Input the amount of times to run through: ";
    std::cin >> runthrough;
    runthrough = runthrough - 1;
    // determines language
    std::cout << "What language do you want (Spanish (s) or French (f))\n";
    std::cin >> language;
    if (language == "s" || language == "spanish")
    {
        // eliminates non-grade level stuff
        std::cout << "What spanish level are you in (ex. '1' for spanish 1): ";
        std::cin >> level;
        std::cout << "For refrence: type 'e' to exit.\n";
        std::cout << "Would you like the congjugator (c) or would you like the numbers (n)?\n";
        std::cin >> form;
        // runsthrough amount of times entered
        for (ranthrough = 0; runthrough >= ranthrough; ranthrough++)
        {
            if (form == "c" || form == "congjugator")
            {
                ed1 = "ar", ed2 = "er", ed3 = "ir";
                std::cout << "Please enter a root word: ";
                std::cin >> root;
                std::cout << "Using '" << root << "' as root.\n";
                // determines current ending
                if (hasEnding(root, ed1) == true)
                {
                    word_type = 1;
                }
                else if (hasEnding(root, ed2) == true)
                {
                    word_type = 2;
                }
                else if (hasEnding(root, ed3) == true)
                {
                    word_type = 3;
                }
                else
                {
                    std::cout << "That root is shit, but fine...\n";
                }
                if (root == "ir") // corrects for 2 letter root "ir"
                {
                    root = "placeholder";
                }
                root.pop_back();
                root.pop_back();
                // determines ending wanted
                std::cout << "Are you talking in 1st, 2nd or 3rd person?\n"
                          << "Use 1/2/3 for your answer.\n";
                std::cin >> personal;
                std::cout << "Are you talking about multiple people?\n"
                          << "Use 1 for one person; 2 for multiple people.\n";
                std::cin >> number;
                if (level != 1)
                {
                    std::cout << "Is this Past Tense (1); Present Tense (2); or Future Tense (3)?\n";
                    std::cin >> tense;
                }
                if (level == 1)
                {
                    irregular = false;
                    tense = 2;
                }
                // checks & fixes irregular vars - irregular roots go through diffrent function
                if (tense == 1)
                {
                    past_irregularity_fixer();
                }
                else if (tense == 2)
                {
                    irregularity_fixer();
                }
                else if (tense == 3)
                {
                    future_irregularity_fixer();
                }
                // appends ending if its not an irregular
                if (irregular == false || level == 1)
                {
                    // PAST tense -----------------------------------------------------------------------------
                    if (tense == 1)
                    {
                        if (word_type == 3)
                        {
                            word_type = 2; // quick fix for -ir and -er being the same in past
                        }
                        if (personal == 1)
                        {
                            if (word_type == 1)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("é");
                                    break;
                                case 2:
                                    root.append("amos");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                            else if (word_type == 2)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("í");
                                    break;
                                case 2:
                                    root.append("imos");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                        }
                        else if (personal == 2)
                        {
                            if (word_type == 1)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("aste");
                                    break;
                                case 2:
                                    root.append("asteis");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                            else if (word_type == 2)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("iste");
                                    break;
                                case 2:
                                    root.append("isteis");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                        }
                        else if (personal == 3)
                        {
                            if (word_type == 1)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("ó");
                                    break;
                                case 2:
                                    root.append("aron");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                            if (word_type == 2)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("ió");
                                    break;
                                case 2:
                                    root.append("ieron");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                        }
                    }
                    // PRESENT TENSE --------------------------------------------------------------------------
                    if (tense == 2)
                    {
                        if (personal == 1)
                        {
                            if (word_type == 1)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("o");
                                    break;
                                case 2:
                                    root.append("amos");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                            else if (word_type == 2)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("o");
                                    break;
                                case 2:
                                    root.append("emos");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                            else if (word_type == 3)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("o");
                                    break;
                                case 2:
                                    root.append("imos");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                        }
                        else if (personal == 2)
                        {
                            if (word_type == 1)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("as");
                                    break;
                                case 2:
                                    root.append("áis");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                            else if (word_type == 2)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("es");
                                    break;
                                case 2:
                                    root.append("éis");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                            else if (word_type == 3)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("es");
                                    break;
                                case 2:
                                    root.append("ís");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                        }
                        else if (personal == 3)
                        {
                            if (word_type == 1)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("a");
                                    break;
                                case 2:
                                    root.append("an");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                            if (word_type == 2)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("e");
                                    break;
                                case 2:
                                    root.append("en");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                            else if (word_type == 3)
                            {
                                switch (number)
                                {
                                case 1:
                                    root.append("e");
                                    break;
                                case 2:
                                    root.append("en");
                                    break;
                                default:
                                    std::cout << "you good bro?\n";
                                }
                            }
                        }
                    }
                    // FUTURE TENSE ---------------------------------------------------------------------------
                    if (tense == 3)
                    {
                        if (personal == 1)
                        {
                            switch (number)
                            {
                            case 1:
                                root.append("é");
                                break;
                            case 2:
                                root.append("emos");
                                break;
                            default:
                                std::cout << "you good bro?\n";
                            }
                        }
                        else if (personal == 2)
                        {
                            switch (number)
                            {
                            case 1:
                                root.append("ás");
                                break;
                            case 2:
                                root.append("éis");
                                break;
                            default:
                                std::cout << "you good bro?\n";
                            }
                        }
                        else if (personal == 3)
                        {
                            switch (number)
                            {
                            case 1:
                                root.append("á");
                                break;
                            case 2:
                                root.append("án");
                                break;
                            default:
                                std::cout << "you good bro?\n";
                            }
                        }
                    }
                }
                // outputs new conjgation
                std::cout << "The correct conjugation is:\n"
                          << root << "\n";
                std::cout << "\n";
                // CONG END ---------------------------------
            }
            else if (form == "n" || form == "numbers")
            {
                std::cout << "Is your number in word form (1) or number form (2)?\n";
                std::cin >> numb_type;
                if (numb_type == 1)
                {
                    std::cout << "What is in the tens place (Spelling matters): ";
                    std::cin >> tens;
                    std::cout << "What is in the ones place (Spelling still matters): ";
                    std::cin >> ones;
                    numbers_switcher();
                    numberOutput = Ften + Fone;
                    std::cout << "The number in numberical form is:" << numberOutput << "\n";
                }
                else if (numb_type == 2)
                {
                    std::cout << "What is in the tens place?\n";
                    std::cin >> ntens;
                    std::cout << "What is in the ones place?\n";
                    std::cin >> nones;
                    irregular_number();
                    if (irregular_n == true)
                    {
                        std::cout << irregular_output << "\n";
                    }
                    if (irregular_n == false)
                    {
                        words_switcher();
                        if (onesTrue == true && tensTrue == true)
                        {
                            std::cout << outTens << " y " << outOnes << "\n";
                        }
                        else if (onesTrue == false && tensTrue == true)
                        {
                            std::cout << outTens << "\n";
                        }
                        else if (onesTrue == true && tensTrue == false)
                        {
                            std::cout << outOnes << "\n";
                        }
                        else if (onesTrue == false && tensTrue == false)
                        {
                            std::cout << "cero, are you dumb?"
                                      << "\n";
                        }
                        std::cout << tensTrue << "\n"
                                  << onesTrue << "\n";
                    }
                }
            }
        }
    }else if(language == "f" || language == "french")   {
        std::cout << "What french level are you in (ex. '1' for french 1): ";
        std::cin >> level;
        std::cout << "For refrence: type 'e' to exit.\n";
        std::cout << "Would you like the congjugator (c) or would you like the numbers (n)?\n";
        std::cout << "Currently, numbers are not coded because I have a life."
        std::cin >> form;
        for (ranthrough = 0; runthrough >= ranthrough; ranthrough++)   {
            

        }
    }
}
// diffrent areas to paste on ending

void irregularity_fixer()
{
    if (root == "ten")
    { // tener irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "tengo";
            }
            if (number == 2)
            {
                root = "tenemos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "tienes";
            }
            if (number == 2)
            {
                root = "tenéis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "tiene";
            }
            if (number == 2)
            {
                root = "tienen";
            }
        }
    }
    else if (root == "s")
    { // ser irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "soy";
            }
            if (number == 2)
            {
                root = "somos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "eres";
            }
            if (number == 2)
            {
                root = "sois";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "es";
            }
            if (number == 2)
            {
                root = "son";
            }
        }
    }
    else if (root == "est")
    { // estar irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "estoy";
            }
            if (number == 2)
            {
                root = "estamos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "estás";
            }
            if (number == 2)
            {
                root = "estáis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "está";
            }
            if (number == 2)
            {
                root = "están";
            }
        }
    }
    else if (root == "hab")
    { // haber irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "he";
            }
            if (number == 2)
            {
                root = "hemos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "has";
            }
            if (number == 2)
            {
                root = "habéis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "ha";
            }
            if (number == 2)
            {
                root = "han";
            }
        }
    }
    else if (root == "pod")
    { // poder irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "puedo";
            }
            if (number == 2)
            {
                root = "podemos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "puedes";
            }
            if (number == 2)
            {
                root = "podéis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "puede";
            }
            if (number == 2)
            {
                root = "pueden";
            }
        }
    }
    else if (root == "placehold")
    { // ir irregularity- doesnt have actual root because its too short XD
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "voy";
            }
            if (number == 2)
            {
                root = "vamos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "vas";
            }
            if (number == 2)
            {
                root = "vais";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "va";
            }
            if (number == 2)
            {
                root = "van";
            }
        }
    }
    else if (root == "pon")
    { // poner irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "pongo";
            }
            if (number == 2)
            {
                root = "ponemos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "pones";
            }
            if (number == 2)
            {
                root = "ponéis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "pone";
            }
            if (number == 2)
            {
                root = "ponen";
            }
        }
    }
    else if (root == "dec")
    { // decir irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "digo";
            }
            if (number == 2)
            {
                root = "decimos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "dices";
            }
            if (number == 2)
            {
                root = "decís";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "dice";
            }
            if (number == 2)
            {
                root = "dicen";
            }
        }
    }
    else if (root == "v")
    { // ver irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "veo";
            }
            if (number == 2)
            {
                root = "vemos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "ves";
            }
            if (number == 2)
            {
                root = "veis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "ve";
            }
            if (number == 2)
            {
                root = "ven";
            }
        }
    }
    else if (root == "quer")
    { // querer irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "quiero";
            }
            if (number == 2)
            {
                root = "queremos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "quieres";
            }
            if (number == 2)
            {
                root = "queréis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "quiere";
            }
            if (number == 2)
            {
                root = "quieren";
            }
        }
    }
    else if (root == "sab")
    { // saber irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "sé";
            }
            if (number == 2)
            {
                root = "sabemos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "sabes";
            }
            if (number == 2)
            {
                root = "sabéis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "sabe";
            }
            if (number == 2)
            {
                root = "saben";
            }
        }
    }
    else if (root == "ven")
    { // Venir irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "vengo";
            }
            if (number == 2)
            {
                root = "venimos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "vienes";
            }
            if (number == 2)
            {
                root = "venís";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "viene";
            }
            if (number == 2)
            {
                root = "vienen";
            }
        }
    }
    else if (root == "pens")
    { // Pensar irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "pienso";
            }
            if (number == 2)
            {
                root = "pensamos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "piensas";
            }
            if (number == 2)
            {
                root = "pensáis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "piensa";
            }
            if (number == 2)
            {
                root = "piensan";
            }
        }
    }
    else if (root == "conoc")
    { // Conocer irregularity
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "conozco";
            }
            if (number == 2)
            {
                root = "conocemos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "conoces";
            }
            if (number == 2)
            {
                root = "conocéis";
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "conoce";
            }
            if (number == 2)
            {
                root = "conocen";
            }
        }
    }
}
void past_irregularity_fixer()
{
    if (root == "v")
    { // ver past tense
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "vi";
            }
            if (number == 2)
            {
                root = "vimos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "viste";
            }
            if (number == 2)
            {
                root = "error_code_69"; // ?????????????????????????????????????????
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "vio";
            }
            if (number == 2)
            {
                root = "vieron";
            }
        }
    }
    else if (root == "d")
    { // dir past tense
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "di";
            }
            if (number == 2)
            {
                root = "dimos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "diste";
            }
            if (number == 2)
            {
                root = "error_code_69"; // ?????????????????????????????????????????
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "dio";
            }
            if (number == 2)
            {
                root = "dieron";
            }
        }
    }
    else if (root == "s" || root == "placehold")
    { // ser/ir past tense
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "fui";
            }
            if (number == 2)
            {
                root = "fuimos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "fuiste";
            }
            if (number == 2)
            {
                root = "error_code_69"; // ?????????????????????????????????????????
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "fue";
            }
            if (number == 2)
            {
                root = "fueron";
            }
        }
    }
    else if (root == "hac")
    { // hacer past tense
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = "hice";
            }
            if (number == 2)
            {
                root = "hicimos";
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = "hiciste";
            }
            if (number == 2)
            {
                root = "error_code_69"; // ?????????????????????????????????????????
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = "hizo";
            }
            if (number == 2)
            {
                root = "hicieron";
            }
        }
    } // root
}
void future_irregularity_fixer()
{
    //Forms that Drop the e or i from the Infinitive Ending and Add a d
    if (root == "ten" || root == "pon" || root == "val" || root == "sal" || root == "ven")
    {
        irregular = true;
        root.append("r");

        if (personal == 1)
        {
            if (number == 1)
            {
                root.append("é");
            }
            if (number == 2)
            {
                root.append("emos");
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root.append("ás");
            }
            if (number == 2)
            {
                root.append("éis");
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root.append("á");
            }
            if (number == 2)
            {
                root.append("án");
            }
        }
    }
    //Forms that Drop the e or i from the Infinitive Ending
    else if (root == "pod" || root == "cab" || root == "hab" || root == "sab" || root == "quer")
    {
        irregular = true;
        root.append("r");

        if (personal == 1)
        {
            if (number == 1)
            {
                root.append("é");
            }
            if (number == 2)
            {
                root.append("emos");
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root.append("ás");
            }
            if (number == 2)
            {
                root.append("éis");
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root.append("á");
            }
            if (number == 2)
            {
                root.append("án");
            }
        }
    }
    //Irregular stems
    else if (root == "hac")
    {
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = ("haré");
            }
            if (number == 2)
            {
                root = ("haremos");
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = ("harás");
            }
            if (number == 2)
            {
                root = ("haréis");
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = ("hará");
            }
            if (number == 2)
            {
                root = ("harán");
            }
        }
    }
    else if (root == "dec")
    {
        irregular = true;
        if (personal == 1)
        {
            if (number == 1)
            {
                root = ("diré");
            }
            if (number == 2)
            {
                root = ("diremos");
            }
        }
        else if (personal == 2)
        {
            if (number == 1)
            {
                root = ("dirás");
            }
            if (number == 2)
            {
                root = ("diréis");
            }
        }
        else if (personal == 3)
        {
            if (number == 1)
            {
                root = ("dirá");
            }
            if (number == 2)
            {
                root = ("dirán");
            }
        }
    }
}
void numbers_switcher()
{
    // TENS ---------------
    if (tens == "diez")
    {
        Ften = 1;
    }
    else if (tens == "veinte")
    {
        Ften = 2;
    }
    else if (tens == "treinta")
    {
        Ften = 3;
    }
    else if (tens == "cuarenta")
    {
        Ften = 4;
    }
    else if (tens == "cincuenta")
    {
        Ften = 5;
    }
    else if (tens == "sesenta")
    {
        Ften = 6;
    }
    else if (tens == "setenta")
    {
        Ften = 7;
    }
    else if (tens == "ochenta")
    {
        Ften = 8;
    }
    else if (tens == "noventa")
    {
        Ften = 9;
    }
    else if (tens == "cien")
    {
        Ften = 10;
    }
    // ONES ---------------------------------------
    // --------------------------------------------
    if (ones == "cero")
    {
        Fone = 0;
    }
    else if (ones == "uno")
    {
        Fone = 1;
    }
    else if (ones == "dos")
    {
        Fone = 2;
    }
    else if (ones == "tres")
    {
        Fone = 3;
    }
    else if (ones == "cuatro")
    {
        Fone = 4;
    }
    else if (ones == "cinco")
    {
        Fone = 5;
    }
    else if (ones == "sies")
    {
        Fone = 6;
    }
    else if (ones == "siete")
    {
        Fone = 7;
    }
    else if (ones == "ocho")
    {
        Fone = 8;
    }
    else if (ones == "noventa")
    {
        Fone = 9;
    }
}
void words_switcher()
{
    tensTrue = false;
    switch (ntens)
    {
    case 0:
        placeholder++;
        tensTrue = false;
    case 1:
        outTens = "diez";
        tensTrue = true;
        break;
    case 2:
        outTens = "viente";
        tensTrue = true;
        break;
    case 3:
        outTens = "trienta";
        tensTrue = true;
        break;
    case 4:
        outTens = "quarenta";
        tensTrue = true;
        break;
    case 5:
        outTens = "cincuenta";
        tensTrue = true;
        break;
    case 6:
        outTens = "sesenta";
        tensTrue = true;
        break;
    case 7:
        outTens = "setenta";
        tensTrue = true;
        break;
    case 8:
        outTens = "ochenta";
        tensTrue = true;
        break;
    case 9:
        outTens = "noventa";
        tensTrue = true;
        break;
    }
    onesTrue = false;
    switch (nones)
    {
    case 0:
        placeholder++;
        onesTrue = false;
        break;
    case 1:
        outOnes = "uno";
        onesTrue = true;
        break;
    case 2:
        outOnes = "dos";
        onesTrue = true;
        break;
    case 3:
        outOnes = "tres";
        onesTrue = true;
        break;
    case 4:
        outOnes = "cuatro";
        onesTrue = true;
        break;
    case 5:
        outOnes = "cinco";
        onesTrue = true;
        break;
    case 6:
        outOnes = "sies";
        onesTrue = true;
        break;
    case 7:
        outOnes = "siete";
        onesTrue = true;
        break;
    case 8:
        outOnes = "ocho";
        onesTrue = true;
        break;
    case 9:
        outOnes = "nueve";
        onesTrue = true;
        break;
    }
}
void irregular_number()
{
    if (ntens == 20 && nones != 0)
    {
        irregular_n = true;
        if (nones == 1)
        {
            irregular_output = "vientiuno";
        }
        else if (nones == 2)
        {
            irregular_output = "vientidos";
        }
        else if (nones == 3)
        {
            irregular_output = "vientitres";
        }
        else if (nones == 4)
        {
            irregular_output = "vienticuatro";
        }
        else if (nones == 5)
        {
            irregular_output = "vienticinco";
        }
        else if (nones == 6)
        {
            irregular_output = "vientisies";
        }
        else if (nones == 7)
        {
            irregular_output = "vientisiete";
        }
        else if (nones == 8)
        {
            irregular_output = "vientiocho";
        }
        else if (nones == 9)
        {
            irregular_output = "vientinueve";
        }
    }
    else if (ntens == 1 && nones != 0)
    {
        irregular_n = true;
        if (nones == 1)
        {
            irregular_output = "once";
        }
        else if (nones == 2)
        {
            irregular_output = "doce";
        }
        else if (nones == 3)
        {
            irregular_output = "trece";
        }
        else if (nones == 4)
        {
            irregular_output = "catorse";
        }
        else if (nones == 5)
        {
            irregular_output = "quince";
        }
        else if (nones == 6)
        {
            irregular_output = "dieciseis";
        }
        else if (nones == 7)
        {
            irregular_output = "diecisiete";
        }
        else if (nones == 8)
        {
            irregular_output = "dieciocho";
        }
        else if (nones == 9)
        {
            irregular_output = "diecinueve";
        }
    }
}
bool hasEnding(std::string const &fullString, std::string const &ending)
{
    if (fullString.length() >= ending.length())
    {
        return (0 == fullString.compare(fullString.length() - ending.length(), ending.length(), ending));
    }
    else
    {
        return false;
    }
}