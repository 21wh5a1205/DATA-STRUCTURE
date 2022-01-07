#include<stdio.h>
int binary_search_rec(int a[],int l,int h,int key);

int main(){
         int a[10];
         int i,pos,key,n,l,h;
         printf("enter the value of n");
         scanf("%d",&n);
         printf("enter the elements in array");
         for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            }
         printf("enter the key");
         scanf("%d",&key);
         pos=binary_search_rec(a,0,n-1,key);
         if(pos>=0)
          printf("element found at %d pos",pos);
         else
          printf("element not found");  
          
          return 0;
}
          
int binary_search_rec(int a[],int l,int h,int key){
           int mid;
            if(l<=h)
            {
               mid=(l+h)/2;
               if(key==a[mid])
                return mid;
               else if(key>a[mid])
                 return binary_search_rec(a,mid+1,h,key);
               else
                 return binary_search_rec(a,l,mid-1,key);
                 }
               return -1;
               
               }  
