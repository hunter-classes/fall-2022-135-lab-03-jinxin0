#include <climits>
#include <fstream>
#include <string>
#include "reservoir.h"

double get_east_storage(std::string d)
{
    std::ifstream in_file("Current_Reservoir_Levels.tsv");
    std::string date;
    double eastSt = -1;
    in_file.ignore(INT_MAX, '\n'); 
    while (in_file >> date >> eastSt) 
    { 
        if (date == d)
            break;
        in_file.ignore(INT_MAX, '\n'); 
    }
    in_file.close();
    return eastSt;
}
