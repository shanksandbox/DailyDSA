#include<iostream>
using namespace std;

struct Pair{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int n){
	struct Pair minmax;
	int i;
	if(n==1)
	{
		minmax.min=arr[0];
		minmax.max=arr[0];
	    return minmax;
	}
	
	if(arr[0]>arr[1]){
		minmax.max=arr[0];
		minmax.min=arr[1];
	}
	else if(arr[0]<arr[1])
	{
		minmax.max=arr[1];
		minmax.min=arr[0];
	
	}
	for(i=2;i<n;i++){
		if(minmax.max<arr[i])
		minmax.max=arr[i];
		else if(minmax.min>arr[i])
		minmax.min=arr[i];
	}
	return minmax;
}

int main(){
	int arr[]={1000,11,445,1,330,3000};
	int n=6;
	struct Pair minmax=getMinMax(arr,n);
	cout<<minmax.max;
	cout<<minmax.min;
	return 0;
}
