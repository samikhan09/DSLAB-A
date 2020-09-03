//Linear search

// w-case  o(n)
// b-case  o(1)
// a-case  o(n/2)

#include<iostream>

using namespace std;

int search(int,int,int[],int);

int main(){
	int lb,ub,list[5],item;
	cout<<"enter ele. of list";
	for(int i=0;i<=4;i++){
		cin>>list[i];
	}
	cout<<"enter LB";
	cin>>lb;
	
	cout<<"enter UB";
	cin>>ub;
	
	cout<<"Enter item to search";
	cin>>item;
	
	int opindex;
	opindex=search(lb,ub,list,item);
	if(opindex==-1){
		cout<<"not found";
	}
	else{
		cout<<"item found @ "<<opindex;
	}
	
}

int search(int lb,int ub,int list[],int item){
	if(lb>ub){
		cout<<"error";
		return -2;
	}
	
	for(int i=lb;i<=ub;i++){
		if(list[i]==item){
			return i;
		}
	}
	return -1;
}

