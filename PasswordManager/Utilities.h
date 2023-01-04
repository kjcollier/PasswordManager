#pragma once
#include <stdio.h>
#include <iostream>
#include "Encryption.h"
#include "DatabaseMGMT.h"

using namespace std;

class Utilities {
private:
	string encPW;
	string pw;
	string url;
	string pwList;

	string findPW(string url) {};

public:
	string getInput() {};
	void displayPW() {};
	void displayMenu() {};
	string getPW() {};
};