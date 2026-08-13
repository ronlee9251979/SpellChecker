/* ---------------------------------------------------------------------------
** Authors: R. Lee, A. Lariviere, B. McKenzie
** Class: CSC 242
** Assignment: Week 4 Assignment 5 Problem 1
** File: SpellChecker.cpp
** Description: This program checks the spelling of words in a given text against a word list of correctly spelled words.
** Date: 08/16/2026
** -------------------------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

auto cleanWord = [](const string& word) {
    string cleaned;
    for (char c : word) {
        if (isalpha(c)) {
            cleaned += tolower(c);
        }
    }
    return cleaned;
};

vector<string> loadDictionary(const string& filename) {
    vector<string> dictionary;
    ifstream file(filename);
    string word;
    while (file >> word) {
        dictionary.push_back(cleanWord(word));
    }
    return dictionary;
}

int main()
{
    
    // R. Lee: User input for message and keyword

    //A. Lariviere: Dictionary Loading & Text Cleaning
    //and conversion to lowercase

    vector<string> dictionary = loadDictionary("dictionary.txt");
    vector<string> cleanedTextWords;
    
    ifstream textFile("text.txt");
    string word;

    while (textFile >> word) {
        cleanedTextWords.push_back(cleanWord(word));
    }

    cout << "Loaded dictionary with " << dictionary.size() << " words." << endl;
    cout << "Processed text with " << cleanedTextWords.size() << " words." << endl;

    //B. McKenzie: Spelling Comparison Algorithm

    //vector<string> misspelledWords;
    //for (const string& textWord : cleanedTextWords) {
    //    if (find(dictionary.begin(), dictionary.end(), textWord) == dictionary.end()) {
    //        misspelledWords.push_back(textWord);
    //    }
    //}

    //cout << "Found " << misspelledWords.size() << " misspelled words." << endl;
    //for (const string& word : misspelledWords) {
    //    cout << word << endl;
    //}

    return 0;
}