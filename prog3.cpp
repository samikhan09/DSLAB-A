//Program to delete from array where an input item found

#include<iostream>

using namespace std;

void arraytraverse(int,int,int[],int);
int arraydel(int,int,int [],int,int);

int arraydel(int lb, int ub, int list[], int max, int item){
	int chk=0;
		if(ub>max){
			cout<<"UB Error";
			return -1;
		}
		if(lb>ub){
			cout<<"LB Error";
			return -1;
		}
		int i;
		for(i=lb;i<=ub;i++){
			if(list[i]==item){
				chk=1;
				break;
			}
		}
		if(chk==0){
			return -1;
		}
		for(int j=i;j<=ub;j++){
			list[j]=list[j+1];
		}
		cout<<"\n";
		arraytraverse(lb,ub,list,5);
		return 1;
}

int main(){
	int lb,ub,list[5],item;
	cout<<"Enter elements of array";
	for(int i=0;i<=4;i++){
		cin>>list[i];
	}
	cout<<"Enter lb nad ub to traverse";
	cin>>lb>>ub;
	//Input Item
	cout<<"Input item to del";
	cin>>item;
	arraytraverse(lb,ub,list,5);
	int op= arraydel(lb,ub,list,5,item);
	if(op==-1){
		cout<<"Not Found/ Error";
	}
	return 0;
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
