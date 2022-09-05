void intersectionOfArray(int ar1[] , int ar2[] , int size1 , int size2)
{ 
	int i,j,k,temp,count=0;
	printf("\nIntersection of both the arrays is :- ");
	for(i=0 ; i<size1 ; i++)
	{
		for(j=0 ; j<size2 ; j++)
		{			
			if(ar1[i] == ar2[j])
			{
				printf( "%d\t" ,ar1[i]);				
			}
		}
	}
}
void unionOfArray(int ar1[] , int ar2[] , int size1 , int size2)
{
	int i,j,flag;
	printf("\nUnion of both the arrays is :- ");
	for(i=0 ; i<size1 ; i++)
	{
		printf( "%d\t" ,ar1[i]);
	}
	for(i=0 ; i<size2 ; i++)
	{
		flag=0;
		for(j=0 ; j<size1 ; j++)
		{
			if(ar1[j] == ar2[i])
			{
				flag=1;
				break;
			}
		}
		if(flag!=1)
		{
			printf( "%d\t" ,ar2[i]);
		}
	}
}

void printArray(int ar[] , int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t" , ar[i]);
	}
}
void main()
{
	int size1,size2,i;
	printf("C program to find union of 2 arrays\n");
	printf("Enter size of 1st array :- ");
	scanf("%d" , &size1);
	int ar1[size1];
	printf("Enter array elements :- ");
	for(i=0;i<size1;i++)
	{
		scanf("%d" , &ar1[i]);
	}
	printf("Enter size of 2nd array :- ");
	scanf("%d" , &size2);
	int ar2[size2];
	printf("Enter array elements :- ");
	for(i=0;i<size2;i++)
	{
		scanf("%d" , &ar2[i]);
	}
	printf("\nArray elements of 1st array :- ");
	printArray(ar1,size1);
	printf("\nArray elements of 2nd array :- ");
	printArray(ar2,size2);
	unionOfArray(ar1,ar2,size1,size2);
	intersectionOfArray(ar1,ar2,size1,size2);
}
