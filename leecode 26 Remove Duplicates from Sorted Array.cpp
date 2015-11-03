#include <iostream>
#include <vector>
using namespace std;

//the array is sorted!
int removeDuplicates(vector<int>& nums) {
		
        int length = nums.size();
        if(length == 0) {
        	return 0;
		}
        if(length == 1) {
        	return 1;
		}
		int k = 0;
		bool isDup = false; 
		for(int i = 0; i < length; i++) {
			if(k > 0 && nums[k - 1] == nums[i]) {		
					isDup = true;
			
			}
			if(isDup) {
				isDup = false;
			}
			else {
				nums[k] = nums[i];
				k++;
				
			}
		} 
		return k;
}


void print(vector<int> &nums) {
	for(vector<int>::iterator citer=nums.begin();citer!=nums.end();citer++){
		cout << *citer << " ";
	}
	cout << endl;
}

int main() {
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	
	print(nums);
	cout << removeDuplicates(nums) << endl;
	print(nums);
	
	return 0;
}

