#include<stdio.h>
int linear_search(int a[],int n,int key);

int main(){
         int a[10];
         int i,n,pos,key;
         printf("enter the value of n");
         scanf("%d",&n);
         printf("enter the elements");
         for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            }
         printf("enter the value uf key");
         scanf("%d",&key);
            
         pos=linear_search(a,n,key);
         if(pos>=0)
         printf("element is found at %d position",pos);
         else
         printf("element not found");
         return 0;
   }
   
int linear_search(int a[],int n,int key){
        int i;
        for(i=0;i<n;i++){
          if(a[i]==key)
            return i;
         }
          return -1;
          
          
}
          
          

