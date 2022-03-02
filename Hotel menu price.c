#include <stdio.h>
//Oreder what u want to eat.......
int main()
 {
 	int ch;
 	float total,cgst,sgst,Ftotal;
 	menu:
 		printf(".......Welcome to our Hotel ....");
 	printf("\nHello sir nice to meet u");
 	printf("\nWhat would you like to have");
 	
 	printf("\n1-Starters\n2-veg\n3-Non veg\n4-Chinese\n5-South indian Dishes\n6-Rice\n7-Desserts");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	if(ch==1)//starters
	{
		Starters:
	printf("\n------------Welcome to Starters----------------");
	printf("\n1-Paneer chilli - Rs.150\n2-Vada pav - \t Rs.15\n3-Panipuri - \t Rs.20");
	printf("\nEnter your choice sir:");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("'Paneer chilli is order is placed'");
		total=total+150;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Paneer chilli\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}
	else if(ch==2)
	{
		printf("'Vada Pav order is placed'");
		total=total+15;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Vada Pav\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}	
	else if(ch==3)
	{
		printf("Panupuri order is Placed");
		total=total+20;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Pani Puri\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
		}	
		printf("\nDo you want to continue starters press 1");
		scanf("%d",&ch);
		if (ch==1)
		{
			goto Starters;
		}
	}	
	else if(ch==2)//veg menu..
	{
		vegmenu:
		printf("\n--------------Veg Menu----------");
		printf("\n1-Bhendi Masala - Rs.200\n2-Aloo Paratha - Rs.90\n3-Matar paneer - Rs.150");
		printf("\nEnter your choice sir:");
		scanf("%d",&ch);
			if(ch==1)
	{
		printf("Bhendi Masala is order is placed");
		total=total+200;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Bhendi Masala\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}
	else if(ch==2)
	{
		printf("Aloo Paratha order is placed");
		total=total+90;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Aloo Paratha\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}	
	else if(ch==3)
	{
		printf("Matar Paneer order is Placed");
		total=total+150;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Matar Paneer\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
		}	
		printf("\nDo you want to continue veg menu press 1");
		scanf("%d",&ch);
		if (ch==1)
		{
			goto vegmenu;
		}
	}
	else if(ch==3)//non veg
	{
		nonveg:
		printf("\n-------------- Non Veg Menu----------");
		printf("\n1-Eggs- Rs.35\n2-Fish - Rs.75\n3-chicken - Rs.250");
		printf("\nEnter your choice sir:");
		scanf("%d",&ch);
			if(ch==1)
	{
		printf("Eggs  order is placed");
		total=total+35;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Eggs\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}
	else if(ch==2)
	{
		printf("Fish order is placed");
		total=total+75;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Fish\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}	
	else if(ch==3)
	{
		printf("Chicken order is Placed");
		total=total+250;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Chicken\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
		}	
		printf("\nDo you want to continue nonveg menu press 1");
		scanf("%d",&ch);
		if (ch==1)
		{
			goto nonveg;
		}
	}
	
	else if(ch==4)//Chinese
	{
		Chinese:
	printf("\n------------Chinese Section----------------");
	printf("\n1-Noodles - Rs.90\n2-Manchurian  - Rs.120\n3-Momos - Rs.150");
	printf("\nEnter your choice sir:");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Noodles is order is placed");
		total=total+90;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Noodles\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}
	else if(ch==2)
	{
		printf("Manchurian order is placed");
		total=total+120;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Manchuriran\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}	
	else if(ch==3)
	{
		printf("Momos order is Placed");
		total=total+150;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Momos\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
		}	
		printf("\nDo you want to continue Chinese press 1");
		scanf("%d",&ch);
		if (ch==1)
		{
			goto Chinese;
		}
	}
	
	else if(ch==5)//South indian Dishes
	{
		SouthindianDishes:
	printf("\n------------South Indian Dishes----------------");
	printf("\n1-Dosa - Rs.80\n2-Mendu Vada - Rs.45\n3-Utappa - Rs.70");
	printf("\nEnter your choice sir:");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Dosa is order is placed");
		total=total+80;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Dosa\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}
	else if(ch==2)
	{
		printf("Mendu Vada order is placed");
		total=total+45;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Mendu Vada\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}	
	else if(ch==3)
	{
		printf("Utappa order is Placed");
		total=total+70;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Utappa\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
		}	
		printf("\nDo you want to continue South indian Dishes press 1");
		scanf("%d",&ch);
		if (ch==1)
		{
			goto SouthindianDishes;
		}
	}
	
	else if(ch==6)//Rices
	{
	 Rice:
	printf("\n------------Rice----------------");
	printf("\n1-Veg Biryani - Rs.100\n2-Veg Fried Rice - Rs.150\n3-Tawa pulao - Rs.80");
	printf("\nEnter your choice sir:");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Veg Biryani is order is placed");
		total=total+100;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Veg Biryani\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}
	else if(ch==2)
	{
		printf("Veg Fried Rice order is placed");
		total=total+150;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Fried Rice\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}	
	else if(ch==3)
	{
		printf("Tawa pulao order is Placed");
		total=total+80;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Tawa pulao\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
		}	
		printf("\nDo you want to continue Rices press 1");
		scanf("%d",&ch);
		if (ch==1)
		{
			goto Rice;
		}
	}
	else if(ch==7)//Desserts
	{
		Dessert:
	printf("\n------------Desserts----------------");
	printf("\n1-Ice Cream - Rs.35\n2-Pastries - Rs.25\n3-Gulab Jamuns - Rs.50");
	printf("\nEnter your choice sir:");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Ice cream is order is placed");
		total=total+35;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Ice cream\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}
	else if(ch==2)
	{
		printf("Pastries order is placed");
		total=total+25;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Pastries\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
	}	
	else if(ch==3)
	{
		printf("Gulab Jamuns order is Placed");
		total=total+50;
		cgst=total*0.06;
		sgst=total*0.06;
		Ftotal=total+cgst+sgst;
		printf("\n--------------------------Bill-----------------------");
		printf(" \n Gulab Jamun\ttotal\tcgst\tsgst\tFtotal");
		printf("\n-----------------------------------------------------");
		printf("\n\t\t%.2f\t%.2f\t%.2f\t%.2f",total,cgst,sgst,Ftotal);
		}	
		printf("\nDo you want to continue Dessertss press 1");
		scanf("%d",&ch);
		if (ch==1)
		{
			goto Dessert;
		}
	}				
 	
 	
 	printf("\nDo you want to go to main menu press 1");
 	scanf("%d",&ch);
 	if(ch==1)
 	{
 		goto menu;
	 }
	 printf("\n*****************Thank you************************");
	 printf("\n---------------Visit Again---------------------");
	return 0;
}
