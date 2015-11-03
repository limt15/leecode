#include <iostream>
using namespace std;

int lengthOfLastWord(string s) {
	if(s.length() == 0) {
		return 0;
	}        
	int count = 0;
	int len = s.length();
	for (int i = len - 1; i >= 0; i--) {
		if(s[i] != ' ')
			count++;
		if(s[i] == ' ' && count != 0)
			return count;
	}
	return count;
}

int main() {

	return 0;
}

