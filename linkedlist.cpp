#include <iostream>

using namespace std;

struct node{
	int data;
	node *next;
};

class linkedlist {

private:
	node *head, *tail;
	
public:
	 linkedlist(){
			head = NULL;
			tail = NULL;
		}
	
	void addnode(int n){
		node *tmp = new node;
		tmp->data = n;
		tmp->next = NULL;
		
		if(head == NULL){
			head = tmp;
			tail = tmp;
		}
		else{
			tail->next = tmp;
			tail = tail->next;
		}
	}
	
	node* gethead(){
		return head;
	}
	static void display(node *head)
	{
		if(head == NULL){
			cout << "NULL" << endl;
		}
		else{
			cout << head->data << endl;
			display(head->next);
		}
	}
	
	static void concatenate(node *a, node *b){
		if(a != NULL && b!=NULL){
			if(a->next == NULL){
				a->next = b;
			}
			else{
				concatenate(a->next,b);
			}
		}
		else{
			cout << "Either A or B is null \n";
		}
	}
};

int main(){
	linkedlist a;
	a.addnode(1);
	a.addnode(2);
	linkedlist b;
	b.addnode(4);
	b.addnode(5);
	linkedlist::concatenate(a.gethead(), b.gethead());
	linkedlist::display(a.gethead());
	return 0;
}
