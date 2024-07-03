#include "pch.h"
#include "../TDD_PrimeFactors/prime-factors.cpp"

#include <vector>

using namespace std;

class PrimeFactors : public testing::Test {

};

TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}