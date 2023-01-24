/*Bajeko Sekwua Menu Book Resturant*/

// Highly Reccommend to use VS CODE 

#include<stdio.h>
#include<stdlib.h>
int cart()
{
    printf("\n********** Bill of Your Choosed Order **********");
    printf("\n\n********** Total Amount is 0");
}
int main()
{
    printf("---------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n|\t\t\t************************************* Welcome to Bajeko Sekuwa Resturant **************************\t\t\t\t|\n|--(:Menu Book:)--\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t---Product---\t\t--Price--\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t1. Buff Sekuwa\t\tRs.90\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t2. Chicken Sekuka\tRs.110\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t3. Chicken Chowmin\tRs.130\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t4. Buff Chowmin\t\tRs.100\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t5. Chicken MOMO\t\tRs.160\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t6. Thakali Khana Set\tRs.350\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t7. Buff Stick\t\tRs.120\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t8. Chicken Stick\tRs.150\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t9. Buff Sukuti\t\tRs.80\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t10. Chicken Sukuti\tRs.100\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|-------------------------------------------------------------------------------------------------------------------------------------------------------|"); 
    int n,i,qun,order;
    float total=0,total_a=0 , total_b=0 , total_c=0 ,total_d=0 ,total_e=0 ,total_f=0 ,total_g=0 ,total_h=0 ,total_j=0 ,total_k=0, total_cart = 0 ;
    printf("\n\nDo you want to exit or order? \n\nFor order press 1 For exit press 0 : ");
    scanf("%d",&order);
    printf("---------------------------------------------------------");
    if (order==0)
    {
        exit(1);
    }
    else 
    printf("\nHow many product you want to order : ");
    scanf("%d",&n);
    printf("---------------------------------------------------------");
    int choice[n];
    
    for (i=0;i<n;i++)
    {
    printf("\nChoose Products between 1-10 : ");
    scanf("%d",&choice);
    printf("----------------------------------------------------------");
        if (*choice == 1)
        {
            printf("\nYou have selected Buff Sekuwa");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_a = total + (qun * 90);
            total = total_a;
            
        }
        else if (*choice == 2)
        {
            printf("\nYou have selected Chicken Sekuwa");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_b = total + (qun * 110);
            total = total_b;
            
        }
        else if ( *choice ==  3)
        {
            printf("\nYou have selected Chicken Chowmin");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_c =total + (qun * 130);
            total = total_c;
            
        }
        else if (*choice == 4)
        {
            printf("\nYou have selected Buff Chowmin");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_d = total + (qun * 100);
            total = total_d;
           
        }
        else if (*choice == 5)
        {
            printf("\nYou have selected Chicken MOMO");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_e = total + (qun * 160);
            total = total_e;
           
        }
        else if (*choice == 6)
        {
            printf("\nYou have selected Thakali Khana Set");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_f = total + (qun * 350);
            total = total_f;
            
        }
        else if (*choice == 7)
        {
            printf("\nYou have selected Buff Stick");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_g = total + (qun * 120);
            total = total_g;
            
        }
        else if (*choice == 8)
        {
            printf("\nYou have selected Chicken Stick");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_h = total + (qun * 150);
            total = total_h;
            
        }
        else if (*choice == 9)
        {
            printf("\nYou have selected Buff Sukuti");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_j = total + (qun * 9800);
            total = total_j;
            
        }
        else if (*choice == 10)
        {
            printf("\nYou have selected Chicken Sukuti");
            printf("\nEnter the quantity : ");
            scanf("%d",&qun);
            printf("---------------------------------------------------------");
            total_k = total + (qun * 100);
            total = total_k;
           
        }
        else if (*choice >= 11)
        {
            cart();
            
        }
    }
        if (*choice == 1 || *choice == 2 || *choice == 3 || *choice == 4 || *choice == 5 || *choice == 6 || *choice == 7 || *choice == 8 || *choice == 9 || *choice == 10 )
        {
            total_cart = total + 0.12*total;
            printf("\n---------------------------------------------------------");
            printf("\n|\t****** Bill of Your Choosed Order ******\t|\n|\t\t\t\t\t\t\t|\n|\tAmount is Rs.%.2f\t\t\t\t|\n|\tGST is Rs.%.2f\t\t\t\t\t|\n|\tTotal Amount after GST is Rs.%.2f\t\t|",total, .12*total,total_cart);
            printf("\n|\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t|\n|\tThank You For Visiting Us\t\t\t|");
            printf("\n---------------------------------------------------------");
        }
    
}


