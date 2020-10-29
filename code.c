#include <stdio.h>



int main() {
   int n,arr[n],count;
   count=0;
   n=10;
   for(int i = 0; i<n; i++){
      arr[i] = i%2;
      if(i == n/2-1) arr[i]=3;
      if(i==n/2) arr[i]=2;
   }
   while(count<n){
      printf("%d",arr[count]);
      count++;
      
   }
   return 0;
}