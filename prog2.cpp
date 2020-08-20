//prog.to insert item at input position

#include<iostream>

using namespace std;

void arraytraverse(int,int,int[],int);
void arrayinsert(int,int,int[],int,int,int);

int main(){
	int lb,ub,list[4],pos,item;
	
	//Input
	cout<<"enter ele. ofo array";
	for(int i=0;i<=3;i++){
		cin>>list[i];
	}	
	cout<<"enter lb and ub";
	cin>>lb>>ub;
	cout<<"enter pos and item";
	cin>>pos>>item;
	
	//function call
	arrayinsert(lb,ub,list,item,pos,4);
}

void arrayinsert(int lb, int ub, int list[], int item, int pos, int max ){
	//print before
	arraytraverse(lb,ub,list,max);
	
	//condition
	if(ub>=max){
		cout<<"error";
		return;
	}
	if(lb>ub){
		cout<<"error";
		return;
	}
	for(int i=ub; ; )	{
		list[i]=list[i-1];
		i=i-1;
		if(i==pos-1){
			///if lb =0 
			break;
		}
	}
	list[pos-1]=item;
	cout<<"\n";
	//print after
	arraytraverse(lb,ub,list,max);
}

void arraytraverse(int lb,int ub,int list[],int max){
	if(ub>max){
		cout<<"Error";
		return;
	}
	if(lb>ub){
		cout<<"Error";
		return;
	}
	for(int i=lb;i<=ub;i++){
		cout<<"\t"<<list[i];
	}
}
