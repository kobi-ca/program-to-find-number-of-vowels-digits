#include<iostream>

using namespace std;

bool isVowel(char c);
bool isDigit(char c);
void Calculates(char *ch);

int main() {
    char ch[100];
    cout << "Enter string: ";
    cin.getline(ch, 100);
    Calculates(ch);
    return 0;
}

//colculate
void Calculates(char *ch) {
    int vowel, digit, w_spa;
    vowel = digit = w_spa = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        if (isVowel(ch[i]))
            vowel++;
        else if (isDigit(ch[i]))
            digit++;
        else if (ch[i] == ' ')
            w_spa++;
    }
    cout << "Vowel = " << vowel << "\n";
    cout << "Digit = " << digit << "\n";
    cout << "White Space = " << w_spa << "\n";
}

//is vowel
bool isVowel(char c) {
    if (c == 'a' || c == 'A')
        return true;
    else if (c == 'e' || c == 'E')
        return true;
    else if (c == 'i' || c == 'I')
        return true;
    else if (c == 'o' || c == 'O')
        return true;
    else if (c == 'u' || c == 'U')
        return true;
    return false;
}

//is digit
bool isDigit(char c) {
    if (c >= '0' && c <= '9')
        return true;
    return false;
}
