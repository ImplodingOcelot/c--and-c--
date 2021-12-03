#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <cstdlib>

std::string sw1, sw2, sw3, sw4, sw5, sw6, sw7, sw8, sw9, sw10;
int x, totalNumber, e, jim, pain, r, placeholder, runthroughs, totalCount, seed;

int main()
{

    // SETUP BELOW

    // INPUT STUDY TERMS HERE
    sw1 = "Andrews a rat\n";
    sw2 = "Andrew sucks\n";
    sw3 = "Badrew\n";
    sw4 = "Shit\n";
    sw5 = "Andrew's dogwater\n";
    sw6 = "Andrew's bad\n";
    sw7 = "Andrew stinks\n";
    sw8 = "Andrew is trash\n";
    sw9 = "Andrews trash\n";
    sw10 = "trashdrew\n";

    // how many terms above there are
    totalNumber = 10;

    // "randomizer" -- only edit the green (only numbers)
    seed = 69;

    // how many times in goes through - 1
    totalCount = 15;






    // --DONT EDIT PAST-- randomises based on seed above
    pain = (rand() % seed);
    int i = 0;
    for (jim = 0; jim < pain; jim++)
    {
        r = (rand() % totalNumber) + 1;
    }

    // runs through randomization "totalCount" times

    for (runthroughs = 0; runthroughs <= totalCount; runthroughs++)
    {
        switch (r)
        {
        case 1:
            std::cout << sw1;
        break;
        case 2:
            std::cout << sw2;
        break;
        case 3:
            std::cout << sw3;
        break;
        case 4:
            std::cout << sw4;
        break;
        case 5:
            std::cout << sw5;
        break;
        case 6:
            std::cout << sw6;
        break;
        case 7:
            std::cout << sw7;
        break;
        case 8:
            std::cout << sw8;
        break;
        case 9:
            std::cout << sw9;
        break;
        case 10:
            std::cout << sw10;
        break;
        }
        std::cout << "Ready? type anything to continue\n";
        std::cin >> placeholder;
        r = (rand() % totalNumber) + 1;
    }
}