#include<stdio.h>
int binary_search(int a[],int l,int h,int key);

int main(){
       int a[10];
       int i,n,key,pos,l,h;
       printf("enter the value of n");
       scanf("%d",&n);
       printf("enter the  elements");
       for(i=0;i<n;i++){
           scanf("%d",&a[i]);
           }
       printf("enter key element");
       scanf("%d",&key);  
           
       pos=binary_search(a,0,n-1,key);
       if(pos>=0)
       printf("element found at %d pos",pos);
       else 
       printf("element not found");
       
      return 0;
      }
      
int binary_search(int a[],int l,int h,int key){
          int i,mid;
          while(l<=h){
             mid=(l+h)/2;
            if(key==a[mid])
               return mid;
            else if(key>a[mid])
               l=mid+1;
            else 
               h=mid-1;
               }
               
            return -1;
            }
            
