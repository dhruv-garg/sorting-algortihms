#include<iostream>
using namespace std;

void mergesort(int a[],int beg,int end);
void merge(int a[],int beg,int mid,int end);
int main()
{
	int l=0,m;
	int a[20];
	cout<<"Enter size of array";
	cin>>m;
	cout<<"Enter elements";
	for (int p=0;p<m;p++)
	{
		cin>>a[p];
	}
	mergesort(a,0,m-1);
	cout<<"Sorted:"<<endl;
	for (int k=0;k<m;k++)
	{
		cout<<a[k]<<" ";
	}
}
void mergesort(int a[],int beg,int end)
{
	int mid;	
	if (beg<end)
	{
		mid=(beg+end)/2;
		mergesort(a,beg,mid);
		mergesort(a,mid+1,end);
		merge(a,beg,mid,end);
	}
}
void merge(int a[],int beg,int mid,int end)
{
	int a1[100],a2[100],y=-1,z=-1,k;
	for (int i=beg;i<=mid;i++)
	{
		a1[++y]=a[i];	
	}
	for (int j=(mid+1);j<=end;j++)
	{
		a2[++z]=a[j];	
	}
	int p=0;
	int q=0;
	k=beg;
	while(p<=y && q<=z)
	{
		if (a1[p]>a2[q])
		{
			a[k]=a2[q];
			q++;
		}
		else
		{
			a[k]=a1[p];
			p++;
		}
		k++;
	}
	while(p<=y)
	{
		a[k]=a1[p];
		p++;
		k++;	
	}
	while(q<=z)
	{
		a[k]=a2[q];
		q++;
		k++;	
	}		
}
