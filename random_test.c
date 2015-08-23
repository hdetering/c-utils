#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdio.h>
#include "random.c"

/* Generate 10 random numbers. */
static void generate_10_random_numbers(void **state) {
  long int seed = time(NULL) + clock();
  printf("\nTesting function random.c:RandomNumber(long int *seed)...\n\n");
  printf("  Generating 10 random numbers:\n");
  int    i;
  double x;
  for (i=0; i<10; i++) {
    x = RandomNumber(&seed);
    printf("    [%d] %f\n", i, x);
  }
}

int main(void) {
  const struct CMUnitTest tests[] = {
    cmocka_unit_test(generate_10_random_numbers),
  };
  
  return cmocka_run_group_tests(tests, NULL, NULL);
}
