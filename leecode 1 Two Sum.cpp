#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	
	
		/*o(N^2),超时 
       int index1 = -1;
       int index2 = -1;
       for (int i = 0; i < nums.size() - 1; i++) {
       	for (int j = i + 1; j < nums.size(); j++) {
       			if((nums[i] + nums[j]) == target) {
       				index1 = i;
       				index2 = j;
				}
		   }
	   }
	   vector<int> temp;
	   temp.push_back(index1);
	   temp.push_back(index2);
	   return temp;
	   */ 
	   
	   /*O（nlogn）可以通过，但是不是最优 
	   vector<int> temp = nums;
	   std::sort(temp.begin(), temp.end());
	   int left = 0;
	   int right = temp.size() - 1;
	   
	   vector<int> index;
	   
	   while(left < right) {
	   	int ans = temp[left] + temp[right];
	   	if(ans == target) {
	   		for(int i = 0; i < nums.size(); i++) {
	   			if(temp[left] == nums[i]) {
	   				index.push_back(i + 1);
	   				//必须加上，否则出现0+0 = 0 时出错 
	   				continue;
				   }
				if(temp[right] == nums[i]) {
					index.push_back(i + 1);
				
				}	
				if(index.size() == 2) {
					break;
					
				}			  
			}
			break;
			}
		else if(ans < target) {
			left++;	
		}
		else {
			right--;		
		}
	   }	   
	   return index;
	   */
	   
	   //使用map O(n),map的count函数用于查找某个key是否存在，存在返回1，否则返回0；根据某个key取得其在map中的value值的方法是直接用map[key]即可。
	   vector<int> index;
	   map<int, int> hmap;
	   for(int i = 0; i < nums.size(); i++) {
	   	if(!hmap.count(nums[i])) {
	   		hmap.insert(pair<int,int>(nums[i], i));
		   }
		if(hmap.count(target - nums[i])) {
			int n = hmap[target - nums[i]];
			//为什么要有这个判断 
			if(n < i) {
			index.push_back(n + 1);
			index.push_back(i + 1);
			
			 return index;
			}
		}
	   } 
	   
	   return index;
    
}

int main() {
	vector<int> nums;// = new vector<int>{2, 7, 11, 15};
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	for(vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++) {
		cout << (*iter) << endl;
	}
	cout << "Done!"<< endl;
	int target = 9;
	vector<int> s = twoSum(nums, target);
	for(vector<int>::iterator iter = s.begin(); iter != s.end(); iter++) {
		cout << (*iter) << endl;
	}
	cout << "Done!"<< endl;
	return 0;
} 

