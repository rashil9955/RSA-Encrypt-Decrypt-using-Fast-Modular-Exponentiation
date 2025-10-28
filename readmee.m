Project 2D – RSA Encrypt/Decrypt using FMEA
-------------------------------------------

This program encrypts or decrypts a number < n using the Fast Modular Exponentiation Algorithm (FMEA) developed for Project 2A.

It demonstrates the RSA operation of raising a number less than n to the power of e (public exponent) or d (private exponent), modulo n.

-------------------------------------------
FILES:
  rsa.cpp    – main program
  fmea.hpp   – Fast Modular Exponentiation function
  Makefile   – build/run commands

-------------------------------------------
USAGE:
  make
  ./rsa

  Follow on-screen prompts:
    • Enter modulus n
    • Choose mode:
        (1) Encrypt with e
        (2) Decrypt with d
    • Enter the exponent (e or d)
    • Enter the number (< n)

-------------------------------------------
AUTHOR: Rashil Shibakoti  
COURSE: CSC 487 – Network Security
-------------------------------------------
