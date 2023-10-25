#include<stdio.h>
int main() {
    int i,j,n;
    
    printf("enter the number of lines");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        
        
        if(j<=5-i || j>=3+i)
        printf("*");
        else
        printf(" ");
        
        printf("\n");
        
    }
    return 0;
}
