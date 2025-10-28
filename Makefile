# Project 2D - RSA Encrypt/Decrypt using FMEA
# Author: Rashil Shibakoti
# Course: CSC 487 - Network Security

CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Default target
all: rsa

# Compile the program
rsa: rsa.cpp fmea.hpp
	$(CXX) $(CXXFLAGS) rsa.cpp -o rsa

# Run the program
run: rsa
	./rsa

# Clean build files
clean:
	rm -f rsa
