#include <iostream>
#include <string>
using namespace std;

string findStrFromThisPoint(string s, int left, int right) {
	while(left >= 0 && right < s.length() && (s[left] == s[right]) ){
		left--;
		right++;
	}
	int length = right - left - 1;
	return s.substr(left + 1, length);
}

string longestPalindrome(string s) {
	string ref = "";
	for (int i = 0; i < s.length() * 2 - 1; i++) {
		int left = i / 2;
		int right = i / 2;
		if (i % 2 == 1) {
			right ++;
		}
		string str = findStrFromThisPoint(s, left, right);
		if(str.length() > ref.length()) {
			ref = str;
		}
	}    
	return ref;   
}

int main() {
	string s = "qwedfggfdjh";
	 cout << longestPalindrome(s) << endl;
	return 0;
}

