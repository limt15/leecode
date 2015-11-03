#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &nums) {
	for(vector<int>::iterator citer=nums.begin();citer!=nums.end();citer++){
		cout << *citer << " ";
	}
	cout << endl;
}

int removeElement(vector<int>& nums, int val) {
	if(nums.empty()) {
		return 0;
	}
    int length = nums.size();
    int k = 0;
    for(int i = 0; i < length; i++) {
    	if(nums[i] != val) {
    		nums[k] = nums[i];
    		k++;
		}
	}
	return  k;
}

int main() {
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	
	print(nums);
	cout << removeElement(nums,1) << endl;
	print(nums);
	return 0;
}

