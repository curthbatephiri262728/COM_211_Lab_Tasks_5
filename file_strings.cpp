#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>

// Counts vowels (a, e, i, o, u in either case).
int countVowels(const std::string& text) {
    int count = 0;
    for (char c : text) {
        char lower = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            count++;
        }
    }
    return count;
}

// Counts words: a word is a run of non-space characters.
int countWords(const std::string& text) {
    std::istringstream stream(text);
    std::string word;
    int count = 0;
    while (stream >> word) {      // >> skips any spaces between words
        count++;
    }
    return count;
}

// Returns the text with all characters in reverse order.
std::string Reverse(const std::string& text) {
    std::string reversed;
    for (int i = static_cast<int>(text.size()) - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

// Returns the text with the second letter of every word capitalised.
std::string capitaliseSecondLetters(const std::string& text) {
    std::string result = text;
    int positionInWord = 0;       // 0 = first letter of the current word, 1 = second, ...

    for (std::size_t i = 0; i < result.size(); i++) {
        if (std::isspace(static_cast<unsigned char>(result[i]))) {
            positionInWord = 0;   // a space ends the word
        } else {
            if (positionInWord == 1) {
                result[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(result[i])));
            }
            positionInWord++;
        }
    }
    return result;
}

int main() {
    std::ifstream file("statement.txt");
    if (!file.is_open()) {
        std::cout << "Error: could not open statement.txt. "
                  << "Make sure it is in the same folder as the program." << std::endl;
        return 1;
    }

    // Read the whole file (including any line breaks) into fileData.
    std::string fileData;
    std::getline(file, fileData, '\0');
    file.close();

    // Remove a trailing newline, if the editor added one.
    while (!fileData.empty() && (fileData.back() == '\n' || fileData.back() == '\r')) {
        fileData.pop_back();
    }

    std::cout << "File contents      : " << fileData << std::endl;
    std::cout << "Number of vowels   : " << countVowels(fileData) << std::endl;
    std::cout << "Number of words    : " << countWords(fileData) << std::endl;
    std::cout << "Reversed statement : " << Reverse(fileData) << std::endl;
    std::cout << "Second letters caps: " << capitaliseSecondLetters(fileData) << std::endl;

    return 0;
}
