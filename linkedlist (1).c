#include<iostream>
using namespace std;
	class Node{
	public:
		int data;
		Node* next;
			/*Node(int data)
			{
			
	
		this->data=data;
		this->next=nullptr;*/
	

};
	class LinkedList
	{
	public:
	Node*head;
	public:
LinkedList(){
    Node* head;
	head=nullptr;
}
	void insert(int data)
	{
		Node* newNode=new Node;
		newNode->data=data;
		newNode->next=head;
		cout<<data;
		
	}
	/*void display()	
		{
			Node*temp=head;
			while(temp!=nullptr)
		{
			cout<<temp->data<<" "<<endl;
			temp=temp->next;
		}
		cout<<endl;
		}*/
	};
	
	int main()
	{	cout<<"Linked list:"<<endl;
		LinkedList l1;
		l1.insert(3);
		//List.insert(5);
		//List.insert(4);
	

//	list.display()
	return 0;
	}
