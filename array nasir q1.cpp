#include<iostream>
using namespace std;
int main()
{
	int arr[8],i;
	float sum=0,avg;
	int temp;
	cout<<"enter the numbers of array"<<endl;
	for(i=0;i<8;i++)
	{
		cout<<"enter the array of elements"<<endl;
		cin>>arr[i];
		
		sum=sum+arr[i];
		
	}
	cout<<"the sum of elements is="<<sum<<endl;
	
	avg=sum/8;
	
	cout<<"the avg is="<<avg<<endl;
	
	for(i=0;i<8;i++)
	{
	  if(arr[0]<arr[i])
	  {
	  	temp=arr[0];
	  	
	  	arr[0]=arr[i];
	  	
	  	arr[i]=temp;
	  }
	  
	}
    	cout<<"the largest elements is="<<arr[0]<<endl;
	
	for(i=0;i<8;i++)
	
	{
			
		if(arr[0]>arr[i])
		
		arr[i]=arr[0];
		
		}
	
	cout<<"the smallest elements is="<<arr[0]<<endl;
	
	return 0;
	
}
