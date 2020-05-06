#include<stdio.h>


int n , a[100009] ; 

int main()
{
	scanf("%d" , &n) ;
	
	//Given array should be sorted . 
	
	for(int i = 0 ; i<n ; i++)
	scanf("%d" , &a[i]) ;
	
	
	int q ; 
	scanf("%d" , &q) ; 
	//q here stands for the number of queries that user wants to process . 
	
	while(q--)
	{
		int x ; 
		scanf("%d" , &x); 
		
		int start = 0 , flag = 0 , end = n-1 ; 
		
		while(start <= end) // BINARY SEARCH
		{
			int mid = (start + end)/2 ; 
			
			if(a[mid] == x)
			{
				flag = 1; 
				printf("%d\n" , mid) ; 
				break ; 
			}
			else if(a[mid] > x)
			end = mid - 1; 
			else
			start = mid + 1 ; 
			
		}//BINARY SEARCH ENDS 
		if(flag == 0)
		{
			printf("Element Not Found\n") ; 
		}
	}
	
	return  0 ;
}
