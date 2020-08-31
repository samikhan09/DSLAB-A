//program to calculate sum of elemnts of even index in an array 
#include<iostream>
using namespace std;
int sumelements(int lb,int ub,int list[],int max)
{
	if(lb>ub)
	{
		cout<<"error";
		return 0;
	}
	if(ub>=max+lb)
	{
		cout<<"error";
		return 0;
	}
	int s=0;
	for(int i=lb;i<=ub;i++)
	{
		if(i%2==0)
		{
			s=s+list[i];
		}
	}
   return s;
}
int main()
{
	int lb,ub,sum,max,list[100];
	cout<<"size of array:";
	cin>>max;

    //intializing array
	cout<<"enter elements of array:"; 
	for(int i=0;i<max;i++)
	{
		cin>>list[i];
    }	
	
	cout<<"enter lb:";
	cin>>lb;
	cout<<"enter ub:";
	cin>>ub;
	sum=sumelements(lb,ub,list,max);
	cout<<"sum of even index elements:"<<sum;
	return 0;
}
