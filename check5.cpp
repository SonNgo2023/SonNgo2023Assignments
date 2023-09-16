#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int m[a];
	for (int i=0;i<a;i++)
	{
		cin>>m[i];
	}
	for (int i=0;i<a-1;i++)
	{
		for(int j=i+1;j<a;j++)
		{
			if (m[i]>m[j])
			{
				int tmp=m[i];
				m[i]=m[j];
				m[j]=tmp;
			}
		}
	}
	int sum=m[0]+m[a-1];
	cout<<sum;
	return 0;
}
