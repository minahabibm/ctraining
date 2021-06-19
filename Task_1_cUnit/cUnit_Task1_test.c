// http://cunit.sourceforge.net/doc/introduction.html#description
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "cUnit_Task1.h"

void test_calc(void) {
    CU_ASSERT(add(2,2) == 4);
    CU_ASSERT(sub(7, 5) == 2);
    CU_ASSERT(mul(2, 2) == 4);
    CU_ASSERT(div(2, 2) == 1.0);
}


int main() {
    add(2,2);

    // 1. nitialize the test registry
    CU_initialize_registry();

    // 2. Add suites to the test registry
    CU_pSuite suite1 = CU_add_suite("test_calc", 0, 0);

    // 3. Add tests to the suites
    CU_add_test(suite1, "test_calc", test_calc);

    // 4. Run tests using an appropriate interface
    CU_basic_run_tests();

    // 5. Cleanup the test registry
    CU_cleanup_registry();

   return 0;
}

/** Run the Tests
   To use CUnit framework in your project, you must install it first
   - sudo apt-get install libcunit1 libcunit1-doc libcunit1-dev
   
   Then in your test.c
   - include <CUnit/CUnit.h>

   And finally, you must add the flag –lcunit to the gcc command (at the end)
   - gcc  -o test test.c  -lcunit
**/
