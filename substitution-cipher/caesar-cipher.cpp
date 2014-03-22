#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	while (cin >> text) {
		string encryptedText = "";
		for (int i = 0; i < text.length(); ++i) {
			if (text[i] >= 'A' && text[i] <= 'Z') {
				text[i]+=32;
			}
			int c = text[i]-97;
			int n = 3;
			if (c >= 0 && c<= 26) {
				c += n;
				c = c % 26;
			}
			encryptedText+=c+97;
		}
		cout << encryptedText << endl;
	}
	return 0;
}