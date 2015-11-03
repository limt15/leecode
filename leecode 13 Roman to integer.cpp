#include <string>
#include <iostream>
using namespace std;

int charToInt(char v) {
	int data = 0;
	switch(v) {
		case 'I':
			data = 1;
			break;
		case 'V':
			data = 5;
			break;
		case 'X':
			data = 10;
			break;
		case 'L':
			data = 50;
			break;
		case 'C':
			data = 100;
			break;
		case 'D':
			data = 500;
			break;
		case 'M':
			data = 1000;
			break;  
	}
	return data;
}

int romanToInt(string s) {
    int res = 0;
    if(s.length() == 0)
    	return 0;
    res += charToInt(s[0]);
    int pre = res;
    for (int i = 1; i < s.length(); i++) {
    	int temp = charToInt(s[i]);
    	if(pre >= temp) {
    		res += temp;
    		pre = temp;
		}
		else {
			res = res - 2 * pre + temp;
			pre = temp;
		}
    		
	}
	
	return res;
}

int main() {

	return 0;
}

