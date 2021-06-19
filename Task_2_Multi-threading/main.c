#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NTHREADS 26

struct args {
  char alphabet;
  long id;
};

void *thread_function(void *threadArgs){
  printf("Task%03ld-%c\n", ((struct args*)threadArgs)->id, ((struct args*)threadArgs)->alphabet);
  pthread_exit(NULL);
  return NULL;
}

int main(void) {
  pthread_t thread_id[NTHREADS];
  long i;
  int j;

  for(j=i=1; i <= NTHREADS; i++, j++ ) {
    struct args *Param = (struct args *)malloc(sizeof(struct args));
    Param->alphabet = 64+j;
    Param->id = i;

    pthread_create(&thread_id[i], NULL, thread_function, (void *)Param);
    pthread_join(thread_id[i], NULL);

  };
  // pthread_exit(NULL);
  
  return 0;
}