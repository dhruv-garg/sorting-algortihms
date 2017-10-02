#include<iostream>
using namespace std;

void quicksort(int [],int,int);
int partition(int [],int,int);

int main()
{
	int arr[20],l=0,m;
	cout<<"Enter size of array";
	cin>>m;
	cout<<"Enter elements";
	for (int p=0;p<m;p++)
	{
		cin>>arr[p];
	}
	quicksort(arr,l,m-1);
	cout<<"Sorted:"<<endl;
	for (int k=0;k<m;k++)
	{
		cout<<arr[k]<<" ";
	}
}

void quicksort(int a[],int l,int m)
{
	int q;
	if (l<m)
	{
		q=partition(a,l,m);
		quicksort(a,l,q-1);
		quicksort(a,q+1,m);
	}
}
int partition(int a[],int l,int m)
{
	int position,temp,i,j,flag=0;
	position=l;
	start:
	for(i=m;i>position;i--)
	{
		if (a[position]>a[i])
		{
			temp=a[position];
			a[position]=a[i];
			a[i]=temp;
			position=i;
			flag=1;
			break;
		}
	}
	for(j=l;j<position;j++)
	{
		if (a[position]<a[j])
		{
			temp=a[position];
			a[position]=a[j];
			a[j]=temp;
			flag=1;
			position=j;
			break;
		}
	}
	if(position==j && position==i)
		return position;
	goto start;
}
