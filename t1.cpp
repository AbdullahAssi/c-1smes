#include <iostream>
#include <string>
using namespace std;

void countWordsAndChars(string sentence) {
    int charCount = 0;
    int wordCount = 1; // initialize to 1 to account for the first word
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') { // counting non-space characters
            charCount++;
        } else if (sentence[i] == ' ') { // counting number of words
            wordCount++;
        }
    }
    cout << "Sentence: " << sentence << endl;
    cout << "Total number of words: " << wordCount << endl;
    cout << "Total number of characters: " << charCount << endl;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    countWordsAndChars(sentence);
    return 0;
}

