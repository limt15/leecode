#include <iostream>
#include  <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
	  if(digits.size() == 0) {
		return digits;
	}
 	int carry = 0;
 	int q = 1;
	 for(int i = digits.size() - 1; i >= 0 ; i--) {
	 	int temp = 0;
	 	if(q == 1) {
	 	    temp = digits[i] + 1 + carry;
	 	    q = 0;
	 	}
	 	else {
	 	    temp = digits[i]+ carry;
	 	}
	 	carry = 0;
	 	if(temp > 9) {
	 		carry = 1;
	 		digits[i] = temp - 10;
		 }
		 else {
		     digits[i] = temp;
		 }
	 }       
	 if(carry == 1) {
	 
	 vector<int>::iterator it = digits.begin();
	 	digits.insert(it,1);
	 	
	 }
	 return digits;
}

int main() {

	return 0;
}

