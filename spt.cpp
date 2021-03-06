// coded in c-pp
#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include "finished/cong.hpp"
#include "finished/numb.hpp"
#include "french.hpp"

// UI
std::string gui_using_choice, gui_exit, gui_lang;

int main()
{
    std::cout << "Opening the Conjugator";
    sleep(1);
    std::cout << "Done!\n";
    std::cout << "Opening the numbers\n";
    sleep(1);
    std::cout << "Done!\n";
    std::cout << "This program is created by ImplodingOcelot <zott211@gmail.com>\n";
    std::cout << "If you want to exit type in anything not specified as a choice.\n";
    std::cout << "What language would you like to turn english in or out of?\n(s for spanish, f for french)\n";
    std::cin >> gui_lang;
    sleep(1);
    if (gui_lang == "s")
    {
        std::cout << "What feature would you like to use?\n";
        sleep(1);
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
    }
    else if(gui_lang == "f")    {
        franch();
    }
    else if (gui_lang == "MorayEel")
    {
        std::cout
            << "....................................................................................................\n"
            << "....................................................................................................\n"
            << "....................................................................................................\n"
            << "....................................................................................................\n"
            << "....................................................................N.ddhhhd.N......................\n"
            << ".............................................................N.dys+::::::--://+h.N..................\n"
            << "..................................hsh....................Ndys+:----:/++//ys::+o++sN.................\n"
            << "................................ho.`.-:+shd..dhysooo++/////+ys/::/+ossso+hd+:oyyo...................\n"
            << "..............................+-``````````.--..``....-/+sy+/ddysossydhss++++osoo+N..................\n"
            << "............................o-``````````.........---:/os...hdyyyyhdhyoooosoh.hssh...................\n"
            << "..........................y-.`````..`.........----.--:/y.hdyoy.....hyssshhdd.yy.....................\n"
            << ".........................y..`..`.-...-::-----:----::::/+ssoo++hNN.dhyhhyhddhyd......................\n"
            << "........................y...-...-:---/++////+oo+/:://osyhyssssoydhh.N.hdohshN.......................\n"
            << "......................No...-:-.:/:::/oo+o+osyyo+/+osyyhdhhhdhysh.NNN.NN.yhN.........................\n"
            << ".....................N/....---://:/+oo++++oyysssyysyyhhhh..hhd..NN.NN.dhN...........................\n"
            << ".....................+...-:-.-::::/ooo+++osyysooooyhhd...dd.N.N..NNN.h..............................\n"
            << "....................d----:-..::::/+os++oossyso+osyyd....dN...N..dNNh................................\n"
            << "....................s//.---::::+//+so++++osssoooshd.NNNN.....Ndyh.h.................................\n"
            << "....................yo----::+////+oo+++/+oososyd.NNNN.........dydd..................................\n"
            << "....................N+:::::/::::/+os+//++ososh.N.............NN.....................................\n"
            << ".....................+++:::/---:/+++/+++osyyd..................N.................N..hdNN............\n"
            << ".....................+o+////::::/+/--:+oyhdyss+/oyh.N.......................dyso++/++++y............\n"
            << ".....................oso++o+///+++/:::/osoooss+//+////+oyyhhhhhhhhhhhhhhysssssssssssyss/d...........\n"
            << ".....................hooossoo+ooso+///++++///++osss+///+ossso++++ossyyhhhhhhhhhhhhhhhhy+............\n"
            << ".....................Nsossoooossssoooosssso++ooyhhhyyssyyyyyyyyyhhhddd..dddddddddhhdysyd............\n"
            << ".......................oo+++++oosssssyyyhhhyyyyhhhhd.ddddddddddddddd....ddhhyysssoosh...............\n"
            << "........................s+++++++++++oooosssssssyyysyhhdhhhhhhyyyyyyysso++oosyhdd.N..................\n"
            << "........................Nho+++++++++++++++oooooooooooooooooooooooooooooydN..........................\n"
            << "..........................Nds++/+++++++++++++++//////oyyyyyhhdddddhd.N..............................\n"
            << ".............................Ndyso+++///+/++++osyhdN................................................\n"
            << "..................................NN..ddddd.N.......................................................\n"
            << "....................................................................................................\n"
            << "....................................................................................................\n"
            << "....................................................................................................\n"
            << "MORAY EEL --- MORAY EEL --- MORAY EEL --- MORAY EEL --- MORAY EEL --- MORAY EEL --- MORAY EEL --- MO\n";
    }
}
