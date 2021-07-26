#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include<time.h>
void timer(void);
void read(void);
void bid(void);
int main() 
{

//open input text
    FILE * ifp;
    ifp = fopen("inp1.txt", "r+");

    printf("Welcome to the  Auction Process\n");
    printf("\nPlease view the following items [VIEW] :\n");

    int num = 1;
    int b;
    int c;
    int start1 = 0;
    int start2 = 0;
    int start3 = 0;
    int start4 = 0;
    int start5 = 0;

    int a1, a1m, a2, a2m, a3, a3m, a4, a4m, a5, a5m;
    char choice [20]; 
    char choice1 [20];
    char choice2 [20];

    fscanf(ifp, "%d %d", &a1, &a1m);
    fscanf(ifp, "%d %d", &a2, &a2m);
    fscanf(ifp, "%d %d", &a3, &a3m);
    fscanf(ifp, "%d %d", &a4, &a4m);
    fscanf(ifp, "%d %d", &a5, &a5m);
     

 	unsigned int hrs=0;
	unsigned int mins=0;
	unsigned int secs=0;
	unsigned int milsec=0;
	unsigned int tot=0,count=0,time=0;

	clock_t start,cnt;
	count=10;  // 1 minute is 60, 1 hour is 3600

    start=clock();  // start clock
    time=count-secs;  
    
    printf("\n VIEW THE ITEMS IN THE AUCTION [VIEW] \n");
    scanf("%s", &choice);

  void read()
{
    if (strcmp(choice, "VIEW") == 0) {

            printf("\nNumber    Current Bid    Minimum Increase\n");

            if (start1 < a1){
                printf("1         $%d             $%d\n", start1, a1);
            }
            else{
                printf("1         $%d             $%d\n", start1, a1m);
            }

            if (start2 < a2){
                printf("2         $%d             $%d\n", start2, a2);
            }
            else{
                printf("2         $%d             $%d\n", start2, a2m);
            }

            if (start3 < a3){
                printf("3         $%d             $%d\n", start3, a3);
            }
            else{
                printf("3         $%d             $%d\n", start3, a3m);
            }

            if (start4 < a4){
                printf("4         $%d             $%d\n", start4, a4);
            }
            else{
                printf("4         $%d             $%d\n", start4, a4m);
            }

            if (start5 < a5){
                printf("5         $%d             $%d\n", start5, a5);
            }
            else{
                printf("5         $%d         D    $%d\n", start5, a5m);
            }
        }
}
read();
void timer()
{ 
        unsigned int hrs=0;
	unsigned int mins=0;
	unsigned int secs=0;
	unsigned int milsec=0;
	unsigned int tot=0,count=0,time=0;

	clock_t start,cnt;
	count=10;  // 1 minute is 60, 1 hour is 3600

 
        start=clock();  // start clock
        time=count-secs;  
        while (time>0) 
	{
		cnt=clock(); // update timer difference
		milsec=cnt-start;
		secs=(milsec/(CLOCKS_PER_SEC))-(mins*60);
		mins=(milsec/(CLOCKS_PER_SEC))/60;
		hrs=mins/60;
                time=count-secs; // subtract to get difference 
         }
     printf( "\n\n\nTime's out\n\n\n");
}
void bid()
{
 printf("\n GIVE YOUR BID ON THE ITEM [BID]\n");
     scanf("%s",&choice1);
     if (strcmp(choice1, "BID") == 0) {
            printf("\nWhich item would you like to bid on?\n");
            scanf("%d", &num);

                switch (num) {
                    case 1:
                        printf("The minimum bid is $%d.\n", a1);
                        printf("How much would you like to bid?\n");
                        scanf("%d", &start1);
                        if (start1 < a1){
                            printf("Sorry, that bid is not high enough.\n");
                        }

                     else {

                             a1 = a1+start1;
                             printf("bid is set to $%d\n",a1);
                             printf("10 second(s) to confirm your bid");
                             timer();
                             printf( "\n\n\n Congrats! the bid is sold at $%d\t",a1);
                             }
                   
                        break;
                    case 2:
                        printf("The minimum bid is $%d.\n", a2);
                        printf("How much would you like to bid?\n");
                        scanf("%d", &start2);
                        if (start2 < a2){
                            printf("Sorry, that bid is not high enough.\n");
                        }
     
              else {
                            
                             a2 = a2+start2;
                             printf("bid is set to $%d\n",a2);
                             printf("10 second(s) to confirm your bid");
                              timer();
	                      printf( "\n\n\n Congrats! the bid is sold at $%d\t",a2);
                      }
                    break;
                    case 3:
                        printf("The minimum bid is $%d.\n", a3);
                        printf("How much would you like to bid?\n");
                        scanf("%d", &start3);
                        if (start3 < a3){
                            printf("Sorry, that bid is not high enough.\n");
                        }

                 else {

                             a3 = a3+start3;
                             printf("bid is set to $%d\n",a3);
                             printf("10 second(s) to confirm your bid");
                             timer();
	                     printf( "\n\n\n Congrats! the bid is sold at $%d\t",a3);
                        }
                   break;
                    case 4:
                        printf("The minimum bid is $%d.\n", a4);
                        printf("How much would you like to bid?\n");
                        scanf("%d", &start4);
                        if (start4 < a4){
                            printf("Sorry, that bid is not high enough.\n");
                        }

else {

                             a4 = a4+start4;
                             printf("bid is set to $%d\n",a4);
                             printf("10 second(s) to confirm your bid");
                             timer();
	printf( "\n\n\n Congrats! the bid is sold at $%d\t",a4);
                         }
                   
                      break;
                   case 5:
                        printf("The minimum bid is $%d.\n", a5);
                        printf("How much would you like to bid?");
                        scanf("%d", &start5);
                        if (start5 < a5){
                            printf("Sorry, that bid is not high enough.\n");
                        }

else {

                             a5 = a5+start5;
                             printf("bid is set to $%d\n",a5);
                             printf("10 second(s) to confirm your bid");
                            timer();
	printf( "\n\n\n Congrats! the bid is sold at $%d\t",a5);
                  }

                   break;
                    default:
                        printf("\n");
                }
            }  
}
bid();

// formatting
    printf("\n");

//close file
    fclose(ifp);

//return main
return 0;
}