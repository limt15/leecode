#include <iostream>
#include <string>
using namespace std;

int atoi(string str) {
	if(str == "") {
		return 0;
	}
	int i = 0;
	while (str[i] != '\0' && str[i] == ' ') {
		i++;
	}
	
	int max = 0x7fffffff;  
    int min = 0x80000000;  
	int signal = 1;
	
	if(str[i] == '+') {
		i++;
	}
	else if(str[i] == '-') {
		i++;
		signal = -1;
	}
	
	long sum = 0;
	while (str[i] != '\0') {
		if(str[i] >= '0' && str[i] <= '9') {
			sum = sum * 10 + signal * (str[i] - '0');
		}
		else {
			return sum;
		}
		if(sum > max) {
			return max;
		}
		if(sum < min) {
			return min;
		}
		i++;
	}
	
	return (int)sum;
} 

int main() {
	
	cout << atoi("+-2");
	return 0;
}

