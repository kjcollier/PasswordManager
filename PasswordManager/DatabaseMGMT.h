#pragma once
#include <stdio.h>
#include "Encryption.h"

using namespace std;

class DatabaseMGMT {
private:
	FILE db;
	string url;
	string encPW;
	string pw;

public:
	string getPW(string url) {};
	string createPW(string url) {};
	string changePW(string url) {};
	void deleteEntry(string url) {};
};