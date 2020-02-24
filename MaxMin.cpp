#include <iostream>
using namespace std;

void MinMax(int arr[], int low, int high, int& min, int& max)
{
    if (low == high)           
    {
        if (max < arr[low])  
            max = arr[low];

        if (min > arr[high]) 
            min = arr[high];

        return;
    }

    if (high - low == 1) 
    {
        if (arr[low] < arr[high])   
        {
            if (min > arr[low])     
                min = arr[low];

            if (max < arr[high])    
                max = arr[high];
        }
        else
        {
            if (min > arr[high])   
                min = arr[high];

            if (max < arr[low])    
                max = arr[low];
        }
        return;
    }

    int mid = (low + high) / 2;

 
    MinMax(arr, low, mid, min, max);
 
    MinMax(arr, mid + 1, high, min, max);
}

int main(){
	int n;
	cout<< "Enter the size of the array:  ";
	cin>>n;
	int array[n];
	for(int i =0; i<n; i++){
		cout<<"Enter number "<<i+1<<":  ";
		cin>>array[i];
	}
	int minimum=INT_MAX;
	int maximum=INT_MIN;
	
	MinMax(array, 0, n-1, minimum, maximum);
	
	cout<<"Maximum: "<<maximum<<'\n';
	cout<<"Minimum: "<<minimum;
	
	
}
