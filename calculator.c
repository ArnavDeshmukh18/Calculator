#include <stdio.h>

int main()
 {
  int a,b,op;
  printf("Enter the two numbers\n");
  scanf("%d%d",&a,&b);
  printf("Choose the operation you want . \n 1. Addition \n 2. Subtraction \n 3.Multiplication \n 4. Division  \n");
  scanf("%d",&op);

  switch(op)
  {
  case 1:
  
    printf("Addition of Two number is %d\n",a+b);
     break;
     case 2: 
    printf("Subtraction of Two number is %d\n",a-b);
     break;
     case 3: 
    printf("Multiplication of Two number is %d\n",a*b);
     break;
     case 4: 
    printf("Division of Two number is %d\n",a/b);
     break;
  
 }
  return 0;
}
