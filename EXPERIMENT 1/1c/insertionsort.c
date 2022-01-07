#include<stdio.h>
void insertion_sort(int a[],int n);

int main(){
        int i,a[10],n;
        printf("enter the value of n");
        scanf("%d",&n);
        printf("enter the elements");
        for(i=0;i<n;i++){
          scanf("%d",&a[i]);
        }
        insertion_sort(a,n);
        for(i=0;i<n;i++){
           printf("%d\t",a[i]);
        }
        return 0;
}

void insertion_sort(int a[],int n){
         int i,j,temp;
         for(i=1;i<n;i++){
           temp=a[i];
           j=i-1;
           while(temp<a[j]&&j>=0)
           {
             a[j+1]=a[j];
             --j;
            }
            a[j+1]=temp;
            }
      
}
       
     
      
