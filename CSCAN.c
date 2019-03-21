#include<stdio.h>
#include<conio.h>
int main()
{	int i,j,a,Sum=0,Sum1=0,CurrentPosition,Individual_Distance,Total_Distance=0,Individual_Distance1;
	printf("Number of Disc in the cylinder: 5000 \n");
	printf("Current request of the cylinder : 143 \n");
	printf("Previous request : 125 \n");
	//it is just showing that is is moving toward positive direction
	printf("Elements in FIFO list : \n");
	printf("143,86 1470 913 1774 948 1509 1022 1750 130");
	int array[15]={143,86,1470,913,1774,948,1509,1022,1750,130,4999,0};   //also store boundary value
	int min=array[0];
	for(i=0;i<12;++i)
	{
		for(j=i+1;j<12;++j)
		{
			if(array[i]>array[j])
			{
				a=array[i];
				array[i]=array[j];
				array[j]=a;
			}
		}
	}
	printf("\nElements in Sorted form: ");
	for(i=0;i<12;++i)
	{
		printf("%d \t",array[i]);
	}
	printf("\nCurrent position of the pointer in sorted array : ");
	for(i=0;i<12;++i)
	{
		if(array[i]==143)
	    {
		printf("%d \n",i+1);
	CurrentPosition=i;
	}
}
printf("Individual distance from moving current position to disc Size(4999) \n");	
for(i=CurrentPosition;i<12-1;++i)
{	Individual_Distance=array[i+1]-array[i];
	printf("%d \n",Individual_Distance);
	Sum=Sum+Individual_Distance;
}
printf(" Distance from current position to 4999 : %d \n",Sum);
printf("Individual distance from moving 0 to Current size\n");
for(i=0;i<CurrentPosition-1;i++)
{
	Individual_Distance1=array[i+1]-array[i];
	printf("%d \n",Individual_Distance1);
	Sum1=Sum1+Individual_Distance1;
	}
printf(" Distance from 0 to current position : %d \n",Sum1);

Total_Distance=Sum+Sum1;
printf("Distance when we don't include the distance from 4999 to 0: \n");
printf("%d \n",Total_Distance);
printf("Distance when we include the distance from 4999 to 0: \n");
printf("%d ",Total_Distance+4999);
	


}
