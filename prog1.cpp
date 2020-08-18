//Program to traverse 1d numaric array

#include<iostream>

using namespace std;

void arraytraverse(int,int,int[],int);

int main(){
	int lb,ub,list[5];
	cout<<"Enter elements of array";
	for(int i=0;i<=4;i++){
		cin>>list[i];
	}
	cout<<"Enter lb nad ub to traverse";
	cin>>lb>>ub;
	arraytraverse(lb,ub,list,5);
}

// arraytraverse Definition
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
