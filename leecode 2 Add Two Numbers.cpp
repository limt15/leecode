#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next; 
	ListNode(int x) : val(x), next(NULL) {}
};

void print(ListNode * x) {
	while(x != NULL) {
		cout << x->val << " ";
		x = x->next;
	}
	cout << endl;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;

        ListNode* answer = NULL;
		ListNode* lt = NULL;
        while(l1!= NULL && l2 != NULL) {
        
        	int temp = l1->val + l2->val + carry;
        	
        	carry = 0;
        	if(temp > 9) {
        		temp = temp - 10;
        		carry = 1;
			}
				
			ListNode * tNode = new ListNode(temp);
			
			if(answer == NULL && lt == NULL) {
				
				lt = answer = tNode;
				
			}
			else {				
				lt->next = tNode;
				lt = tNode;								
			}			
			l1 = l1->next;
			l2 = l2->next;					
		}
		
		while (l1 != NULL) {
			int temp = l1->val + carry;
			carry = 0;
			if(temp > 9) {
				temp -= 10;
				carry = 1;
			}
			ListNode* tNode = new ListNode(temp);
				
			lt->next = tNode;
				
			lt = tNode;
			l1 = l1->next;
		}
		while (l2 != NULL) {
			int temp = l2->val + carry;
			carry = 0;
			if(temp > 9) {
				temp -= 10;
				carry = 1;
			}
			ListNode* tNode = new ListNode(temp);
				
			lt->next = tNode;
				
			lt = tNode;
			l2 = l2->next;
		}
		if(carry != 0) {
			ListNode* tNode = new ListNode(carry);				
			lt->next = tNode;				
			lt = tNode;
		}
	
		return answer;
}



int main() {
	ListNode* temp1 = new ListNode(2);
	ListNode* l1 = temp1; 
	ListNode*ll = l1; 
	cout << ll <<" " << l1 <<endl;

	temp1 = new ListNode(4);
	ll->next = temp1; 
	ll = temp1;
	
	temp1 = new ListNode(3);
	ll->next = temp1; 
	ll = temp1;
	
	
	
	ListNode* temp2 = new ListNode(5);
	ListNode* l2 = temp2; 
	ll = l2; 
	

	temp1 = new ListNode(6);
	ll->next = temp1; 
	ll = temp1;
	
	temp1 = new ListNode(6);
	ll->next = temp1; 
	ll = temp1;
	


	print(l1);
	print(l2);

	ListNode * ans = addTwoNumbers(l1, l2);
	
	print(ans);
	return 0;
}

