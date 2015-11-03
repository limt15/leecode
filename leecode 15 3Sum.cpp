#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

//non-descending order so we can order the vector and we should ignore some duplicated value in the same level cycle
vector<vector<int> > threeSum(vector<int>& nums) {
		vector<vector<int> > res;
		sort(nums.begin(), nums.end());
		int length = nums.size();
		if(length < 3)
			return res;
        for (int i = 0; i < length - 2; i++) {
        	if(i > 0 && nums[i] == nums[i - 1])
				continue;
        	int target = 0 - nums[i];
        	for (int j = i + 1; j < length - 1; j++) {
        		int tar = target - nums[j];
        		for(int k = j + 1; k < length; k++) {
        			if(nums[k] == tar) {
        				vector<int> temp;
						temp.push_back(nums[i]);
						temp.push_back(nums[j]);
						temp.push_back(nums[k]);
        				res.push_back(temp);
        				while( k + 1 < length && nums[k + 1] == nums[k]) {
        					k++;
						}
						while( j + 1 < length - 1 && nums[j + 1] == nums[j]) {
        					j++;
						}
					}
				}
			}
		}
		
//		for (int i = 0; i < res.size(); i++) {
//			cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << endl;
//		}
		
		return res;
		
}

int main() {
	vector<int> nums;
	nums.push_back(-1);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(-1);
	nums.push_back(-4);
	
	threeSum(nums);
	
	return 0;
}

