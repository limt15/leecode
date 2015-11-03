#include <iostream>
#include <string>
using namespace std;

string convert(string s, int numRows) {
        string str;
        //��һ����Ͽ��Լ���һЩʱ�� 
        if (s.length() < 2 || s.length() < numRows || numRows <= 1) return s;
        for(int i = 0; i < numRows; i++) {
        	int j = i;
        	bool flag = true;
        	while (j < s.length()) {
        		str.push_back(s[j]);
        		//0/rows - 1: ���2 * (numRows - 1);
        		if (i == 0 || (i == (numRows - 1))) {
        			j += 2 * (numRows - 1);
				}
				//else: ���2 * (i)��2��rows - i - 1��;
				else {
					if(flag) {
						j += 2 * (numRows - i - 1);
						flag = false;
					}
					else {
						j += 2 * i;
						flag = true;
					}
				}
			}
		}
		return str;
}

int main() {
	string s = "PAYPALISHIRING";
	int numRows = 3;
	cout << convert(s, numRows) << endl;
	return 0;
}
