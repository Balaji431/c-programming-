#include<stdio.h>
2. void main(){
3. int n,i=1,sum=0;
4.
5. printf("Enter a number: ");
6. scanf("%d",&n);
7.
8. while(i<n){
9. if(n%i==0)
10. sum=sum+i;
11. i++;
12. }
13. if(sum==n)
14. printf("%d is a perfect number",i);
 else
 printf("%d is not a perfect number",i);

 }
