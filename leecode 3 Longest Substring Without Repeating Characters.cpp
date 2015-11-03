#include <iostream>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    if(s == "") {
    	return 0;
	}
	int map[256];
	const int notFound = -1;
	
	for (int i = 0; i < 256; i++) {
		map[i] = notFound;
	}
	int len = 0;
	int maxLen = 0;
	int start = 0;
	
	for(int i = 0; i < s.size(); i++) {
		char c = s[i];
		int index = map[c];
		if(index == notFound) {
			len++;
			map[c] = i;
		}
		else {
			if(maxLen < len) {
				maxLen = len;
			}
			for (int j = start; j < index; j++) {
				map[s[j]] = notFound;
			}
			len = i - index;
			start = index + 1;
			map[c] = i;
		
		}
	}
	if(maxLen < len) {
				maxLen = len;
	}
        
    return maxLen;
}

int main() {
	string s = "abcabcbb";
	cout << lengthOfLongestSubstring(s) << endl;
	return 0;
}

