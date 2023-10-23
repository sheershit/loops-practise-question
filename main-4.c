#include<stdio.h>
int main() {
    int i,j,k;
    
    for(i=1;i<=4;i++)
    {
        k=1; // take third variable
        for(j=1;j<=7;j++):
        
        if(j>=5-i && j<=4-i) {
            
            if(k) {
            printf("*");
            k=1-k;// k ki value ko alternate kar diya 
            }
            else {
            printf(" ");
            k++;
            
        }
        
        else 
        printf(" ");
        
        printf("\n")
        
    }
}
