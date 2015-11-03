#include <iostream>
using namespace std;

bool isPalindrome(int x) {
	//负数不能为回文 
	if(x < 0) {
		return false;
	}
	if(x == 0) {
		return true;
	}
     int sum = 0;
	 int temp = x;
	 while(x) {
	 	sum = sum * 10 + x % 10;
	 	x /= 10;
	 }   
	 if (temp == sum) 
	 	return true;
	else
		return false;
}

int main() {
	cout << isPalindrome(-2147447412) << endl;//2147483648
	return 0;
}

