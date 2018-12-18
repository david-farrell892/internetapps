#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream file;
	ofstream out;
	file.open("rockyou.txt");
	out.open("output.txt");
	string word;

	while (file >> word) {

		if (word.length() == 8) {
			out << word << endl;
		}

	}

	out.close();
	file.close();
}