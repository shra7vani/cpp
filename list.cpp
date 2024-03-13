#include<iostream>
using namespace std;
	class Node{
	public:
		int data;
		Node*next;
			Node(int data)
			{
			
	
		this->data=data;
		this->next=nullptr*;
	
}
};
	class LinkedList
	{
	public:
	Node*head;
LinkedList(){
	head=nullptr;
}
	void insert(int data)
	{
		Node*newNode=new Node(data);
		newNode->next=head;
		head=newNode;
	}
	void display()	
		{
			node*temp=head;
			while(temp!=nullptr)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
		}
	};
	}int main()
	{
		LinkedList list;
		list.insert(3);
		list.insert(5);
		list.insert(4);
	
	cout<<"Linked list:"<<endl;
	list.display()
	return 0;
	}
