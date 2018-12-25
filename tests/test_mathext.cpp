#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE TestMathExt
#include <boost/test/unit_test.hpp>

#include "mathext.hpp"

BOOST_AUTO_TEST_SUITE( suite1 );

BOOST_AUTO_TEST_CASE( test1_isPowerOf2 )
{
  BOOST_CHECK(MathExt::isPowerOf2(3) == false);
  BOOST_CHECK(MathExt::isPowerOf2(3) == false);
}

BOOST_AUTO_TEST_CASE( test1_rand_width )
{
  BOOST_CHECK(MathExt::rand_width(4) < 16); // 2^4 = 16
  BOOST_CHECK(MathExt::rand_width(4) >= 0); // 2^4 = 16
}

BOOST_AUTO_TEST_SUITE_END();
