#include <iostream>
#include <string>
using namespace std;

string addBinary(string a, string b) {
    int lena = a.length();
    int lenb = b.length();
    string c = "";
    int carry = 0;
    while (lena != 0 && lenb != 0) {
    	int temp1 = a[lena - 1] - '0';
    	int temp2 = b[lenb - 1] - '0';
    	int sum = temp1 + temp2 + carry;
    	carry = 0;
    	if(sum > 1) {
    		carry = 1;
    		sum = sum - 2;
		}
		if(sum == 1) {
    			c = "1" + c;
		}
		else {
			c = "0" + c;
		}
		lena--;
		lenb--;
	}
	while (lena != 0) {
    	int temp1 = a[lena - 1] - '0';
    	int sum = temp1 + carry;
    	carry = 0;
    	if(sum > 1) {
    		carry = 1;
    		sum = sum - 2;
		}
		if(sum == 1) {
    			c = "1" + c;
		}
		else {
			c = "0" + c;
		}
		lena--;
	}
	while (lenb != 0) {
    	int temp1 = b[lenb - 1] - '0';
    	int sum = temp1 + carry;
    	carry = 0;
    	if(sum > 1) {
    		carry = 1;
    		sum = sum - 2;
		}
		if(sum == 1) {
    			c = "1" + c;
		}
		else {
			c = "0" + c;
		}
		lenb--;
	}
	if(carry > 0) {
		c = "1" + c;
	}
	
	return c;
	
}

int main() {
	cout << addBinary("110", "1011") << endl;
	return 0;
}

