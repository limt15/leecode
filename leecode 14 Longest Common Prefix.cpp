#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string ref = "";
    int length = strs.size();
    if(length == 0) {
    	return ref;
	}
	for (int i = 0; i < strs[0].size(); i++) {
		for (int j = 1; j < length; j++) {
			if(strs[j].size() == i || strs[j][i] != strs[0][i]) {
				return ref;
			}
			
				
		}
		ref.push_back(strs[0][i]);
	}  
	return ref;  
}

int main() {

	return 0;
}

