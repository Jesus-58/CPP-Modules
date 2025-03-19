#include "replace.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: command line use <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 is empty" << std::endl;
        return 1;
    }

    Replace replacer(filename, s1, s2);
    if (!replacer.processFile())
    {
        std::cerr << "Error with the replacing process" << std::endl;
        return 1;
    }

    return 0;
}