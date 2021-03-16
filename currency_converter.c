#include <stdio.h>
#include <stdlib.h>
int main()
{
	float ans,ans1,ans2,ans3,ru;
	int ch;

	printf("\n\n1. Rupees -> Dollars");
	printf("\n\n2. Dollars -> Rupees");
    printf("\n\n3. Dollars -> Bitcoin");
    printf("\n\n4. Rupees -> Bitcoin");
	printf("\n\nEnter your choice= ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\n\nEnter the currency in Rupees= ");
			scanf("%f",&ru);
			ans=ru/160;
			printf("\n\nThe currency in dollars is %.2f$",ans);
			break;
		case 2:printf("\n\nEnter the currency in Dollars= ");
			scanf("%f",&ru);
			ans1=ru*160;
			printf("\n\nThe currency in Rupees is %.2f",ans1);
			break;
		case 3:printf("\n\nEnter the currency in Dollars: ");
            scanf("%f", &ru);
            ans2=ru*0.000018;
            printf("\n\nThe currency in Bitcoin is %.4f", ans2);
            break;
        case 4:printf("\n\nEnter the currency in Rupees: ");
            scanf("%f", &ru);
            ans3=ru*0.001;
            printf("\n\nThe currency in Bitcoin is %.6f", ans3);
	}
  return(0);
}