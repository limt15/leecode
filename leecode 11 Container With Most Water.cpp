#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
	int left = 0;
	int right = height.size() - 1;        
	int res = 0;
	
	for (; left < right;) {
		res = max(res, (right - left)*min(height[right],height[left]));
		if(height[left] < height[right]) {
			left++;
		}
		else {
			right--;
		}
	}
	
	return res;

}

int main() {

	return 0;
}

