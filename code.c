#include <stdio.h>



int main() {
   int n,arr[n],count;
   count=0;
   n=10;
   for(int i = 0; i<n; i++){
      arr[i]=1;
      
   }
   while(count<n){
      printf("%d",arr[count]);
      count++;
      
   }
   return 0;
}