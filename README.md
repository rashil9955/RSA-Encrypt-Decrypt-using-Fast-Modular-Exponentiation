
---

### 🔑 **Project 2D – RSA Encrypt/Decrypt using FMEA**
```markdown
# Project 2D – RSA Encrypt/Decrypt using FMEA

## Description
This project implements **RSA encryption and decryption** for integers less than *n* using the **Fast Modular Exponentiation Algorithm (FMEA)**.  
It allows the user to perform modular exponentiation efficiently for both encryption (*x^e mod n*) and decryption (*x^d mod n*).

## Usage
```bash
make
./rsa


Follow on-screen prompts:

===== Project 2D: RSA Encrypt/Decrypt using FMEA =====

Enter modulus n: 3233
Choose mode (1 = Encrypt with e, 2 = Decrypt with d): 1
Enter exponent (e): 17
Enter number to encrypt (< n): 65
Encrypted value: 2790

Files
Makefile          - build and run commands
rsa.cpp           - main program (encrypt/decrypt)
fmea.hpp          - Fast Modular Exponentiation implementation
primes.txt        - optional list of primes


Author

Rashil Shibakoti
Course: CSC 487 – Network Security
South Dakota State University

