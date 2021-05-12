#include "types.h"
#include "stat.h"
#include "user.h"


int main() {
  int i;
  for(i=0; i<10; i++) {
	  printf(1,"ith: %d", i+1);
#ifdef MULTILEVEL_SCHED
    printf(1, "MULTILEVEL_SCHED\n");
#elif MLFQ_SCHED
    printf(1, "MLFQ_SCHED, MLFQ_K :%d\n", MLFQ_K);
#else
    printf(1, "DEFAULT\n");
#endif
  }

}
