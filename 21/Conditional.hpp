#include <string>
#include <vector>

class Conditional {
    std::string a, b, symbol;

    public:
        Conditional(std::string input);
        Conditional(char a, char inequality, char b);
        bool evaluate();
        static std::vector<std::string> splitStringToVector(std::string input, char split);

};