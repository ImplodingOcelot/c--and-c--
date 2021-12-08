#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

void conjugator_irregularity_fixer();
void conjugator_past_irregularity_fixer();
void conjugator_future_irregularity_fixer();
void conjugator_numbers_switcher();
void conjugator_words_switcher();
void conjugator_irregular_cong_number();
void conjugator();
bool congjugator_hasEnding(std::string const &fullString, std::string const &ending);

// conjugator vars defining
std::string cong_root, cong_answer, cong_ed1, cong_ed2, cong_ed3;
int cong_word, cong_personal, cong_number, cong_runthrough, cong_ranthrough, cong_tense, cong_level, cong_placeholder, word_cong_type;
bool cong_irregular;

void conjugator()
{
    // eliminates non-grade level stuff
    std::cout << "What spanish level are you in (ex. '1' for spanish 1): ";
    std::cin >> cong_level;
    std::cout << "How many times would you like to runthrough 'conjugator'?\n";
    std::cin >> cong_ranthrough;
    std::cout << "For refrence: type 'e' to exit.\n";
    // runsthrough amount of times entered
    for (cong_ranthrough = 0; cong_runthrough >= cong_ranthrough; cong_ranthrough++)
    {
        std::cout << "What root would you like to use?\n";
        std::cin >> cong_root;
        cong_ed1 = "ar", cong_ed2 = "er", cong_ed3 = "ir";
        if (congjugator_hasEnding(cong_root, cong_ed1) == true)
        {
            word_cong_type = 1;
        }
        else if (congjugator_hasEnding(cong_root, cong_ed2) == true)
        {
            word_cong_type = 2;
        }
        else if (congjugator_hasEnding(cong_root, cong_ed3) == true)
        {
            word_cong_type = 3;
        }
        else
        {
            std::cout << "That cong_root is shit, but fine...\n";
        }
        if (cong_root == "ir") // corrects for 2 letter cong_root "ir"
        {
            cong_root = "placeholder";
        }
        cong_root.pop_back();
        cong_root.pop_back();
        // determines ending wanted
        std::cout << "Are you talking in 1st, 2nd or 3rd person?\n"
                  << "Use 1/2/3 for your answer.\n";
        std::cin >> cong_personal;
        std::cout << "Are you talking about multiple people?\n"
                  << "Use 1 for one person; 2 for multiple people.\n";
        std::cin >> cong_number;
        if (cong_level != 1)
        {
            std::cout << "Is this Past cong_tense (1); Present cong_tense (2); or Future cong_tense (3)?\n";
            std::cin >> cong_tense;
        }
        if (cong_level == 1)
        {
            cong_irregular = false;
            cong_tense = 2;
        }
        // checks & fixes cong_irregular vars - cong_irregular cong_roots go through diffrent function
        if (cong_tense == 1)
        {
            conjugator_past_irregularity_fixer();
        }
        else if (cong_tense == 2 && cong_level != 1)
        {
            conjugator_irregularity_fixer();
        }
        else if (cong_tense == 3)
        {
            conjugator_future_irregularity_fixer();
        }
        // appends ending if its not an cong_irregular
        if (cong_irregular == false)
        {
            // PAST tense -----------------------------------------------------------------------------
            if (cong_tense == 1)
            {
                if (word_cong_type == 3)
                {
                    word_cong_type = 2; // quick fix for -ir and -er being the same in past
                }
                if (cong_personal == 1)
                {
                    if (word_cong_type == 1)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("é");
                            break;
                        case 2:
                            cong_root.append("amos");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                    else if (word_cong_type == 2)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("í");
                            break;
                        case 2:
                            cong_root.append("imos");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                }
                else if (cong_personal == 2)
                {
                    if (word_cong_type == 1)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("aste");
                            break;
                        case 2:
                            cong_root.append("asteis");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                    else if (word_cong_type == 2)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("iste");
                            break;
                        case 2:
                            cong_root.append("isteis");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                }
                else if (cong_personal == 3)
                {
                    if (word_cong_type == 1)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("ó");
                            break;
                        case 2:
                            cong_root.append("aron");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                    if (word_cong_type == 2)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("ió");
                            break;
                        case 2:
                            cong_root.append("ieron");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                }
            }
            // PRESENT TENSE --------------------------------------------------------------------------
            if (cong_tense == 2)
            {
                if (cong_personal == 1)
                {
                    if (word_cong_type == 1)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("o");
                            break;
                        case 2:
                            cong_root.append("amos");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                    else if (word_cong_type == 2)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("o");
                            break;
                        case 2:
                            cong_root.append("emos");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                    else if (word_cong_type == 3)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("o");
                            break;
                        case 2:
                            cong_root.append("imos");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                }
                else if (cong_personal == 2)
                {
                    if (word_cong_type == 1)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("as");
                            break;
                        case 2:
                            cong_root.append("áis");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                    else if (word_cong_type == 2)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("es");
                            break;
                        case 2:
                            cong_root.append("éis");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                    else if (word_cong_type == 3)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("es");
                            break;
                        case 2:
                            cong_root.append("ís");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                }
                else if (cong_personal == 3)
                {
                    if (word_cong_type == 1)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("a");
                            break;
                        case 2:
                            cong_root.append("an");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                    if (word_cong_type == 2)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("e");
                            break;
                        case 2:
                            cong_root.append("en");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                    else if (word_cong_type == 3)
                    {
                        switch (cong_number)
                        {
                        case 1:
                            cong_root.append("e");
                            break;
                        case 2:
                            cong_root.append("en");
                            break;
                        default:
                            std::cout << "you good bro?\n";
                        }
                    }
                }
            }
            // FUTURE TENSE ---------------------------------------------------------------------------
            if (cong_tense == 3)
            {
                if (cong_personal == 1)
                {
                    switch (cong_number)
                    {
                    case 1:
                        cong_root.append("é");
                        break;
                    case 2:
                        cong_root.append("emos");
                        break;
                    default:
                        std::cout << "you good bro?\n";
                    }
                }
                else if (cong_personal == 2)
                {
                    switch (cong_number)
                    {
                    case 1:
                        cong_root.append("ás");
                        break;
                    case 2:
                        cong_root.append("éis");
                        break;
                    default:
                        std::cout << "you good bro?\n";
                    }
                }
                else if (cong_personal == 3)
                {
                    switch (cong_number)
                    {
                    case 1:
                        cong_root.append("á");
                        break;
                    case 2:
                        cong_root.append("án");
                        break;
                    default:
                        std::cout << "you good bro?\n";
                    }
                }
            }
        }
        // outputs new conjgation
        std::cout << "The correct conjugation is:\n"
                  << cong_root << "\n";
        std::cout << "\n";
        // CONG END ---------------------------------
    }
}

// spanish fixers -- for conjugator
bool congjugator_hasEnding(std::string const &fullString, std::string const &ending)
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
void conjugator_irregularity_fixer()
{
    if (cong_root == "ten")
    { // tener cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "tengo";
            }
            if (cong_number == 2)
            {
                cong_root = "tenemos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "tienes";
            }
            if (cong_number == 2)
            {
                cong_root = "tenéis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "tiene";
            }
            if (cong_number == 2)
            {
                cong_root = "tienen";
            }
        }
    }
    else if (cong_root == "s")
    { // ser cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "soy";
            }
            if (cong_number == 2)
            {
                cong_root = "somos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "eres";
            }
            if (cong_number == 2)
            {
                cong_root = "sois";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "es";
            }
            if (cong_number == 2)
            {
                cong_root = "son";
            }
        }
    }
    else if (cong_root == "est")
    { // estar cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "estoy";
            }
            if (cong_number == 2)
            {
                cong_root = "estamos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "estás";
            }
            if (cong_number == 2)
            {
                cong_root = "estáis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "está";
            }
            if (cong_number == 2)
            {
                cong_root = "están";
            }
        }
    }
    else if (cong_root == "hab")
    { // haber cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "he";
            }
            if (cong_number == 2)
            {
                cong_root = "hemos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "has";
            }
            if (cong_number == 2)
            {
                cong_root = "habéis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "ha";
            }
            if (cong_number == 2)
            {
                cong_root = "han";
            }
        }
    }
    else if (cong_root == "pod")
    { // poder cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "puedo";
            }
            if (cong_number == 2)
            {
                cong_root = "podemos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "puedes";
            }
            if (cong_number == 2)
            {
                cong_root = "podéis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "puede";
            }
            if (cong_number == 2)
            {
                cong_root = "pueden";
            }
        }
    }
    else if (cong_root == "placehold")
    { // ir cong_irregularity- doesnt have actual cong_root because its too short XD
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "voy";
            }
            if (cong_number == 2)
            {
                cong_root = "vamos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "vas";
            }
            if (cong_number == 2)
            {
                cong_root = "vais";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "va";
            }
            if (cong_number == 2)
            {
                cong_root = "van";
            }
        }
    }
    else if (cong_root == "pon")
    { // poner cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "pongo";
            }
            if (cong_number == 2)
            {
                cong_root = "ponemos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "pones";
            }
            if (cong_number == 2)
            {
                cong_root = "ponéis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "pone";
            }
            if (cong_number == 2)
            {
                cong_root = "ponen";
            }
        }
    }
    else if (cong_root == "dec")
    { // decir cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "digo";
            }
            if (cong_number == 2)
            {
                cong_root = "decimos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "dices";
            }
            if (cong_number == 2)
            {
                cong_root = "decís";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "dice";
            }
            if (cong_number == 2)
            {
                cong_root = "dicen";
            }
        }
    }
    else if (cong_root == "v")
    { // ver cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "veo";
            }
            if (cong_number == 2)
            {
                cong_root = "vemos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "ves";
            }
            if (cong_number == 2)
            {
                cong_root = "veis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "ve";
            }
            if (cong_number == 2)
            {
                cong_root = "ven";
            }
        }
    }
    else if (cong_root == "quer")
    { // querer cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "quiero";
            }
            if (cong_number == 2)
            {
                cong_root = "queremos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "quieres";
            }
            if (cong_number == 2)
            {
                cong_root = "queréis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "quiere";
            }
            if (cong_number == 2)
            {
                cong_root = "quieren";
            }
        }
    }
    else if (cong_root == "sab")
    { // saber cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "sé";
            }
            if (cong_number == 2)
            {
                cong_root = "sabemos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "sabes";
            }
            if (cong_number == 2)
            {
                cong_root = "sabéis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "sabe";
            }
            if (cong_number == 2)
            {
                cong_root = "saben";
            }
        }
    }
    else if (cong_root == "ven")
    { // Venir cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "vengo";
            }
            if (cong_number == 2)
            {
                cong_root = "venimos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "vienes";
            }
            if (cong_number == 2)
            {
                cong_root = "venís";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "viene";
            }
            if (cong_number == 2)
            {
                cong_root = "vienen";
            }
        }
    }
    else if (cong_root == "pens")
    { // Pensar cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "pienso";
            }
            if (cong_number == 2)
            {
                cong_root = "pensamos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "piensas";
            }
            if (cong_number == 2)
            {
                cong_root = "pensáis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "piensa";
            }
            if (cong_number == 2)
            {
                cong_root = "piensan";
            }
        }
    }
    else if (cong_root == "conoc")
    { // Conocer cong_irregularity
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "conozco";
            }
            if (cong_number == 2)
            {
                cong_root = "conocemos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "conoces";
            }
            if (cong_number == 2)
            {
                cong_root = "conocéis";
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "conoce";
            }
            if (cong_number == 2)
            {
                cong_root = "conocen";
            }
        }
    }
}
void conjugator_past_irregularity_fixer()
{
    if (cong_root == "v")
    { // ver past tense
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "vi";
            }
            if (cong_number == 2)
            {
                cong_root = "vimos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "viste";
            }
            if (cong_number == 2)
            {
                cong_root = "error_code_69"; // ?????????????????????????????????????????
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "vio";
            }
            if (cong_number == 2)
            {
                cong_root = "vieron";
            }
        }
    }
    else if (cong_root == "d")
    { // dir past tense
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "di";
            }
            if (cong_number == 2)
            {
                cong_root = "dimos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "diste";
            }
            if (cong_number == 2)
            {
                cong_root = "error_code_69"; // ?????????????????????????????????????????
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "dio";
            }
            if (cong_number == 2)
            {
                cong_root = "dieron";
            }
        }
    }
    else if (cong_root == "s" || cong_root == "placehold")
    { // ser/ir past tense
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "fui";
            }
            if (cong_number == 2)
            {
                cong_root = "fuimos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "fuiste";
            }
            if (cong_number == 2)
            {
                cong_root = "error_code_69"; // ?????????????????????????????????????????
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "fue";
            }
            if (cong_number == 2)
            {
                cong_root = "fueron";
            }
        }
    }
    else if (cong_root == "hac")
    { // hacer past tense
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = "hice";
            }
            if (cong_number == 2)
            {
                cong_root = "hicimos";
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = "hiciste";
            }
            if (cong_number == 2)
            {
                cong_root = "error_code_69"; // ?????????????????????????????????????????
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = "hizo";
            }
            if (cong_number == 2)
            {
                cong_root = "hicieron";
            }
        }
    } // cong_root
}
void conjugator_future_irregularity_fixer()
{
    // Forms that Drop the e or i from the Infinitive Ending and Add a d
    if (cong_root == "ten" || cong_root == "pon" || cong_root == "val" || cong_root == "sal" || cong_root == "ven")
    {
        cong_irregular = true;
        cong_root.append("r");

        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root.append("é");
            }
            if (cong_number == 2)
            {
                cong_root.append("emos");
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root.append("ás");
            }
            if (cong_number == 2)
            {
                cong_root.append("éis");
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root.append("á");
            }
            if (cong_number == 2)
            {
                cong_root.append("án");
            }
        }
    }
    // Forms that Drop the e or i from the Infinitive Ending
    else if (cong_root == "pod" || cong_root == "cab" || cong_root == "hab" || cong_root == "sab" || cong_root == "quer")
    {
        cong_irregular = true;
        cong_root.append("r");

        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root.append("é");
            }
            if (cong_number == 2)
            {
                cong_root.append("emos");
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root.append("ás");
            }
            if (cong_number == 2)
            {
                cong_root.append("éis");
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root.append("á");
            }
            if (cong_number == 2)
            {
                cong_root.append("án");
            }
        }
    }
    // cong_irregular stems
    else if (cong_root == "hac")
    {
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = ("haré");
            }
            if (cong_number == 2)
            {
                cong_root = ("haremos");
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = ("harás");
            }
            if (cong_number == 2)
            {
                cong_root = ("haréis");
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = ("hará");
            }
            if (cong_number == 2)
            {
                cong_root = ("harán");
            }
        }
    }
    else if (cong_root == "dec")
    {
        cong_irregular = true;
        if (cong_personal == 1)
        {
            if (cong_number == 1)
            {
                cong_root = ("diré");
            }
            if (cong_number == 2)
            {
                cong_root = ("diremos");
            }
        }
        else if (cong_personal == 2)
        {
            if (cong_number == 1)
            {
                cong_root = ("dirás");
            }
            if (cong_number == 2)
            {
                cong_root = ("diréis");
            }
        }
        else if (cong_personal == 3)
        {
            if (cong_number == 1)
            {
                cong_root = ("dirá");
            }
            if (cong_number == 2)
            {
                cong_root = ("dirán");
            }
        }
    }
}
