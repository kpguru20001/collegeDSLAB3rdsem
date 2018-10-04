#include<stdio.h>
#include<malloc.h>
void main()
{
    int *a[10],*b[10],*c[10],m,n,p,q,i,j,k;
    printf("enter size of A\n");
    scanf("%d %d",&m,&n);
    start:
    printf("enter size of B\n");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {   
        printf("Error");
        goto start;
    }
    for(i=0;i<m;i++)
    {   
        a[i]=(int*)malloc(m*n*sizeof(int));
        c[i]=(int*)malloc(m*n*sizeof(int));
    }           
    for(i=0;i<m;i++)
    {
        b[i]=(int*)malloc(p*q*sizeof(int));
        printf("enter elements of A\n");
        for(i=0;i<p;i++)
        {    for(j=0;j<n;j++)
               
                scanf("%d",a[i]+j);
            
        }
    }
    printf("enter elements of B\n");
    for(i=0;i<m;i++)
        for(j=0;j<q;j++)
        {
            scanf("%d",b[i]+j);
        }
    for(i=0;i<m;i++)
        for(j=0;j<q;j++)
        {  
            *(c[i]+j)=0;
            for(k=0;k<n;k++)
                *(c[i]+j)+=*(a[i]+k)*(*(b[k]+j));
        }
    printf("product of matrices is\n");
    for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            printf("%d",*(c[i]+j));
            printf("\n");
        }
}
