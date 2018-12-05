#include<stdio.h>
#include<string.h>
#include<math.h>
//main function
int main(){
//declaring variables
    int i,j;
    char c[20];
//options display
   printf("1.TypeConversion \n2.PalindromeCheck \n");
   printf("  :");
   scanf("%d",&i);
//switch implementation
   switch(i){
	//for type conversion
	case 1: 
           printf("Enter the word in Capital\n");
	   scanf("%s",c);
	   for(j=0;j<strlen(c);j++){
             c[j]=c[j]+32;
	     printf("%c",c[j]);
           }
	   break;
	//for palindrome check
	case 2:
	  printf("Enter the Palindrome: \n");
	  scanf("%s",c);
	  int k=strlen(c),count=0;
	  for(j=0;j<k/2;j++){
             if(c[j]==c[k-j-1]){
	        count++;
  	     }
          }
	  if(count==k/2){
            printf("Yes\n");
          }
	  else
	    printf("No\n");
	  break;
	
}
return 0;
//end of main
}
