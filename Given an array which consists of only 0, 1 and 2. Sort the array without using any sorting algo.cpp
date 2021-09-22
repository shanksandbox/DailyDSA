#include<iostream>
using namespace std;

// Utility function to swap elements `A[i]` and `A[j]` in an array
void swap(int A[], int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

// Linear time partition routine to sort an array containing 0, 1, and 2.
// It is similar to 3–way partitioning for the Dutch national flag problem.
void threeWayPartition(int A[], int end)
{
	int start = 0, mid = 0;
	int pivot = 1;

	while(mid<=end){
		if(A[mid]<pivot)
		{
			swap(A,start,mid);
			++start,++mid;
		}
		else if(A[mid]>pivot)
		{
			swap(A,mid,end);
			--end;
		}
		else
		++mid;
	}
}


int main()
{
	int A[] = { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 };
	int n = sizeof(A)/sizeof(A[0]);

	threeWayPartition(A, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}

	return 0;
}
