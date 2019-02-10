#include<iostream>
using namespace std;
//use pivot concept.
void quicksort(int array[],int n,int l)
	{
		//for only one element left
		if(n<l)
		{
			int pivot = l,temp;
			for(int i = l-1 ; i >= f ; i--)
			{
				if(array[i] > array[pivot])
				{
					temp = array[i];
					for(int j = i ; j < pivot ; j++)
					 {
						array[j] = array[j+1];
					 }
					  array[pivot] = temp;
					  pivot--;
				 }
			}
			quicksort(array , n , pivot-1);
			quicksort(array , pivot+1 , l);
		}
	}


void output(int array[],int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
int main()
	{
		//declare variables
		int a;
		//asking user for input
		cout<<"Enter the desire length of array: ";
		cin>>a;
		int array[a];
		cout<<"Now start entering elements"<<endl;
		for(int i=0;i<a;i++)
		{
			cin>>array[i];
		}
		quicksort(array,0,a-1);
		output(array,a);
		return 0;
}
