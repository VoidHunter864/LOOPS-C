#include<stdio.h>
#include<conio.h>
int main()
    {
        int i,j;
        for(i=1;i<=5;i++)
            {
                for(j=1;j<=i;j++)
                    {
                        if(i==j)
                        printf(" 1");
                        else if(j==1)
                        printf(" 1");
                        else if(j==2)
                        printf(" %d",(i-j)+1);
                        else if(j==3)
                            {
                                if ((i+j)<8)
                                printf(" %d",(i+j)+2);
                                else
                                printf(" %d",(i+j)-2);
                            }
                        else if(i==5)
                        printf(" %d",(i+j));        
    
                    } 
                printf("\n");
            }
               
    }