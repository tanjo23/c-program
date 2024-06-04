#include<stdio.h>
int isPrime(int n){
   int check =0;
  if(n==2) return 1;
  else{
   for(int i=2;i<=n/2;i++){
     if(n%i==0){
     check++;
     break;
  }
 }
   if(check==1) return 0;
   else return 1;
  }
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
  
    for(int i=2;i<=n/2;i++){
        int temp = n;
      if(isPrime(i)){
       if(temp%i==0){		      
          temp = temp/i;
	 if(isPrime(temp)) {
	 printf("%d is semiprime",n);
	 break;   
      }
	  else {
	  printf("%d is not semiptime\n",n);
	  break;}
	}
    }
   }
   return 0;
}
