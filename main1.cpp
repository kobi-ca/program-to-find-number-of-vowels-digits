#include <iostream>
#include <tuple>

bool isVowel(const char c) {
    switch (c) {
        default:
            return false; // tidy
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return true;
    }
}

void Calculates(const std::string& line) {
    int vowel{}, digit{}, w_spa{};
    for (const auto ch : line) {
        if (std::isdigit(ch)) {
            ++digit;
        } else if (std::isspace(ch)) {
            ++w_spa;
        } else if (isVowel(ch)) {
            ++vowel;
        }
    }

    std::cout << "Vowel = " << vowel << '\n';
    std::cout << "Digit = " << digit << '\n';
    std::cout << "White Space = " << w_spa << '\n';
}


int main() {
    std::string line;
    std::cout << "Enter string: ";
    std::ignore = std::getline(std::cin, line);
    Calculates(line);
    return 0;
}
