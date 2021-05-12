#include <stdio.h>

int main() {
  int i;
  for(i=0; i<10; i++) {
#ifdef PRINT1
    printf("1");
#elif PRINT2
    printf("2");
#else
    printf("%d", VALUE);
#endif
  }

}
