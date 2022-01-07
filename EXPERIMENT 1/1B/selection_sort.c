#include<stdio.h>
void selection_sort(int a[],int n);

int main()
{    int i,n;
     int a[10];
     printf("enter the value of n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {   
        scanf("%d",&a[i]);
     }
     selection_sort(a,n);
     for(i=0;i<n;i++)
     {   
        printf("%d\t",a[i]);
     } 
     return 0;
 }
 
 void selection_sort(int a[],int n)
 {
     int i,j,temp,minp;
     for(i=0;i<n-1;i++)
      {  minp=i;
         for(j=i+1;j<n;j++)
         {  
           if(a[j]<a[minp])
           {  
             minp=j;
            }
          }
          if(i!=minp)
          {
            temp=a[i];
            a[i]=a[minp];
            a[minp]=temp;
           }
             
      }
 }     
