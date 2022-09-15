#include <climits>
#include <cfloat>
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

double get_min_east()
{
    std::ifstream in_file("Current_Reservoir_Levels.tsv");
    std::string date;
    double eastSt;
    double min_storage = DBL_MAX;
    in_file.ignore(INT_MAX, '\n'); 
    while (in_file >> date >> eastSt) 
    { 
        min_storage = std::min(min_storage, eastSt);
        in_file.ignore(INT_MAX, '\n'); 
    }
    in_file.close();
    return min_storage;
}

double get_max_east()
{
    std::ifstream in_file("Current_Reservoir_Levels.tsv");
    std::string date;
    double eastSt;
    double max_storage = -1;
    in_file.ignore(INT_MAX, '\n'); 
    while (in_file >> date >> eastSt) 
    { 
        max_storage = std::max(max_storage, eastSt);
        in_file.ignore(INT_MAX, '\n'); 
    }
    in_file.close();
    return max_storage;
}
