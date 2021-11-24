#include "../unity/unity.h"
#include "../inc/calender.h"

/* Prototypes for all the test functions */
void test_year_entered(void);
void test_month_entered(void);
void test_date_entered(void);



void setUp(){}
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_year_entered);
  RUN_TEST(test_month_entered);
  RUN_TEST(test_date_entered);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_year_entered(void){
    TEST_ASSERT_EQUAL(2021, year_entered(2021));
    TEST_ASSERT_EQUAL(1999, year_entered(1999));
}

void test_month_entered(void){
    TEST_ASSERT_EQUAL(10, month_entered(10));
    TEST_ASSERT_EQUAL(01, month_entered(01));
    
}

void test_date_entered(void){
    TEST_ASSERT_EQUAL(25, date_entered(25));
    TEST_ASSERT_EQUAL(10, date_entered(10));
    

}
