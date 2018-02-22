

#ifndef APPROVALTESTS_CPP_STRINGUTILS_H
#define APPROVALTESTS_CPP_STRINGUTILS_H

#include <string>

class StringUtils
{
public:
    static std::string replaceAll(std::string inText, const std::string& find, const std::string& replaceWith) {
        size_t start_pos = 0;
        while ((start_pos = inText.find(find, start_pos)) != std::string::npos) {
            inText.replace(start_pos, find.length(), replaceWith);
            start_pos += replaceWith.length(); // Handles case where 'to' is a substring of 'from'
        }
        return inText;
    }

    static bool contains(std::string inText, const std::string& find)
    {
        return inText.find(find, 0) != std::string::npos;
    }
};
#endif //APPROVALTESTS_CPP_STRINGUTILS_H
