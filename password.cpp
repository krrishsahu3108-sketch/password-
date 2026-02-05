#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>  // Added for toupper/isalpha
using namespace std;

string vigenereEncrypt(string text, string key) {
    string result = "";
    int keyIndex = 0;
    reverse(text.begin(), text.end());  // Reverse input

    for (int i = 0; i < text.length(); i++) {
        char ch = toupper(text[i]);
        if (isalpha(ch)) {
            int p = ch - 'A';
            int k = toupper(key[keyIndex % key.length()]) - 'A';
            int c = (p + k) % 26;
            result += char(c + 'A');
            keyIndex++;
        } else {
            result += text[i];
        }
    }
    return result;
}

string vigenereDecrypt(string text, string key) {
    string result = "";
    int keyIndex = 0;

    for (int i = 0; i < text.length(); i++) {
        char ch = toupper(text[i]);
        if (isalpha(ch)) {
            int c = ch - 'A';
            int k = toupper(key[keyIndex % key.length()]) - 'A';
            int p = (c - k + 26) % 26;
            result += char(p + 'A');
            keyIndex++;
        } else {
            result += text[i];
        }
    }
    reverse(result.begin(), result.end());  // Fixed: reverse AFTER building result
    return result;
}

int main() {
    string password, key;
    cout << "Enter Password: ";
    cin >> password;
    cout << "Enter Key: ";
    cin >> key;

    string encrypted = vigenereEncrypt(password, key);
    string decrypted = vigenereDecrypt(encrypted, key);

    cout << "\nEncrypted Password: " << encrypted << endl;
    cout << "Decrypted Password: " << decrypted << endl;
    cout << "Original Password:  " << password << endl;  // Added for verification

    return 0;
}
