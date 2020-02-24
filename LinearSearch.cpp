#include <iostream>
using namespace std;

int linearSearch(int arr[], int k, int size){
	if(size==0){
		return -1;
	}else if(k==arr[size-1]){
		return size;
	}else{
		linearSearch(arr, k, size-1);
	}
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
	
	cout<<"Enter value you want to search : ";
	int key;
	cin>>key;
	
	int iPos= linearSearch(array, key, n);
	if(iPos==-1){
		cout<<"Value not found";
	}else{
		cout<<"Value found at Position "<< iPos;
	}
}
