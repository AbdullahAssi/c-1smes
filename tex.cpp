#include <iostream>
#include <string>

std::string CCEncrypt(std::string plain_text) {
    int shift = plain_text[plain_text.length() - 1] % 26;
    std::string cypher_text = "";
    for (int i = 0; i < plain_text.length() - 1; i++) {
        if (plain_text[i] >= 'a' && plain_text[i] <= 'z') {
            cypher_text += char((plain_text[i] + shift - 'a') % 26 + 'a');
        } else if (plain_text[i] >= 'A' && plain_text[i] <= 'Z') {
            cypher_text += char((plain_text[i] + shift - 'A') % 26 + 'A');
        } else {
            cypher_text += plain_text[i];
        }
    }
    cypher_text += plain_text[plain_text.length() - 1];
    return cypher_text;
}

std::string CCDecrypt(std::string cypher_text) {
    int shift = cypher_text[cypher_text.length() - 1] % 26;
    std::string plain_text = "";
    for (int i = 0; i < cypher_text.length() - 1; i++) {
        if (cypher_text[i] >= 'a' && cypher_text[i] <= 'z') {
            plain_text += char((cypher_text[i] - shift - 'a' + 26) % 26 + 'a');
        } else if (cypher_text[i] >= 'A' && cypher_text[i] <= 'Z') {
            plain_text += char((cypher_text[i] - shift - 'A' + 26) % 26 + 'A');
        } else {
            plain_text += cypher_text[i];
        }
    }
    return plain_text;
}

