#include <iostream>
#include "reservoir.h"

int main()
{
    std::cout << "East basin storage: " << get_east_storage("05/20/2018") << " billion gallons\n";
    std::cout << "minimum storage in East basin: " << get_min_east() << " billion gallons\n";
    std::cout << "MAXimum storage in East basin: " << get_max_east() << " billion gallons\n";
    return 0;
}
