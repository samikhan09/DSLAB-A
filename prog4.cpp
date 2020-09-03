//Reverse of array
#include<iostream>

using namespace std;

//lb,ub,list,max
void reversearray(int,int,int[],int);

int main(){
	int lb,ub,list[5];
	cout<<"enter ele. of list";
	for(int i=0;i<=4;i++){
		cin>>list[i];
	}
	cout<<"enter LB";
	cin>>lb;
	
	cout<<"enter UB";
	cin>>ub;
	
	//function call
	reversearray(lb,ub,list,5);
	
}
void reversearray(int lb,int ub,int list[],int max){
	if(ub>max){
		cout<<"error";
		return;
	}
	if(lb>ub){
		cout<<"error";
		return;
	}
	int i,temp;
	for(i=lb;i<=ub;){
		temp=list[i];
		list[i]=list[ub-i];
		list[ub-i]=temp;
		i=i+1;
		if(i==(ub/2)){
			break;
		}
	}
	cout<<"\n";
	for(i=lb;i<=ub;i++){
		cout<<"\t"<<list[i];
	}
}
