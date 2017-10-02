# sorting-algortihms
Four types of sorting in data structures/ C++

#include<iostream>
using namespace std;

int main()
{
	int size,i,j,k,a[10],temp;
	cout<<"Enter size";
	cin>>size;
	cout<<"Enter array:";
	for (k=0;k<size;k++)
	{
		cin>>a[k];
	}
	for(int i=1;i<size;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for (int k=0;k<size;k++)
	{
		cout<<a[k]<<" ";2
	}
}
