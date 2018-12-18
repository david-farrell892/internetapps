#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream file;
	ofstream out;
	file.open("pbkdftxt");
	out.open("pbkdf-out.txt");
	string word;

	while (file >> word) {
		
		word = word.substr(21, word.size());
		word = "sha256:29000:" + word;

		for (int i = 21; i < word.size(); i++) {
			if (word[i] == '$') {
				word[i] == ':';
			}
		}

		out << word << endl;

	}

	out.close();
	file.close();

	return 0;
}