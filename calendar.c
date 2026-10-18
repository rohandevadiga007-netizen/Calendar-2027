#include<stdio.h>
int main(){
    int a,b,c,n,j,i=1,d=1;
    printf("Enter the month number of the year 2027\n\n");
    scanf("%d",&n); 

    switch(n)
    {
        case 1:
        a=6;
        b=31;
        break;

         case 2:
        a=2;
        b=28;
        break;

         case 3:
        a=2;
        b=31;
        break;

         case 4:
        a=5;
        b=30;
        break;

         case 5:
        a=7;
        b=31;
        break;

         case 6:
        a=3;
        b=30;
        break;

         case 7:
        a=5;
        b=31;
        break;

         case 8:
        a=1;
        b=31;
        break;

         case 9:
        a=4;
        b=30;
        break;

         case 10:
        a=6;
        b=31;
        break;

         case 11:
        a=2;
        b=30;
        break;

         case 12:
        a=4;
        b=31;
        break;
        default:
        printf("\n INVALID MONTH\n");
        return 0; 
    }
    printf("\n\n");
    printf("\t\t\t Month %d 2027\n\n",n);
    printf("       SUN     MON      TUE     WED    THU    FRI    SAT \n\n");
    switch(a)
    {
        case 1:
        printf("\t%d",i);
        break;

        case 2:
        printf("\t\t%d",i);
        break;

        case 3:
        printf("\t\t\t%d",i);
        break;

        case 4:
        printf("\t\t\t\t%d",i);
        break;

        case 5:
        printf("\t\t\t\t\t%d",i);
        break;

        case 6:
        printf("\t\t\t\t\t\t%d",i);
        break;

        case 7:
        printf("\t\t\t\t\t\t\t%d",i);
        break;
    }
    c=8-a;
    for(int k=2;k<=c;k++){
        printf("\t%d",k);
    }
    printf("\n");
    j = b; 
    d = 1; 
    for(int k=c+1;k<=j;k++){
        if(d==8){
            printf("\n");
            d=1; 
        }
        printf("\t%d",k);
        d++;
    }
    printf("\n\n");
    return 0;
}