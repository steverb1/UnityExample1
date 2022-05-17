#include "../UnitySource/unity.h"
#include "../src/Addition.h"

void setUp()
{

}

void tearDown()
{

}

void test_Add(void)
{
	TEST_ASSERT_EQUAL(3, add(1, 2));
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_Add);
	return UNITY_END();
}
