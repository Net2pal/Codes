#include<iostream>
int lis(int *arr,int n)
{
	int *lis,i,j,max=0;
	lis=(int*) malloc (sizeof(int) * n);
	for(i = 0 ; i < n ; i++)
	{
		lis[i]=1;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]<arr[i] && lis[i]<lis[j]+1)
			{
				lis[i]=lis[j]+1;
			//	std::cout<<lis[i];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(max<lis[i])
		{
			max=lis[i];
		}
	}
	free(lis);
	return max;
}
int main()
{
	int arr[100];
	int n;
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>arr[i];
	//	std::cout<<arr[i]<<" ";
	}

	std::cout<<lis(arr,n);
	return 0;
}
