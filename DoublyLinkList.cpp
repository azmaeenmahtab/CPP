#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};

node *root = NULL;

void InsertAtLast(int x){

	if(root == NULL){
			
			node* newNode = new node();
	
			newNode->data = x;
			newNode->next = NULL;
			newNode->prev = NULL;
			root = newNode;
		}else{

			node *curr = root;

			while(curr->next != NULL){

				curr = curr->next;

			}

			// cout << "curr is pointing to the last node" << endl;

			node* newNode = new node();

			newNode->data = x;
			newNode->next = NULL;
			newNode->prev = curr;
			curr->next = newNode;

		}

}


void PrintDoublyLinkedlist(){

	if(root == NULL){

		cout << "Linked List is empty" << endl;
		return;
	}else{

		node* curr = root;

		//one method of traversing

		// while(curr->next != NULL){
		// 	cout << curr->data << endl;
		// 	curr = curr->next;
		// }
		// cout << curr->data << endl;




		//second method of traversing 
		while(curr != NULL){
			cout << curr->data << endl;
			curr = curr->next;
		}
		


	}
}




int main(){
	
	cout << "creating doubly linked list" << endl;
	cout << "insert at last" << endl;

	

	for(int i = 0; i < 5; i++){
		int x;
		cin >> x;

		InsertAtLast(x);
	}	



	cout << "printing doubly linked list" << endl;

	PrintDoublyLinkedlist();

}
