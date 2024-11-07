#include <stdio.h>

int electricBill(int customerID,char *customerName,float unitConsumed,float surcharge,float charges,float totalbill){
	return totalbill=unitConsumed*charges;
	return surcharge=(15/100)*totalbill;
	return totalbill>=100;
}
int main()
{int customerID;
 char customerName[20];
 float unitConsumed;
 float surcharge;
 float charges;
 float totalbill;
printf("Enter customerID:\n");
	scanf("%d",&customerID);
	printf("Enter customerName:\n");
	scanf("%s",&customerName);	
	printf("Enter unitConsumed:\n");
    scanf("%f",&unitConsumed);
    
		if(unitConsumed<=199){charges=1.20;}
	else if(unitConsumed<=400){charges=1.50;}
	else if(unitConsumed<=600){charges=1.80;}
	else{charges=2.00;}
	printf("charges per unit:%f\n",charges);		
	
    totalbill=(unitConsumed*charges);
    printf("totalbill is %.2f*%.2f=%f\n",unitConsumed,charges,totalbill);
    if(totalbill<100){printf("Sorry the minimumbill is 100");}	
		surcharge=(15/100)*totalbill;
	if(totalbill>400){printf("surcharge %f\n",surcharge);}
	return 0;
}