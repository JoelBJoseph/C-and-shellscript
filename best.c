#include<stdio.h>
int main()
{
    int i,j,m,fl=0,a[50],f[50],nb,x,small=500,best;
    printf("\nEnter the number of blocks: ");
    scanf("%d",&nb);
    printf("Enter the address and size of each blocks:: ");
    for(i=0;i<nb;i++)
    {
        scanf("%d%d",&a[i],&f[i]);
    }
    printf("\nBlockNO. \tAddress \tfree space:\n");
    for(i=0;i<nb;i++)
    {
        printf("%d\t\t%d\t\t%d\n",(i+1),a[i],f[i]);
    }
    do
    {
        printf("Enter the space you want to allocate: ");
        scanf("%d",&m);
        for(j=0;j<nb;j++)
        {
            x=f[j]-m;
            if(x>=0)
            {
                if(x<small&&x!=0)
                {
                    best=j;
                    small=x;
                    fl=1;
                }
                else if(x==0)
                {
                    best=j;
                    small=x;
                    fl=1;
                    break;
                }
            }
        }
        if(fl==1)
        {
            f[best]=f[best]-m;
            a[best]=a[best]+m;
        }
        else
        {
            printf("Can't allocate\n");
        }
        printf("\nBlockNo. \tAddress \tFree space\n");
        for(i=0;i<nb;i++)
        {
            if(f[i]!=0)
            {
                printf("%d\t\t%d\t\t%d\n",(i+1),a[i],f[i]);
            }
        }
        fl=0;
        small=500;
        best=0;
        printf("\nDo you want tot continue 1-YES or 0-NO: ");
        scanf("%d",&x);
    }while(x!=0);
    return 0;
}    