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
 
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == NULL && l2 == NULL) 
    	return NULL;
	ListNode * head = NULL, *p = NULL;
	while (l1 != NULL && l2 != NULL) {
	
 		ListNode * temp = new ListNode(-1);
		if(l1->val <= l2->val) {
			temp->val = l1->val;	
			l1 = l1->next;
			
		}
		else {
			temp->val = l2->val;
			l2 = l2->next;
			
		}
		
		if(head == NULL) {
			head = temp;
			p = temp; 
			
		}
		else {
			p->next = temp;
			p = temp;
			
		}
		
		
	}

	while (l1 != NULL) {
		
		ListNode * temp = new ListNode(l1->val);
		
		if(head == NULL) {
			head = temp;
			p = temp;
		}
		else {
			p->next = temp;
			p = temp;
		}
		l1 = l1->next; 
		
	}
	while (l2 != NULL) {
		//	cout << "3" << endl;
		ListNode * temp = new ListNode(l2->val);
		
		if(head == NULL) {
			head = temp;
			p = temp;
		}
		else {
			p->next = temp;
			p = temp;
		}
		l2 = l2->next;
		
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
		temp1 = new ListNode(4);
	ll->next = temp1; 
	ll = temp1;
//	
//		temp1 = new ListNode(5);
//	ll->next = temp1; 
//	ll = temp1;

ListNode* temp2 = new ListNode(5);
	ListNode* l2 = temp2; 
	ListNode*ll2 = l2; 
	
	print(l1);
	print(l2);
	ListNode* temp3 = mergeTwoLists(l2, l1);
	print(temp3);
	return 0;
}

