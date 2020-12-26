//Program for Insertion sort

#include<iostream>

using namespace std;

void insertion_sort(int[], int, int,int);

void insertion_sort(int list[], int lb, int ub,int max){
	if(ub>max){
		cout<<"error";
		return;
	}
	int i,temp,j;
	for(i=lb+1;i<=ub;i++){
		temp=list[i];
		j=i-1;
		while(j>=0 && list[j]>temp){
			list[j+1]=list[j];
			j--;
		}
		list[j+1]=temp;
	}
	cout<<"\nSorted Array";
	for(i=lb;i<=ub;i++){
		cout<<"\t"<<list[i];
	}
}

int main(){
	int a[5];
	for(int i=0;i<=4;i++){
		cin>>a[i];
	}
	cout<<"Input Array";
	for(int i=0;i<=4;i++){
		cout<<"\t"<<a[i];
	}
	insertion_sort(a,0,4,5);
	return 0;
}

