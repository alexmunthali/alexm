#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>

std::string Reverse(std::string str) 
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++) 
    {
        std::swap(str[i], str[n - i - 1]);
    }
    return str;
}

int countVowels(std::string str) 
{
    int count = 0;
    for (char c : str) 
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(std::string str) 
{
    std::stringstream ss(str);
    std::string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

std::string capitalizeSecondLetter(std::string str) {
    bool newWord = true;
    int letterPosInWord = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            newWord = true;
            letterPosInWord = 0;
        } else {
            letterPosInWord++;
            if (letterPosInWord == 2) {
                str[i] = toupper(str[i]);
            }
            newWord = false;
        }
    }
    return str;
}

int main() 
{
    std::string fileData;
    std::ifstream file("data.txt");

    if (!file) 
    {
        std::cout << "Failed to open data.txt" << std::endl;
        return 1;
    }

    std::getline(file, fileData);
    file.close();

    std::cout << "Original statement: " << fileData << std::endl << std::endl;

    int vowels = countVowels(fileData);
    std::cout << "Number of vowels: " << vowels << std::endl;

    int words = countWords(fileData);
    std::cout << "Number of words: " << words << std::endl;

    std::string reversed = Reverse(fileData);
    std::cout << "Reversed statement: " << reversed << std::endl;

    std::string capitalized = capitalizeSecondLetter(fileData);
    std::cout << "Second letter capitalized: " << capitalized << std::endl;

    return 0;
}
