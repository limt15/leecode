#include <iostream>
#include <vector> 
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i,j;
		i = j = 0;
		int m = nums1.size();
		int n = nums2.size();
		
		int mid = (m + n)  / 2;
		 if(mid < 1) {
		 	if(m == 0 && n == 0) {
		 		return 0;
			 }
			 else if(m == 1) 
			 	return nums1[0];
			else
				return nums2[0];
		 }
		 int pre = 0, last = 0;
		 while ((i + j) <= mid) {
		 	pre = last;
		 	if(i >= m) {
		 		last = nums2[j];
		 		j++;
			 }
			 else if(j >= n) {
			 	last = nums1[i];
			 	i++;
			 }
			 else if(nums1[i] < nums2[j]) {
			 	last = nums1[i];
			 	i++;
			 }
			 else {
			 	last = nums2[j];
			 	j++;
			 }
			 
		 }
		 if((m + n) % 2 == 0) {
		 	return (pre + last) / 2.0;
		 }
		 return last;
}


int main() {

	return 0;
}

