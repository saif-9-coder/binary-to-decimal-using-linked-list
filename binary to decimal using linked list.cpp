#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node * next;
};
class linkedList
{
private:
    node *head;
public:
    linkedList()
    {
        head = NULL;
    }
    void addNode (int x)
    {
    	if (head==NULL)
    	{
    		node * temp = new node () ;
    		head=temp;
    		temp->data = x;
    		temp ->next= NULL;
		}
		else
		{
			node * temp = new node ();
			node * ptr=head;
			while (ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=temp;
			temp->data=x;
			temp->next=NULL;
		}
	}
	void print ()
	{
		if(head==NULL)
		{
			cout<<"Linked List is empty"<<endl;
		}
		else
		{
			node * temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
			}
			cout<<endl;
		}
	}
	int binaryToDecimal()
	{
	  int num=head->data;
	  while(head->next!=NULL)
	  {
	  	num=num*2+head->next->data;
	  	head=head->next;
	  } 
	  return num;		
	}
};

int main()
{
	linkedList s;
	int n,x;
	cout<<"Enter <<Length>> of binary number="<<endl;
	cin>>n;
		cout<<"Enter binary data with space="<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		s.addNode(x);
	}
	cout<<"Binary number="<<" ";
	s.print();
	cout<<"Decimal number="<<" "<<s.binaryToDecimal();
	return 0;
}
