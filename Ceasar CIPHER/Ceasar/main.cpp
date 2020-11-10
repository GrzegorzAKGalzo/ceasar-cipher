#include <iostream>
#include <string>

using namespace std;

int main() {
	string baseLetter;
	string ciphered;
	int move = 1;
	cout << "How much should we move?" << endl;
	cin >> move;
	cin.get();
	cout << "What you what do hide? " << endl;
	getline(cin, baseLetter);
	ciphered = baseLetter;
	for (int i = 0; i < baseLetter.length(); i++) {
		if (isspace(baseLetter[i])) {
			ciphered[i] = baseLetter[i];
		}
		else if ((baseLetter[i] + 1 > 65 && baseLetter[i] + 1 < 92) && baseLetter[i] + move > 90) {
			ciphered[i] = baseLetter[i] - 26 + move;
		}
		else if (baseLetter[i] + move > 122) {
			ciphered[i] = baseLetter[i] - 26 + move;
		}
		else {
			ciphered[i] = static_cast<char>(baseLetter[i] + move);
		}
		
	}


	cout << "Shh... Here you go" << endl;
	cout << ciphered;

	return 0;
}