#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

char ch[10][130]={"Royal Ordinary (Pondicherry <-> Chennai)","Royal Express (Chennai <-> Madurai)","Royal Business Express (Tirupur <-> Kerala)","Royal Cheaters Express (Kerala <-> Bangalore)","Royal Ultra Delax (Bangalore <-> Kanyakumari)","Royal Turbo Express(Mumbai <-> Chennai)"};
char name[32][100]={'\0'};
char number[32][2]={'\0'};
int num1[32]={0};
int trno;
int anumber;

void bus();											//for list of bus
void name_number(int booking,char numstr[100]);
void booking();										//for booking the tickets
int read_number(int trno);							//for reading the number from the file
void read_name(int trno);							//for reading the name from the file
void status();										//for printing the status by user input
void status_1(int trno);							//for printing the status while booking ticket
void cancel();
void login();

int main()
	{
		login();	
    	int num,i;
    	do{
    	system("cls");
    	
		{
			time_t t;
			time(&t);
			printf("Today Date and Time is %s",ctime(&t));
		}
    	printf("\n\n\n");
   		printf("====================================== WELCOME TO BUS RESERVATION SYSTEM ======================================");
   		printf("\n\t\t\t\t\t==== WELCOME TO ROYAL TRANSPORT ====  ");
    	printf("\n\t\t\t\t\t-------------------------------------------\n");
		printf("\t\t\t\t\t| S.No | Setup Process                    |\n");
    	printf("\t\t\t\t\t-------------------------------------------\n");
    	printf("\t\t\t\t\t| [1]  | => Bus Detail                    |");
    	printf("\n");
    	printf("\t\t\t\t\t| [2]  | => Searching and Booking Ticket  |");
    	printf("\n");
    	printf("\t\t\t\t\t| [3]  | => Bus Status Board              |");
    	printf("\n");
    	printf("\t\t\t\t\t| [4]  | => Cancel Booking                |");
    	printf("\n");
    	printf("\t\t\t\t\t| [5]  | => Exit                          |");
    	printf("\n");
    	printf("\t\t\t\t\t-------------------------------------------\n");
    	printf("===============================================================================================================\n\n");
    	printf("\t\t\tEnter Your Choice:: ");
    	scanf("%d",&num);
    	switch(num)
    	{
    		case 1:
        		bus();//for list of bus
        		break;
    		case 2:
        		booking();//for booking the tickets
        		break;
    		case 3:
        		status();
        		break;
    		case 4:
        		cancel();
        		break;
    		case 5:
        		printf("Thank You !! Visit it again !!");
    			break;
     	}
	getch();
    	}while(num != 6);
    	system("CLS");
    	printf("\t----------------------------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\t\tThank You For Using This System\t\t\t\t\t\t\n");
    	printf("\t----------------------------------------------------------------------------------------------------------\n");
    	getch();
    	return 0;
	}


	void bus()
	{
    	system("cls");
    	printf("\n\n\n");
    	printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");
    	printf("*********************************************************************************************************************");
		printf("\n\t\t\t\t\t~ S.No | Type of Bus Avability in Company |\n");
    	printf("\t\t\t\t\t|[1]  |  =>  %s",ch[0]);
    	printf("\n");
    	printf("\t\t\t\t\t|[2]  |  =>  %s",ch[1]);
    	printf("\n"); 
		printf("\t\t\t\t\t|[3]  |  =>  %s",ch[2]);
    	printf("\n"); 
		printf("\t\t\t\t\t|[4]  |  =>  %s",ch[3]);
    	printf("\n"); 
		printf("\t\t\t\t\t|[5]  |  =>  %s",ch[4]);
		printf("\n*********************************************************************************************************************");
		printf("\n Press any key to continue");
	}

	void booking()
	{
		int conti,y,n;
		int time, Maleadult, Femaleadult, Malechildren, Femalechildren;
		char from[10], to[10], Serviceclass[10];
		long date;
    	int i=0;
    	char a[20];
		char cvv_number[3];
		int bank_name, payment_name, price, gst=0, total=0, j;
    	char numstr[100];
		system("cls");

		printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");//for entering train number
		bus();
		printf("\n\nEnter the Bus number:--->");
		scanf("%d",&trno);

		// :: Getting Detials About the Passengers :: //
		printf("\t\tEnter City From		: ");
		scanf("%s",&from);
	
		printf("\t\tEnter City To		: ");
		scanf("%s",&to);
	
		printf("\t\tEnter Journey Date (DD/MM/YYYY)		: ");
		scanf("%ld",&date);
	
		printf("\t\tEnter Time		: ");
		scanf("%d",&time);
	
		printf("\t\tEnter No of Adult Male	: ");
		scanf("%d",&Maleadult);
	
		printf("\t\tEnter No of Adult Female	: ");
		scanf("%d",&Femaleadult);
		
		printf("\t\tEnter No of Children Male	: ");
		scanf("%d",&Malechildren);
	
		printf("\t\tEnter No of Children Female	: ");
		scanf("%d",&Femalechildren);
	
		printf("\t\tEnter you need Service class		: ");
		scanf("%s",&Serviceclass);
	

		printf("~---------------------------------------------------~\n");
		printf("| Search And Book Tickets	   		    |\n");
		printf("|---------------------------------------------------|\n");
		printf("| From :         |	%s	         	    |\n",from);
		printf("| To   :         |	%s				    \n",to);
		printf("|---------------------------------------------------|\n");
		printf("| Journey Date : |	%ld	  Time:	%d	    |\n",date,time);
		printf("|---------------------------------------------------|\n");
		printf("| Adult:         | Male/s: %d	      Female/s: %d   |\n",Maleadult,Femaleadult);
		printf("| Children:      | Male/s: %d 	      Female/s: %d   |\n",Malechildren,Femalechildren);
		printf("|---------------------------------------------------|\n");
		printf("| Service Class: | 	%s								|\n",Serviceclass);
		printf("~--------------------------------------------------~\n");
		
		printf("\n\nIf The Given statement are then press Y else press N button ");
		printf("\nPress the Button to continue Yes (Y) or No (N) : ");
		scanf("%s",&conti);
	
		if (conti==y)
			{
				printf("The proceeding Next Step pls wait..... ");
				printf("Press any Key to next ");
			}
		else 
			{
				printf("Try again Later....");
			} 
	
		system("cls");
		printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");//for selecting coach
		printf("Your Bus Number is %d ********** %s",trno,ch[trno-1]);
		status_1(trno);
 		FILE *f1, *fopen();//for reading the seats from the user.
 		char str1[80]="32",str2[4],str3[4];
 		int seat1,seat2,booking=0;
		if(trno == 1)
			{
				 f1 = fopen("tr1.txt","r+");
				 fgets(str1,80,f1);
				 fclose(f1);
			}	
		else if(trno == 2)
			{
 				f1 = fopen("tr2.txt","r+");
 				fgets(str1,80,f1);
 				fclose(f1);
			}
			else if(trno == 3)
				{
 					f1 = fopen("tr3.txt","r+");
 					fgets(str1,80,f1);
 					fclose(f1);
				}
				else if(trno == 4)
					{
 						f1 = fopen("tr4.txt","r+");
 						fgets(str1,80,f1);
 						fclose(f1);
					}
					else if(trno == 5)
						{
 							f1 = fopen("tr5.txt","r+");
 							fgets(str1,80,f1);
 							fclose(f1);
						}
		seat1=atoi(str1);//covert the string into number
		if(seat1 <= 0)
			{
 				printf("There is no blank seat in this bus ");
			}
		else
			{
				printf("\n\n\n\t\t\t\tAvailable Seats:------>%d\n",seat1);
				printf("\n\t\t\t\tNumber of Tickets:----->");
				scanf("%d",&booking);
				printf("\n");

				seat1=seat1-booking;
				itoa(trno,numstr,10);
				name_number(booking,numstr);
				itoa(seat1, str1, 10);
				//for reading the seats from the user.
				if(trno == 1)
					{
						 f1 = fopen("tr1.txt","w");
						 fputs(str1,f1);
						 fclose(f1);
					}
				else if(trno == 2)
					{
						 f1 = fopen("tr2.txt","w");
 						 fputs(str1,f1);
						 fclose(f1);
					}
					else if(trno == 3)
						{
							 f1 = fopen("tr3.txt","w");
							 fputs(str1,f1);
							 fclose(f1);
						}
						else if(trno == 4)
							{
								 f1 = fopen("tr4.txt","w");
								 fputs(str1,f1);
								 fclose(f1);
							}
							else if(trno == 5)
								{
									 f1 = fopen("tr5.txt","w");
									 fputs(str1,f1);
									 fclose(f1);
								}
			}
			
			printf("\n\t\t Billing Software System \n");
			printf("\n\t\t*******************************************");
	
			printf("\n\t\tEnter the Bank Name : ");
			scanf("%s",&bank_name);
			printf("\n\t\tMode of Payment : 1. NET - Online :: 2. NET - Offline ");
			printf("\n\t\tEnter the number - Mode of Payment : ");
			scanf("%s",&payment_name);
	
			printf("\n\t\t|*******************************************\n");
			{
			
				
					
					printf("\n\t\t|*******************************************\n");
					printf("\t\t|Enter the Name of Card Holder: ");
					scanf("%s",&a);
					printf("\t\t|Enter the amount price: ");
					scanf("%d",&price);
					printf("\t\t|Enter CVV no:");
					for(j=0;j<2;j++) 
  					{ 
   						cvv_number[j]=getch(); 
   						printf("*");   	 
  					} 
  					cvv_number[j]='\0'; 
	
					scanf("%d",&cvv_number);
	
					printf("\t\t|*******************************************\n");
				
	
				/*else 
				{
					printf("\n\t\t|*******************************************\n");
					printf("\t\t|Enter the user Name: ");
					printf("%s", &a);
					printf("\n\t\t|Enter the amount paid: ");
					printf("%d", &price);
					printf("\n\t\t|*******************************************\n");	
					
					//calculation:
					gst = ((price/100)*5);
					total = price +gst;
				}*/
			
 			//calculation:
			gst = ((price/100)*5);
			total = price +gst;
			}
	
	printf("\n\n\t\t Billing Address Payment Receipt ");
	printf("\n\t\t*******************************************");
	printf("\n\t\t Item		Price		GST		TOTAL\n ");
	printf("\n\t\t %s		%d		 %d		 %d", a,price,gst,total);
	printf("\n\t\t*******************************************\n");
	
	printf("\n\t\t Thank you! Visit it again ! Have a Safe journey 2021 ! \n");
	
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t \\// POWDER BY\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ||| BILLDESK Ltd..,\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t //\\ \n");
	
	}
	
		

	void name_number(int booking,char numstr[100])
	{
	char tempstr[100],tempstr1[12]="status",tempstr2[12]="number";
	int number;
    	FILE *a,*b;
    	int i=0;
   		strcat(numstr,".txt");
   		strcat(tempstr1,numstr);
   		strcat(tempstr2,numstr);
   		a = fopen(tempstr1,"a");//for open the file to write the name in the file
   		b = fopen(tempstr2,"a");//for open the file for writing the number in the file
		for(i=0; i<booking; i++)//for entering the person name and seat number in the file
		{
    		printf("============================Enter the details for ticket no %d============================\n\n\n",i+1);
      		printf("\t\t\t\tEnter the seat number:--->");
      		scanf("%d",&number);
      		printf("\t\t\t\tEnter the name of person:--->");
      		scanf("%s",name[number-1]);
    		printf("\n======================================================================================================\n\n");
    		printf("\n");
      		itoa(number, tempstr, 10);
      		fprintf(a,"%s ",name[number-1]);
      		fprintf(b,"%s ",tempstr);
		}
		
		fclose(a);
		fclose(b);
	}



	int read_number(int trno)//for putting the numeric value in the array
	{
	char tempstr[100],tempstr2[12]="number";
	FILE *a,*b;
	char numstr[100];
	int i=0,j=0,k;
	itoa(trno,numstr,10);
	strcat(numstr,".txt");
	strcat(tempstr2,numstr);
	a = fopen(tempstr2,"a+");//for open the file to write the name in the file
   	while(!feof(a))
   	{
      number[i][j] = fgetc(a);

      if(number[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
      j++;
      }
   }
   k=i;
   for(i=0; i<k; i++)
   {
       num1[i] = atoi(number[i]);
   }
   fclose(a);
   return k;
}


	void read_name(int trno)//for putting the numeric value in the array
	{
	char tempstr1[12]="status";
	FILE *b;
	char numstr[100];
	int i=0,j=0,k=0;
	itoa(trno,numstr,10);
	strcat(numstr,".txt");
	strcat(tempstr1,numstr);
	b = fopen(tempstr1,"a+");//for open the file to write the name in the file
   	while(!feof(b))
   	{	
      name[i][j] = fgetc(b);

      if(name[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
        j++;
      }

   }
   name[i][j]='\0';
   k=i;
   fclose(b);
}

	void status()
	{
	system("cls");
	printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");
    int i,trno,index=0,j;
    printf("Enter the number of bus:---->");
    scanf("%d",&trno);
    j=read_number(trno);
    read_name(trno);
    printf("____________________________________________________________________________________________________________________\n");
    printf("                                      Bus.no-->%d---->%s                                                            \n",trno,ch[trno-1]);
    printf("____________________________________________________________________________________________________________________\n");
    char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    for(i=0; i<j; i++)
    {
        strcpy(tempname[num1[i]],name[i]);
    }
    for(i=0; i<8; i++)
    {
        printf("\t\t\t\t");
        for(j=0; j<4; j++)
            {
        printf("%d.%s\t",index+1,tempname[index+1]);
        index++;
            }
            printf("\n");
    }
}

	void status_1(int trno)
	{
    	printf("Your Bus Number is %d ********** %s",trno,ch[trno-1]);
    	system("cls");
	printf("=========================================== BUS RESERVATION SYSTEM ============================================\n\n\n");
    	int i,index=0,j;
    	j=read_number(trno);
    	read_name(trno);
    	char tempname[33][10]={"Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty ","Empty "};
    	for(i=0; i<j; i++)
    	{
        	strcpy(tempname[num1[i]],name[i]);
    	}
    	for(i=0; i<8; i++)
    	{
        	printf("\t\t\t\t");
        	for(j=0; j<4; j++)
            	{
        	printf("%d.%s\t",index+1,tempname[index+1]);
        	index++;
            	}
            	printf("\n");
		}
	}

	void cancel()
	{
 		int seat_no,i,j;
 		char numstr[100],tempstr2[15]="number",tempstr1[15]="status";
 		printf("Enter the bus number:---->");
 		scanf("%d",&trno);
 		itoa(trno,numstr,10);
 		strcat(numstr,".txt");
 		strcat(tempstr1,numstr);
 		strcat(tempstr2,numstr);
 		read_number(trno);
 		read_name(trno);
 		status_1(trno);
 		printf("Enter the seat number:--->");
 		scanf("%d",&seat_no);
 		FILE *a,*b;
 		a = fopen(tempstr1,"w+");
 		b = fopen(tempstr2,"w+");
 		for(i=0; i<32; i++)
 		{
     		if(num1[i] == seat_no)
     		{
         		for(j=0; j<32; j++)
         		{
             		if(num1[j] != seat_no && num1[j] != 0)
             		{
                 		fprintf(b,"%d ",num1[j]);
                 		fprintf(a,"%s",name[j]);
             		}
             		else if(num1[j] == seat_no && num1[j] != 0)
             		{
                 		strcpy(name[j],"Empty ");
             		}
         		}
     		}
 		}
		fclose(a);
		fclose(b);
		printf("\n\n");
    	printf("======================================================================================================\n");
 		printf("\t\t\t\tRupees 300 has been Returned\t\t\t\n");
    	printf("======================================================================================================\n");
	}

	void login()
	{
		int a=0,i=0;
    	char uname[10],c=' '; 
    	char pword[10],code[10];
    	char user[10]="user";
    	char pass[10]="pass";
    	do
		{
		system("cls");
	
    	printf("\n  =========================  LOGIN FORM  =========================  ");
    	printf("\n\t\t==== WELCOME TO ROYAL TRANSPORT ====  ");
    	printf("\n\tNOTE : Only Admin / User can Login in this Page.....");
    	printf(" \n\n\t\tENTER USERNAME: ");
		scanf("%s", &uname); 
		printf(" \t\tENTER PASSWORD: ");
		while(i<10)
		{
	    	pword[i]=getch();
	    	c=pword[i];
	    	if(c==13) break;
	    	else printf("*");
	    	i++;
		}
		pword[i]='\0';
		//char code=pword;
		i=0;
		//scanf("%s",&pword); 
			if(strcmp(uname,"user")==0 && strcmp(pword,"pass")==0)
		{
			printf("  \n\n\n\t\t\tWELCOME TO OUR SYSTEM !!!! LOGIN IS SUCCESSFUL");
			printf("\n\n\n\t\t\t\tPress any key to continue...");
			getch();//holds the screen
			break;
		}
		else
		{
			printf("\n\n\n\t\t\tSORRY !!!!  LOGIN IS UNSUCESSFUL");
			a++;
		
			getch();//holds the screen
		
		}
	}
		while(a<=2);
		if (a>2)
		{
			printf("\nSorry you have entered the wrong username and password for four times!!!");
		
			getch();
		}
		system("cls");	
}
