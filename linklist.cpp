//singly link list
#include <iostream>

using namespace std;

//node (Type) self refrential struct
struct node{
	int data;
	node *ref;
};
//////////////////////////////////////////

class link_list{
	
	node *start;
	public:	
		link_list(); //Null construtor
		int isempty();
		void display();
		void insert_end(int);
		~link_list(); 
};

link_list::link_list(){
	start=NULL;
}

int link_list::isempty(){
	if(start==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

void link_list::display(){
	if(isempty()){
		cout<<"list is empty";
		return;
	}
	cout<<"Link list data: ";
	node *ptr=start;
	while(ptr!=NULL){
		cout<<"\t"<<ptr->data;
		ptr=ptr->ref;	
	}
}

void link_list::insert_end(int item){
	///Newnode (Dynamic Memory
	node *newnode=new node;
	newnode->data=item;
	newnode->ref=NULL;
	if(isempty()){
		start=newnode;
		return;
	}
	node *ptr=start;
	while(ptr->ref!=NULL){
		ptr=ptr->ref;
	}
	ptr->ref=newnode;
}

link_list::~link_list(){
	if(isempty()){
		return;
	}
	node *p,*q;
	p=start;
	q=start->ref;
	while(p!=NULL){
		delete p;
		p=q;
		q=q->ref;
	}
}

int main(){
	link_list o1;
	int item;
	cin>>item;
	o1.insert_end(item);
	cin>>item;
	o1.insert_end(item);
	
	//display SLL
	o1.display();
}
