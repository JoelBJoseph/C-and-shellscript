#include<stdio.h>
int main()
{
    int i,j,m,fl=0,a[50],f[50],bno,x,large=0;
    printf("\nEnter the number of blocks: ");
    scanf("%d",&bno);
    printf("Enter the block size: ");
    for(i=0;i<bno;i++)
    {
        scanf("%d",&f[i]);
    }
    printf("\nEnter the starting address: \n");
    for(i=0;i<bno;i++)
        scanf("%d",&a[i]);
    printf("\nBlockNo\t\tAddress\t\tBlockSize");
    for(i=0;i<bno;i++)
        printf("\n%d\t\t%d\t\t%d",i+1,a[i],f[i]);
    do
    {
        printf("\nEnter the size to be allocated: ");
        scanf("%d",&m);
        for(i=0;i<bno;i++)
        {
            if(f[i]>=f[large])
            {
                large=i;
            }
        }
        for(i=0;i<bno;i++)
        {
            if(f[large]>=m)
            {
                fl=1;
                f[large]=f[large]-m;
                a[large]=a[large]+m;
                break;
            }
        }
        if(fl==0)
            printf("Can't allocate\n");
        else
        {
            printf("\nDetails after allocation: ");
            printf("\nBlockNo.\tAddress\t\tBlockSize");
            for(i=0;i<bno;i++)
                printf("\n%d\t\t%d\t\t%d",i+1,a[i],f[i]);
        }
        printf("\nBefore Allocation space available: ");
        printf("\nBlockNo.\t\tAddress\t\tBlockSize");
        for(i=0;i<bno;i++)
        {
            if(f[i]!=0)
            {
                printf("\n%d\t\t%d\t\t%d",i+1,a[i],f[i]);
            }
        }
        printf("\nDo you want to continue 1-YES or 0-NO");
        scanf("%d",&x);
    }while(x!=0);
    return 0;
}