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
        }else if(gui_using_choice == "n" || gui_using_choice == "N")    {
            numbers();
        }
    }
}
