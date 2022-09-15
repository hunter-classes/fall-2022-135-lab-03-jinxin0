#include <iostream>
#include "reservoir.h"

int main()
{
    std::cout << "East basin storage: " << get_east_storage("05/20/2018") << " billion gallons\n";
    return 0;
}
