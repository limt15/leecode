#include <iostream>
using namespace std;

int reverse(int x) {
	//������� 
	const int max = 0x7fffffff;  //int���ֵ  
    const int min = 0x80000000;  //int��Сֵ  
	
		int sum = x;
	if(sum < 0) {
		sum = -1 * sum;
	}
	long ans = sum % 10;
	while((sum = sum / 10)!= 0) {
		ans = ans * 10 + sum % 10;
	}
	
	if(ans > max || ans < min) return 0; 
	if(x < 0) {
		ans = -1 * ans;
	}
	return (int)ans;
    
 }


int main() {
	int src = 169;
	int des = reverse(src);
	cout << des << endl;
	return 0;
}

