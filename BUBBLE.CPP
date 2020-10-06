#include<iostream.h>
#include<conio.h>
void bubble(int[], int);     // function prototype
void main()
{
 clrscr();
 int a[100], s;
 cout<<"\n\t\t\t BUBBLE SORT";
 cout<<"\n Enter the size(max 100):: ";
 cin>>s; // size of array
 cout<<"Enter the array:: ";
 for(int i=0;i<s;i++)
	cin>>a[i];       // array
 bubble(a,s); // function calling
 getch();
 }


 void bubble(int a[], int s)     // function defination
 {
	int temp;
	for(int i=0;i<s-1;i++)
	 {
		int flag=0;// reducing time complexity from o(n square)
		 for(int j=0;j<s-1-i;j++)
		 {     // largest element will always shifted to ends
			// so loop condition is s-1-i

			// swapping
			if(a[j]>a[j+1])
			{
				flag=1;
				temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
		       }

		 }
					 if(flag==0) break;
	 }
 cout<<"the sorted array are:";
 // display array
 for(int j=0;j<s;j++)
	cout<<a[j];
 }

