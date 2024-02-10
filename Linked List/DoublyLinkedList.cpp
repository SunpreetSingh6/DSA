#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* prev;
		Node* next;
		
		Node(int data)
		{
			this->data = data;
			this->prev = NULL;
			this->next = NULL;	
		}
};

void Print(Node* &head)
{
	Node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void Length(Node* &head)
{
	int len=0;
	Node* temp = head;
	while(temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	cout<<"Length is:- "<<len<<endl;
}

void insertAtHead(Node* &head , int d)
{
	cout<<"Inserting at head"<<endl;
	Node* temp = new Node(d);
	temp->next = head;
	head->prev = temp;
	head = temp;
}

void insertAtTail(Node* &head , int d)
{
	cout<<"Inserting at tail"<<endl;
	Node* temp = new Node(d);
	Node* ptr = head;
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp ; 
	temp->prev = ptr;
}

void insertAtLocation(Node* &head , int d , int loc)
{
	cout<<"Inserting at desired location"<<endl;
	Node* temp = new Node(d);
	Node* ptr = head;
	int i=1;
	while(i != loc-1)
	{
		ptr = ptr->next;
		i++;
	}
	temp->next = ptr->next;
	ptr->next->prev = temp;
	ptr->next = temp;
	temp->prev = ptr;
}

void deleteAtHead(Node* &head)
{
	cout<<"Deletion at head"<<endl;
	Node* ptr = head;
	head = ptr->next;
	head->prev = NULL;
	ptr->next = NULL;
	free(ptr);
}

void deleteAtTail(Node* &head)
{
	cout<<"Deletion at tail"<<endl;
	Node* ptr = head , *ptr2;
	while(ptr->next != NULL)
	{
		ptr2 = ptr; 
		ptr = ptr->next;
	}
	ptr2->next = NULL;
	ptr->prev = NULL;
	free(ptr);
}

void deleteAtLocation(Node* &head , int loc)
{
	cout<<"Deletion at desired location"<<endl;
	Node* ptr = head ;
	Node* ptr2 = NULL;
	int i=1;
	while(i != loc)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		i++;
	}	
	ptr2->next = ptr->next;
	ptr->next->prev = ptr2;
	free(ptr); 
}

int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	Print(head);
	Length(head);
	
	//Inserting a Node at Head
	insertAtHead(head,12);
	Print(head);
	insertAtHead(head,15);
	Print(head);
	
	//Inserting a Node at Tail
	insertAtTail(head,8);
	Print(head);
	insertAtTail(head,6);
	Print(head);
	
	//Inserting a Node at desired location
	insertAtLocation(head,11,3);
	Print(head);
	insertAtLocation(head,7,6);
	Print(head);
	
	// Deletion at Head
	deleteAtHead(head);
	Print(head);
	
	// Deletion at Tail
	deleteAtTail(head);
	Print(head);
	
	deleteAtLocation(head,4);
	Print(head);
	
	
	return 0;
}
