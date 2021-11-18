#include<stdio.h>
main()
{
  printf("pick an item : \n1.pasta,Rs179\n2.buger,Rs129\n3.pizza,Rs239\n4.french fires,Rs99\n5.sandwich,Rs149");
  int choice=0;
  scanf("%d",&choice);
  
  switch(choice)
  {
    case 1:
      printf("you pick pasta,Rs179");
    case 2:
      printf("you pick buger,Rs129");
    case 3:
      printf("you pick pizza,Rs239");
    case 4 :
      printf("you pick french fires,Rs99");
    case 5:
      printf("you pick sandwich,Rs149");
    default  :printf("Invalid choice");
  }
}  
  
  
