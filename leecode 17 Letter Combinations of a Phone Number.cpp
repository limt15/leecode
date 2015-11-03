#include <iostream>
#include <vector>
using namespace std;

void print(vector<string> res) {
	for(int i = 0; i < res.size(); i ++) {
		cout << res[i] << " " ;
	}
	cout << endl;
}


//letters means can ignore 0 and 1;
vector<string> letterCombinations(string digits) {
     string letters[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> res;
    int len = digits.size();
    if(len == 0) return res;
    res.push_back("");
    
    
    for(int i = 0; i < len; i++) {
    	int index = digits[i] - '2';
    	string temp = letters[index];
    	//cout << "temp:" << temp << " " << res.size() << endl;
    	int rLen = res.size();
    	for (int k = 0; k < rLen; k++) {
    		int tLen = temp.size();
    	//	cout << "tLen:" << tLen << " " << k << endl;
    		for (int j = 0; j < tLen; j++) {
    			if(j == tLen - 1) res[k] += temp[j];
				else
					res.push_back(res[k] + temp[j]); 
		}
		//cout << "111tLen:" << tLen << " " << k << endl;
    		
		}
    	
	}
	print(res);
	return res;
}

int main() {
letterCombinations("23"); 
	return 0;
}

