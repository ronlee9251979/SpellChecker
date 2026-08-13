/* ---------------------------------------------------------------------------
** Authors: R. Lee, A. Lariviere, B. McKenzie
** Class: CSC 242
** Assignment: Week 4 Assignment 5 Problem 1
** File: SpellChecker.cpp
** Description: This program checks the spelling of words in a given text against a word list of correctly spelled words.
** Date: 08/16/2026
** -------------------------------------------------------------------------*/

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    // R. Lee: User input for message and keyword
    string wordListFileName;
    string textFileName;

    ifstream wordListFile;
    ifstream textFile;

    cout << "Spell Checker Program" << endl;
    cout << "---------------------" << endl;

    // Ask the user for the correctly spelled word-list file.
    cout << "Enter the name of the word-list file: ";
    std::getline(cin, wordListFileName);

    wordListFile.open(wordListFileName);

    // Verify that the word-list file opened successfully.
    if (!wordListFile)
    {
        cerr << "Error: Unable to open " << wordListFileName << "." << endl;
        return 1;
    }

    // Ask the user for the text file to check.
    cout << "Enter the name of the text file to check: ";
    getline(cin, textFileName);

    textFile.open(textFileName);

    // Verify that the text file opened successfully.
    if (!textFile)
    {
        cerr << "Error: Unable to open " << textFileName << "." << endl;
        return 1;
    }

    cout << "\nBoth files opened successfully." << endl;
    cout << "Checking the spelling in " << textFileName << "..." << endl;

    // The word-list loading and spell-checking code goes here.

    wordListFile.close();
    textFile.close();

    //A. Lariviere: Keyword validation and Cipher implementation
    

    //B. McKenzie: Encryption and Decryption logic

    return 0;
}