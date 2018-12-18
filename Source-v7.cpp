#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	ifstream file;
	ofstream out;
	string filename;
	cout << "Please name the file: ";
	cin >> filename;
	cout << endl << "File name is: " << filename << endl;
	int minLen;
	int maxLen;
	cout << "Please enter MIN length: ";
	cin >> minLen;
	cout << "Please enter MAX length: ";
	cin >> maxLen;

	cout << "Working" << endl;
	file.open(filename);
	out.open(filename+".out");
	string word;
	int counter = 0;
	int total = 0;
	maxLen = maxLen + 1;
	minLen = minLen - 1;
	int numWords = 0;
	char invalidChars[] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '~', '`',
		';', ':', '+', '=', '-', '_', '*', '/', '.', '<', '>', '?', ',', '[', ']', '{', '}', '£', '€', '|', '¬', '¦'};

	
	char numChars[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	
	cout << "Calculating total word count... " << endl;
	while (file >> word)
	{
		numWords++;
	}
	file.close();
	file.open(filename);
	cout << "The total word count is " << numWords << endl;
	cout << "Now scanning..." << endl;
	
	while (file >> word)
	{
	
			if (word.length() > minLen && word.length() < maxLen) {
				
				size_t pos = word.find_first_of(invalidChars, 0, sizeof(invalidChars));
				if (pos != string::npos) {
					
				}
				else {
						
							out << word << endl;
						
					
					}
				
			}
			
		
			counter++;

			if (counter == 10000000) {
				total = total + counter;
				cout << "Finished scanning: " << total << "/" << numWords << " ...please wait" << endl;
				counter = 0;
			}
		

		
	}
	out.close();
	file.close();
	cout << "Done" << endl;
	return 0;
}