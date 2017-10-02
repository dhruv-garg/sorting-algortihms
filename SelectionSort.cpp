#include<iostream>
using namespace std;

int main()
{
	int size,min1,min2,temp;
	int a[10];
	cout<<"Enter size of array";
	cin>>size;
	cout<<"Enter array:";
	for (int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for (int p=0;p<(size-1);p++)
	{
		min1=p;
		for (int q=p+1;q<size;q++)
		{
			if (a[q]<a[min1])
			{
				min1=q;
			}
		}
		temp=a[min1];
		a[min1]=a[p];
		a[p]=temp;
	}
	for(int x=0;x<size;x++)
	{
		cout<<a[x]<<" ";
	}
}
