#include "Utilities.h"

using namespace std;

string Utilities::findPW(string url) {

}

string Utilities::getInput() {
	cout << "Enter your URL: ";
	cin >> Utilities::url;
	pw = Utilities::findPW(url);
}