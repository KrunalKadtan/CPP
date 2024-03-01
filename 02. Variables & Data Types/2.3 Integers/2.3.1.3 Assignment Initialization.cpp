#include <iostream>

int main()
{
    int bike_count = 2;

    int truck_count = 7;

    int vehicle_count = bike_count + truck_count;

    int narrowing_conversion_assignment = 2.9;

    std::cout << "bike_count = " << bike_count << std::endl;
    std::cout << "truck_count = " << truck_count << std::endl;
    std::cout << "vehicle_count = " << vehicle_count << std::endl;
    std::cout << "narrowing_conversion = " << narrowing_conversion_assignment << std::endl;
}