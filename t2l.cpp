#include <iostream>
#include <string>
using namespace std;

void count_Words_And_Chars(string sentence) {
    int charc = 0;
    int wordc = 1; // initialize to 1 to account for the first word
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') { // counting non-space characters
            charc++;
        } else if (sentence[i] == ' ') { // counting number of words
            wordc++;
        }
    }
    cout << "Your Sentence: '" << sentence<<"'" << endl;
    cout << "Total number of words in Your Sentence: " << wordc << endl;
    cout << "Total number of characters in Your Sentence: " << charc << endl;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    count_Words_And_Chars(sentence);
    return 0;
}

