#include <iostream>
#include <vector>
#include <string>
#include "cong.hpp"
#include "numb.hpp"

// UI
std::string gui_using_choice, gui_exit;

int main()
{
    if (gui_exit != "exit" || gui_exit != "e" || gui_exit != "EXIT")
    {
        std::cout << "Opening Spanish Translator\n";
        std::cout << "This program is created by ImplodingOcelot <zott211@gmail.com>\n";
        std::cout << "Loading Sucess!\n";
        std::cout << "If you want to quit, type 'exit' or 'e'- If you want anything else type any other WORD.\n";
        std::cin >> gui_exit;
        std::cout << "What feature would you like to use?\n";
        std::cout << "c for conjugator or n for numeric.\n";
        std::cin >> gui_using_choice;
        if (gui_using_choice == "c" || gui_using_choice == "C")
        {
            conjugator();
        }
        else if (gui_using_choice == "n" || gui_using_choice == "N")
        {
            numbers();
        }
        else if (gui_using_choice == "MorayEel")
        {
            std::cout
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmddhhhdmNMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmdys+::::::--://+hMNMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMhshmMMMMMMMMMMMMMMMMMMMNdys+:----:/++//ys::+o++sNMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmho.`.-:+shdmmdhysooo++/////+ys/::/+ossso+hd+:oyyoMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMm+-``````````.--..``....-/+sy+/ddysossydhss++++osoo+NMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMmo-``````````.........---:/osmmmhdyyyyhdhyoooosohmhsshMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMy-.`````..`.........----.--:/ymhdyoymmmmmhyssshhddmyymMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMy..`..`.-...-::-----:----::::/+ssoo++hNNmdhyhhyhddhydMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMy...-...-:---/++////+oo+/:://osyhyssssoydhhmNmhdohshNMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMNo...-:-.:/:::/oo+o+osyyo+/+osyyhdhhhdhyshmNNNmNNmyhNMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMN/....---://:/+oo++++oyysssyysyyhhhhmmhhdmMNNmNNmdhNMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMM+...-:-.-::::/ooo+++osyysooooyhhdmmmddmNMNmmNNNmhmMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMd----:-..::::/+os++oossyso+osyydmmmmdNMMMNmmdNNhmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMs//.---::::+//+so++++osssoooshdmNNNNMMMMMNdyhmhmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMyo----::+////+oo+++/+oososydmNNNNMMMMMMMMmdyddMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMN+:::::/::::/+os+//++ososhmNMMMMMMMMMMMMMNNmmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMM+++:::/---:/+++/+++osyydMMMMMMMMMMMMMMMMMMNMMMMMMMMMMMMMMMMMNmmhdNNMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMM+o+////::::/+/--:+oyhdyss+/oyhmNMMMMMMMMMMMMMMMMMMMMmmmdyso++/++++yMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMoso++o+///+++/:::/osoooss+//+////+oyyhhhhhhhhhhhhhhysssssssssssyss/dMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMhooossoo+ooso+///++++///++osss+///+ossso++++ossyyhhhhhhhhhhhhhhhhy+mMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMNsossoooossssoooosssso++ooyhhhyyssyyyyyyyyyhhhdddmmdddddddddhhdysydMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMmoo+++++oosssssyyyhhhyyyyhhhhdmdddddddddddddddmmmmddhhyysssooshmMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMms+++++++++++oooosssssssyyysyhhdhhhhhhyyyyyyysso++oosyhddmNMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMNho+++++++++++++++oooooooooooooooooooooooooooooydNMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMNds++/+++++++++++++++//////oyyyyyhhdddddhdmNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMNdyso+++///+/++++osyhdNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNmmdddddmNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n"
                << "MORAY EEL --- MORAY EEL --- MORAY EEL --- MORAY EEL --- MORAY EEL --- MORAY EEL --- MORAY EEL --- MO\n";
        }
    }
}
