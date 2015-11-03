#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void print1(stack<char> s) {
	//cout << "size:" << s.size() << endl;
}

bool isValid(string s) {
	
    stack<char> st;
    int length = s.size();
    //cout << "size:" << length << endl;
    if(length == 0)
    	return true;
    //cout << "size:" << endl;
    st.push(s[0]);
    for (int i = 1; i < length; i++) {
    	char temp = s[i];
    	switch(temp) {
    		case ')':
    			if (!st.empty() && st.top() == '(') {
    				st.pop();
				}
				else {
					st.push(temp);
				}
				break;
			case ']':
    			if (!st.empty() && st.top() == '[') {
    				st.pop();
				}
				else {
					st.push(temp);
				}
				break;
			case '}':
    			if (!st.empty() && st.top() == '{') {
    				st.pop();
				}
				else {
					st.push(temp);
				}
				break;
			default:
				st.push(temp);
		}
	}
	//print1(st);
	if(st.size() == 0) {
		return true;
	}
	else 
		return false;
}

int main() {
	cout << isValid("[])"); 
	return 0;
}

