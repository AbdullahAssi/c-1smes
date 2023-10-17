#include<iostream>
using namespace std;
string CCEncrypt(string text, int shift);
string CCDecrypt(string encrypted_text, int shift);
 
int main()
{
    string text;
    int shift;
    cout<<"Enter the text : ";
    getline(cin, text);
    cout<<"Enter shift : ";
	cin>>shift;
    cout << "\nThe CCEncrypt Function :" << CCEncrypt(text, shift);
    cout << "\nThe CCDecrypt Function :" << CCDecrypt(CCEncrypt(text, shift), shift);
}

string CCEncrypt(string text, int shift)
{
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        
        if (isalpha(text[i])) {
 
            if (isupper(text[i]))
                result += char((text[i] + shift - 'A') % 26 + 'A');
            else
                result += char((text[i] + shift - 'a') % 26 + 'a');
        }
        else {
            result += text[i];
        }
    }
    return result;
}
 
string CCDecrypt(string encrypted_text, int shift)
{
    string result = "";
    for (int i = 0; i < encrypted_text.length(); i++) {
        if (isalpha(encrypted_text[i])) {
            
            if (isupper(encrypted_text[i]))
                result += char(((encrypted_text[i] - shift - 'A' + 26) % 26) + 'A');
            else
                result += char(((encrypted_text[i] - shift - 'a' + 26) % 26) + 'a');
        }
        else {
            result += encrypted_text[i];
        }
    }
    return result;
}

