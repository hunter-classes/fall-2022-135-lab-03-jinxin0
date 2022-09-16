#include <climits>
#include <fstream>
#include <iostream>
#include <vector>
#include "reverseorder.h"

void reverse_order(std::string date1, std::string date2)
{

    std::ifstream in_file("Current_Reservoir_Levels.tsv");
    std::vector<std::pair<std::string, double>> elevations;
    std::string date;
    double eastSt, eastEl, westSt, westEl;
    while (in_file >> date) 
    { 
        if (date == date1)
        {
            in_file >> eastSt >> eastEl >> westSt >> westEl;
            elevations.push_back({date, westEl});
            in_file.ignore(INT_MAX, '\n'); 
            while (date != date2)
            {
                in_file >> date >> eastSt >> eastEl >> westSt >> westEl;
                elevations.push_back({date, westEl});
                in_file.ignore(INT_MAX, '\n'); 
            }
            break;
        }
        in_file.ignore(INT_MAX, '\n'); 
    }
    in_file.close();
    
    for (std::size_t i = 0; i < elevations.size(); i++)
        std::cout << elevations[elevations.size() - i - 1].first << ' ' << elevations[i].second << " ft\n";
}
