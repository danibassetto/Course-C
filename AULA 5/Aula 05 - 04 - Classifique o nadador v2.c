#include <stdio.h>
int main(void){
  int i;
  printf("Digite do narrador: ");
  scanf("%d", &i);
  if(i >= 5 && i <= 7) {
    printf("Infantil A");
  }else if(i >= 8 && i <= 11) {
    printf("Infantil B");
  }else if(i >= 12 && i <= 13) {
    printf("Juvenil A");
  }else if(i >= 14 && i <= 17) {
    printf("Juvenil B");
  }else if(i >= 18) {
    printf("Adultos");
  }else {
    printf("Idade Invalida");
  }
}