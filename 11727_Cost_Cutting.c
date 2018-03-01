#include <stdio.h>

int main() {

  int a, b, c, x, count = 1;

  scanf("%d\n", &x);
  while (count <= x) {
    printf("Case %d: ", count++);
    scanf("%d%d%d" ,&a ,&b, &c);

    if(a > b && a > c){
      if(c > b){
        printf("%d\n", c);
      }
      else
        printf("%d\n", b);
    }
    else if(b > c && b > a){
      if(c > a){
        printf("%d\n", c);
      }
      else
        printf("%d\n", a);
    }
    else if(c > b && c > a){
      if(b > a){
        printf("%d\n", b);
      }
      else
        printf("%d\n", a);
    }
  }

  return 0;
}
