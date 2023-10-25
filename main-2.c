#include<stdio.h>
int main() {
    
    int i,j,k,n;
    printf("Emter the number of lines");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        
        if(j>=i && j<=8-i) 
        {
        printf("%c",64+k);
        j<4? k++ :k--;
        }
        else 
        printf(" ");
        
        printf("\n");
    }
    return 0;
    
}