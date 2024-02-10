#include<stdio.h>
void main()
{
	/*
		Given N size of two arrays :- arrival[] and departure[]
		Find minimum number of plateforms to stop all trains.
		
		https://www.youtube.com/watch?v=E0_Meg_ACMY&list=PLvI381EFf-Uio-3KkcLtYoe7GaIaxSb6f&index=12
		
	*/
	//          Ex 1 Ans-3			 Ex 2  Ans-2		Ex 3 Ans-3
	// ar = 200 340 410 430 470  ,  900 1100 1235  , 900 940 950 110 1500 1800 
	// de = 250 440 420 435 500  , 	1100 1200 1240 , 910 1200 1120 1130 1900 2000
	
	int i,j,N,platform=1,max=1;
	printf("Enter size of both the arrays(Total no. of platforms) :- ");
	scanf("%d" , &N);
	int ar[N],de[N];
	printf("Enter elements of arrival array in sorted manner :- ");
	for(i=0;i<N;i++)
		scanf("%d" , &ar[i]);
	printf("Enter elements of departure array in sorted manner :- ");
	for(i=0;i<N;i++)
		scanf("%d" , &de[i]);
	i = 1;
	j = 0;	
	while(i<N && j<N)
	{
		if(ar[i] <= de[j])
		{
			i++;
			platform++;
			if(platform>max)
				max = platform;
		}
		else
		{
			j++;
			platform--;
		}
	}
	printf("Minimum number of platforms which are required are :- %d" , max);
	
}
