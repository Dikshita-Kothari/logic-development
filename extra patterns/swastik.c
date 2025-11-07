/*
 *              *  *  *  *  *  * 
 *              *                
 *              *                
 *              *                
 *              *                
 *  *  *  *  *  *  *  *  *  *  * 
                *              * 
                *              * 
                *              * 
                *              * 
 *  *  *  *  *  *              * 
*/

#include <stdio.h>
int main()
{
    int i,j,m=11;
    int h = (m%2==0)?m/2:(m/2)+1;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            if(j==1 && i<=h) printf(" * ");
            else if(i==1 && j>h) printf(" * ");
            else if(i==h) printf(" * ");
            else if(j==h) printf(" * ");
            else if(j==m && i>=h) printf(" * ");
            else if(i==m && j<=h) printf(" * ");
            else printf("   ");
        }
        printf("\n");
    }

    return 0;
}