DESCRIPTION
This project implements RSA encryption and decryption for integers less than n using the Fast Modular Exponentiation Algorithm (FMEA).
It allows the user to perform modular exponentiation efficiently for both encryption (x^e mod n) and decryption (x^d mod n).
USAGE
make
./rsa

Follow on-screen prompts:
===== Project 2D: RSA Encrypt/Decrypt using FMEA =====

Enter modulus n: 3233
Choose mode (1 = Encrypt with e, 2 = Decrypt with d): 1
Enter exponent (e): 17
Enter number to encrypt (< n): 65
Encrypted value: 2790

FILES
Makefile          - build and run commands
rsa.cpp           - main program (encrypt/decrypt)
fmea.hpp          - Fast Modular Exponentiation implementation
primes.txt        - optional list of primes

AUTHOR
Rashil Shibakoti
Course: CSC 487 – Network Security
South Dakota State University

Would you like me to make these ready-to-upload as actual README.md files (one per project) so you can just drag them into your GitHub folders?
I can format them with Markdown headers, code blocks, and emojis for aesthetics.
