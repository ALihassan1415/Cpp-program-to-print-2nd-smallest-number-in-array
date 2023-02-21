//Write program to print second smallest number in an array....

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i,j,over;
	cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr[i];
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";
			}
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]>arr[j])
					{
						//Swapping......
						over=arr[j];
						arr[j]=arr[i];
						arr[i]=over;
					}
				}
			}
				cout<<"\nSecond smallest number in array is : "<<endl;
			    cout<<arr[1];
			return 0;
}