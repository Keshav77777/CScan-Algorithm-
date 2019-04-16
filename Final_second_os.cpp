#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<windows.h>

int main()


{
	
	int i,j,a,Sum=0,Sum1=0,CurrentPosition,Individual_Distance,Total_Distance=0,Individual_Distance1;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
    printf("\n________________________________________________________\n");
	printf("\n TOTAL Cylinders in DISK : 5000 \n");
	printf(" CURRENT Request of Cylinder : 143 \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
	printf("\n PREVIOUS Request : 125 ");
	printf("\n________________________________________________________\n");
	//it is just showing that is is moving toward positive direction
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
	printf(" \n Elements in FIFO list : \n");
	printf(" 143,86 1470 913 1774 948 1509 1022 1750 130");
	printf("\n________________________________________________________\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),94);
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
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	printf("\n________________________________________________________\n");
	printf("\n CURRENT Position of the pointer in Sorted array : ");
	for(i=0;i<12;++i)
	{
		if(array[i]==143)
	    {
		printf("%d \n",i+1);
	CurrentPosition=i;
	}
}
printf(" INDIVIDUAL Distance from moving CURRENT position to DISK Size (4999) \n\n");	
for(i=CurrentPosition;i<12-1;++i)
{	Individual_Distance=array[i+1]-array[i];
	printf(" %d \n",Individual_Distance);
	Sum=Sum+Individual_Distance;
}

printf("\n DISTANCE from current position to 4999 : %d \n",Sum);
printf("\n________________________________________________________\n");

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
printf("\n INDIVIDUAL distance from moving 0 to Current size\n");
for(i=0;i<CurrentPosition-1;i++)
{
	Individual_Distance1=array[i+1]-array[i];
	printf(" %d \n",Individual_Distance1);
	Sum1=Sum1+Individual_Distance1;
	}
printf(" DISTANCE from 0 to current position : %d \n",Sum1);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
printf("\n________________________________________________________\n");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),94);
Total_Distance=Sum+Sum1;
printf("\n DISTANCE when we don't include the Distance from 4999 to 0 = ");
printf("%d \n",Total_Distance);
printf("\n DISTANCE  when  we  include  the  Distance  from 4999 to 0 = ");
printf("%d ",Total_Distance+4999);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
printf("\n________________________________________________________\n");


}
