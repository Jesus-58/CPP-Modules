#include "harl.hpp"

int main()
{
    Harl harl;

    std::cout << "DEBUG test:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nINFO test:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nWARNING test:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nERROR test:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nInvalid test:" << std::endl;
    harl.complain("RANDOM");

    return 0;
}