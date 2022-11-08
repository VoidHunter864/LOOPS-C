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
                        printf(" 0");
                        else if((i-j)==1)
                        printf(" %d",i+j);
                        else if((i-j==2))
                        printf(" %d",(i+j)*2);
                        else if((i-j==3))
                        printf(" %d",(i+j)*3);
                        else
                        printf(" %d",(i+j)*4);
                    }
                printf("\n");
            }
    }