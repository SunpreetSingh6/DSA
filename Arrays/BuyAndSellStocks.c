#include<stdio.h>

//Input: prices = [7,1,5,3,6,4]
//Output: 5
//Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
//Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

/*

// In this function we are allowing user to select the day 

void sellStock(int ar[] , int size , int day)
{
	int i,max,max_index,profit;
	max = ar[day-1];
	for(i=day;i<size;i++)
	{
		if(ar[i] > max)
		{
			max = ar[i];
			max_index = i;	
		}
	}
	profit = max - ar[day-1];
	if(profit)
	{
		printf("\nBuy on day %d (price = %d) and sell on day %d (price = %d), profit => %d - %d = %d." , day , ar[day-1] , max_index+1 , max , max , ar[day-1] , profit);	
	}
	else
	{
		printf("\nSorry NO PROFIT :( ");
	}
	
}
*/

void sellStock(int prices[] , int size)
{
	int i,min_index=0,max_index;
	int current_price=prices[0];
	int profit=0;
	for(i=0;i<size;i++)												// Another approach ->  https://takeuforward.org/data-structure/stock-buy-and-sell/
	{
		if(prices[i]<current_price)									// [7,1,5,3,6,4]
		{
			current_price = prices[i];
			min_index = i;
		}
		else if(prices[i]-current_price>profit)
		{
			profit = prices[i]-current_price;
			max_index = i;
		}
	}
//	printf("\nProfit is :- %d" , profit);
	if(profit)
	{
		printf("\nBuy on day %d (price = %d) and sell on day %d (price = %d), profit => %d." , min_index+1 , prices[min_index] , max_index+1 , prices[max_index] , profit);	
	}
	else
	{
		printf("\nSorry NO PROFIT :( ");
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
	int size,i,day;
	printf("C program to find the best day to sell the stocks :- \n");
	printf("Enter size of an array :- ");
	scanf("%d" , &size);
	int prices[size];
	printf("Enter array elements :- ");
	for(i=0;i<size;i++)
	{
		scanf("%d" , &prices[i]);
	}
	printf("Array elements :- ");
	printArray(prices,size);
//	printf("\nEnter the day number whose stock you have purchased and want to sell for profit :- ");
//	scanf("%d" , &day);
//	sellStock(ar,size,day);
	sellStock(prices,size);
}
