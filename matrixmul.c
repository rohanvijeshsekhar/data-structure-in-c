#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[100][100],b[100][100],m[100][100];
int c,r,i,j,k;
printf("enter number of columns");
scanf("%d",&c);
printf("enter number of rows");
scanf("%d",&r);
printf("enter first array elements");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter second array elemtns");
for(i=0;i<r;i++)
{
scanf("%d",&b[i][j]);
}}
printf("matrix multiplication");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
for(k=0;k<c;k++)
{
m[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
print("result is %d\n",m[i][j])
}
printf("\n");
}
return0;
}

