#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE TestStopWatch
#include <boost/test/unit_test.hpp>

#include <iomanip>
#include <iostream>
#include <cmath>

#include "stopwatch.hpp"


BOOST_AUTO_TEST_SUITE( suite1 );

BOOST_AUTO_TEST_CASE( test1 )
{
  StopWatch sw;

  sw.start();
  sw.stop();

  BOOST_CHECK(sw.elapsed_usec() > 0.0);
}

BOOST_AUTO_TEST_SUITE_END();
