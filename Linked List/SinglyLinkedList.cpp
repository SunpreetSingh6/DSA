#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data)
		{
			this->data = data;
			this->next = NULL;
		}
};

void insertAtHead(Node* &head , int d)
{
	cout<<"Inserting at head"<<endl;
	Node* temp = new Node(d);
	temp->next = head;
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
	ptr->next = temp;
	temp->next = NULL;			// Can comment this.
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
	ptr->next = temp;
}

void deleteAtHead(Node* &head)
{
	cout<<"Deletion at head"<<endl;
	Node* ptr = head;
	head = ptr->next;
	free(ptr);
}

void deleteAtTail(Node* &head)
{
	cout<<"Deletion at tail"<<endl;
	Node* ptr, *ptr2 ;
	ptr = head;
	while(ptr->next != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
	}
	ptr2->next = NULL;
	free(ptr);
}

void deleteAtLocation(Node* &head , int loc)
{
	cout<<"Deletion at desired location"<<endl;
	Node* ptr2 , *ptr = head;
	int i=1;
	while(i != loc-1)
	{
		ptr = ptr->next;
		i++;
	}
	ptr2 = ptr->next;
	ptr->next = ptr->next->next;	// Or ptr->next = ptr2->next;
	free(ptr2);
}

void search(Node* &head , int key)
{
	cout<<"Searching"<<endl;
	bool f = false; 
	int i=1;
	Node* ptr = head;
	while(ptr != NULL)
	{
		if(ptr->data == key)
		{
			f = true;
			break;
		}
		ptr = ptr->next;
		i++;
	}
	if(f)
		cout<<"Found at location:- "<<i<<endl;
	else
		cout<<"Not found"<<endl;
}

void reverse(Node* &head)
{
	Node *prev = NULL , *next = NULL;
	Node* current = head;
	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

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

int main()
{
	Node* node1 = new Node(10);
//	cout<< node1->data <<endl;
//	cout<< node1->next <<endl;
	
	Node* head = node1;
	Print(head);
	
	// Inserting new Node at Head
	insertAtHead(head , 12);
	Print(head); 
	
	insertAtHead(head , 15);
	Print(head); 
	
	// Inserting new Node at Tail
	insertAtTail(head , 8);
	Print(head); 
	
	insertAtTail(head , 6);
	Print(head); 
	
	// Inserting new Node at desired location
	insertAtLocation(head , 11 , 3);
	Print(head); 
	
	// Deletion at Head
	deleteAtHead(head);
	Print(head); 
	
	// Deletion at Tail
	deleteAtTail(head);
	Print(head);
	
	// Deletion at desired location
	deleteAtLocation(head , 2);
	Print(head); 
	
	// Searching 
	search(head , 12);
	
	// Reverse
	reverse(head);
	Print(head);
	
	return 0;
}
