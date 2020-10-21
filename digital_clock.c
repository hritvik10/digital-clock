#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i,h,m,s,a,b;
	printf("set the clock:\n");
	printf("enter hours:");
	scanf("%d",&a);
	printf("enter minutes:");
	scanf("%d",&b);
	double j;
        for(h=a;h<12;h++)
        {	
		for(m=b;m<60;m++)
			{	
				for(s=0;s<60;s++)
					{	
						for(j=0;j<73559900;j++)
						{
						j++;
						j--;
						}system("clear");
						printf("\n\n\n\t\t\t%dhours:%dminutes:%dseconds\n",h,m,s);	
		
					}
				
			}
	b=0;
		
	}
	a=0;
}

