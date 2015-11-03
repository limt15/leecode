#include <iostream>
#include <string> 
using namespace std;

//从高位开始，慢慢减下去 
string intToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbol[] ={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string res = "";
    for (int i = 0; num != 0; i++) {
    	while(num >= values[i]) {
    		num -= values[i];
    		res += symbol[i];
		}
	}
    return res;
}

int main() {
	cout << intToRoman(99) << endl;
	return 0;
}

