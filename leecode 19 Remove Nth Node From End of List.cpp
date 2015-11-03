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
 
ListNode* removeNthFromEnd(ListNode* head, int n) {
		if(head == NULL)
			return NULL;
        int count = n;
        ListNode *p1,*p2;
        p1 = head;
        p2 = head;
        
        for(int i = 0; i < n; i++) {
        	p1 = p1->next;
		} 
		
		if(p1!= NULL) {
			 while(p1->next != NULL) {
        	p1 = p1->next;
        
        	p2 = p2->next;
			
		
		}
		p2->next = p2->next->next;
		}
       else {
			head = head->next;
		}
			
		return head;
	
}

int main() {
ListNode* temp1 = new ListNode(1);
	ListNode* l1 = temp1; 
	ListNode*ll = l1; 

	temp1 = new ListNode(2);
	ll->next = temp1; 
	ll = temp1;
	
//	temp1 = new ListNode(3);
//	ll->next = temp1; 
//	ll = temp1;
//	
//		temp1 = new ListNode(4);
//	ll->next = temp1; 
//	ll = temp1;
//	
//		temp1 = new ListNode(5);
//	ll->next = temp1; 
//	ll = temp1;
	
	print(l1);
	print(removeNthFromEnd(l1, 1));
	return 0;
}

