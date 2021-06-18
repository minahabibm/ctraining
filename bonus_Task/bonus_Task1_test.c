#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "bonus_Task1.h"

void test_array_zeros(void) {
  array_zeros();
  for(int i=0; i < ARRAY_SIZE; i++) {
    CU_ASSERT(_array[i] == 0);
  }
}

void test_array_ones(void) {
  array_ones();
  for(int i=0; i < ARRAY_SIZE; i++) {
    CU_ASSERT(_array[i] == 1);  
  }
}

void test_zero_one(void) {
  array_zero_one();
  for(int i=0; i < ARRAY_SIZE; i++) {
    if (i % 2 == 0){ 
      CU_ASSERT(_array[i] == 0);
    } else { 
      CU_ASSERT(_array[i] == 1);
    }
  }
}

void test_consecutive_elements(void) {
  array_consecutive_elements();
  CU_ASSERT(consecutive_elements_count() == 4);
}


int main() {
    CU_initialize_registry();

    CU_pSuite suite1 = CU_add_suite("test_array_zeros", 0, 0);
    CU_pSuite suite2 = CU_add_suite("test_array_ones", 0, 0);
    CU_pSuite suite3 = CU_add_suite("test_zero_one", 0, 0);
    CU_pSuite suite4 = CU_add_suite("test_consecutive_elements", 0, 0);

    CU_add_test(suite1, "test_array_zeros", test_array_zeros);
    CU_add_test(suite2, "test_array_ones", test_array_ones);
    CU_add_test(suite3, "test_zero_one", test_zero_one);
    CU_add_test(suite4, "test_consecutive_elements", test_consecutive_elements);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

   return 0;
}

