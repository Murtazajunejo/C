#include<stdio.h>
  int main(){
  int cash;

  printf("\n Enter amount :");
  scanf("%d",&cash);

  printf("\n500 : %d", cash / 500);
  cash=cash%500;

  printf("\n100 : %d", cash / 100);
  cash=cash%100;

  printf("\n50 : %d ", cash / 50 );
  cash=cash%50;

  printf("\n20 : %d", cash / 20);
  cash=cash%20;

  printf("\n10 : %d", cash / 10);
  cash=cash%10;
  printf("\n2 :  %d", cash / 2);
  cash=cash%2;
  printf("\n1 : %d", cash / 1);
  cash=cash%1;

return 0;
}