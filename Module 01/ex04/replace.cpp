#include "replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
    : filename(filename), s1(s1), s2(s2) {}

std::string Replace::replaceAll(const std::string &content)
{
    if (s1.empty())
    {
        return content;
    }

    std::string result;
    size_t pos = 0;
    size_t found = content.find(s1);

    while (found != std::string::npos)
    {
        result.append(content, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
        found = content.find(s1, pos);
    }

    result.append(content, pos, content.length() - pos);
    return result;
}

bool Replace::processFile()
{
    std::ifstream inputFile(filename);
    if (!inputFile)
    {
        std::cerr << "Error: can't open file " << filename << std::endl;
        return false;
    }

    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    std::string modifiedContent = replaceAll(content);

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        std::cerr << "Error: can't create outfile" << std::endl;
        return false;
    }

    outputFile << modifiedContent;
    outputFile.close();
    return true;
}