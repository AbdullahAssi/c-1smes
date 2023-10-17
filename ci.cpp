#include <iostream>
#include <string>
using namespace std;

string CCEncryp(string plaintext) {
    string cyphertext = "";
    int shift = plaintext[plaintext.length() - 1] - '0'; 
    for (int i = 0; i < plaintext.length() - 1; i++) {
        char c = plaintext[i];
        if (isalpha(c)) {
            c = toupper(c);
            c = ((c - 'A' + shift) % 26) + 'A';
        }
        cyphertext += c;
    }
    return cyphertext;
}

int main() {
    string plaintext;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    string cyphertext = CCEncryp(plaintext);
    cout << "Cyphertext: " << cyphertext << endl;
    return 0;
}

