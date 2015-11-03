#include <iostream>
#include <iostream>
using namespace std;

string longestPalindrome(string s) { 
	if(s.length() < 2) {
		return s;
	}
	string ref = "";
	
	bool isPalin[s.length()][s.length()];
	for(int i = 0; i < s.length(); i++) {
		for(int j = 0; j < s.length(); j++) {
			isPalin[i][j] = false;
		}
	}
	for (int i = s.length() - 1; i >= 0; i--) {
		for (int j = i; j < s.length(); j++) {
			if((s[i] == s[j]) && (isPalin[i+1][j-1] || ((j - i) <= 2))) {
				isPalin[i][j] = true;
					int len = j - i + 1;
			if(ref.length() < len) {
				ref = s.substr(i, len);
			}
			}
		
		}
	}
	
	return ref;

}

int main() {
		string s = "qwedfggfdjh";
	 cout << longestPalindrome(s) << endl;

	return 0;
}

