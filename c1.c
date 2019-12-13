

//Dirshe Salat


#include <stdio.h>

//menu function

void menu()
{
printf("Welcome to Restaurant #1\n");
printf("May I take your order? \n\n");
 
    
        printf("menu: \n\n");
	    printf("1.\tCheese Platter:\t\t$23\n");

		printf("2.\tFrench Onion Soup:\t$16\n");

		printf("3.\tRibEye:\t\t\t$70\n");

		printf("4.\tFleur Burger 5000:\t$5000\n");
		
		printf("0. \tExit\n\n");

	}

	int main()

	{

		//array for prices

		int prices[] = {0, 23, 16, 70, 5000};

		//toatl price

		float totalcost =0;
		float tax,tip;

	
		
		
		

		//display menu

		menu();

		printf("\nPlease order using 1-4. Press '0' When done ordering: \n");

	   
	//ordering loop
		while (1)

		{

			printf("Enter item number: ");

			int current_item;

			scanf("%d", &current_item);

			if (current_item > 4 || current_item <= 0)

			{

				break;

			}

			totalcost += prices[current_item];

		}
	
//tax calculation
tax = 8.25*totalcost / 100;
  
//tip calculation
tip = 20*totalcost / 100;
  
 
 float totalbill = totalcost + tax + tip;   
//Printing total/tax/tip
    printf("Meal Cost: %.2f\n", totalcost);
    printf("Tax: %.2f\n", totalcost*0.0825);
    printf("Tip: %.2f\n", totalcost*.20);
    printf("Total bill: %.2f\n", totalcost + tax + tip);
    return 0;
}

