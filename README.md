# password-
Vigenère Cipher Password Tool
A simple C++ program that encrypts and decrypts passwords using the Vigenère cipher algorithm. Supports uppercase letters and preserves non-alphabetic characters.

Features
Encrypts passwords with a custom key

Decrypts back to original password

Handles non-letter characters

Uses standard C++ libraries only

Demo
text
Enter Password: Hello123
Enter Key: KEY
Encrypted Password: URRXS123
Decrypted Password: HELLO123
Original Password: Hello123
Requirements
C++11 compiler (g++, clang++)

No external dependencies

How to Build & Run
Save code as vigenere.cpp

Compile:

bash
g++ -o vigenere vigenere.cpp
Run:

bash
./vigenere
Usage
text
Enter Password: [your password]
Enter Key: [your key]
Algorithm Notes
Encryption: (P + K) mod 26 (reversed input)

Decryption: (C - K + 26) mod 26 (reversed output)

Key repeats cyclically

Case-insensitive (converts to uppercase)

Limitations
Single-word input only (no spaces)

Basic implementation for learning





