#include <iostream>
#include "reservoir.h"

int main()
{
    std::cout << "East basin storage: " << get_east_storage("05/20/2018") << " billion gallons\n";
    std::cout << "minimum storage in East basin: " << get_min_east() << " billion gallons\n";
    std::cout << "MAXimum storage in East basin: " << get_max_east() << " billion gallons\n";
    for (int i = 13; i < 18; i++)
    {
        std::string date = "09/" + std::to_string(i) + "/2018";
        std::cout << date << ' ' << compare_basins(date) << "\n";
    }   
    return 0;
}
