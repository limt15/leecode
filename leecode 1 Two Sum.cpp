#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	
	
		/*o(N^2),��ʱ 
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
	   
	   /*O��nlogn������ͨ�������ǲ������� 
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
	   				//������ϣ��������0+0 = 0 ʱ���� 
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
	   
	   //ʹ��map O(n),map��count�������ڲ���ĳ��key�Ƿ���ڣ����ڷ���1�����򷵻�0������ĳ��keyȡ������map�е�valueֵ�ķ�����ֱ����map[key]���ɡ�
	   vector<int> index;
	   map<int, int> hmap;
	   for(int i = 0; i < nums.size(); i++) {
	   	if(!hmap.count(nums[i])) {
	   		hmap.insert(pair<int,int>(nums[i], i));
		   }
		if(hmap.count(target - nums[i])) {
			int n = hmap[target - nums[i]];
			//ΪʲôҪ������ж� 
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

