#include <limits>
#include "math_lib.cpp"

//----------------------------------------------
//----------------------------------------------

//test function "addition"  for positive results
TEST(addition, positive_result)
{
  EXPECT_DOUBLE_EQ(409.798, addition(25.0,384.798));
  EXPECT_DOUBLE_EQ(59.88, addition(25.1,34.78));
  EXPECT_DOUBLE_EQ(33.0, addition(25.0,8.0));
  EXPECT_DOUBLE_EQ(17.0, addition(25.0,-8.0));
  EXPECT_DOUBLE_EQ(0.0, addition(8.01,-8.01));
}

//test function "addition" for negative results
TEST(addition, negative_result)
{
  EXPECT_DOUBLE_EQ(-359.798, addition(25.0,-384.798));
  EXPECT_DOUBLE_EQ(-9.68, addition(25.1,-34.78));
  EXPECT_DOUBLE_EQ(-17, addition(-25.0,8.0));
  EXPECT_DOUBLE_EQ(-16.01, addition(-8.0,-8.01));
  EXPECT_DOUBLE_EQ(-8.0, addition(-8.0,-0.0));
}

//test function "addition" for operations with limits
TEST(addition, limits)
{
  double maxminus = DBL_MAX -1.0;
  double minplus  = DBL_MIN + 1.0;

  EXPECT_ANY_THROW(addition(DBL_MAX,1.0));
  EXPECT_ANY_THROW(addition(-DBL_MAX,-1.0));
  EXPECT_ANY_THROW(addition(DBL_MIN,-1.0));

  EXPECT_DOUBLE_EQ(DBL_MAX, addition(maxminus,1.0));
  EXPECT_DOUBLE_EQ(DBL_MIN, addition(minplus,-1.0));
}

//----------------------------------------------
//----------------------------------------------

//test function "difference"  for positive results
TEST(difference, positive_result)
{
  EXPECT_DOUBLE_EQ(409.798, addition(25.0,-384.798));
  EXPECT_DOUBLE_EQ(59.88, addition(25.1,-34.78));
  EXPECT_DOUBLE_EQ(33.0, addition(25.0,-8.0));
  EXPECT_DOUBLE_EQ(17.0, addition(25.0,8.0));
  EXPECT_DOUBLE_EQ(0.0, addition(8.01,8.01));
  EXPECT_DOUBLE_EQ(2.0, addition(-8.01,-10.01));
}

//test function "difference" for negative results
TEST(difference, negative_result)
{
  EXPECT_DOUBLE_EQ(-359.798, addition(25.0,384.798));
  EXPECT_DOUBLE_EQ(-9.68, addition(25.1,34.78));
  EXPECT_DOUBLE_EQ(-17, addition(-25.0,-8.0));
  EXPECT_DOUBLE_EQ(-16.01, addition(-8.0,8.01));
  EXPECT_DOUBLE_EQ(-8.0, addition(-8.0,-0.0));
}

//test function "difference" for operations with limits
TEST(difference, limits)
{
  double maxminus = DBL_MAX -1.0;
  double minplus  = DBL_MIN + 1.0;

  EXPECT_ANY_THROW(addition(DBL_MAX,-1.0));
  EXPECT_ANY_THROW(addition(-DBL_MAX,1.0));
  EXPECT_ANY_THROW(addition(DBL_MIN,1.0));

  EXPECT_DOUBLE_EQ(DBL_MAX, addition(maxminus,-1.0));
  EXPECT_DOUBLE_EQ(DBL_MIN, addition(minplus,1.0));
}

//----------------------------------------------
//----------------------------------------------

//test function "multiplication"  for positive results
TEST(multiplication, positive_result)
{
	EXPECT_DOUBLE_EQ(4.0, multiplication(16.0,0.25));
	EXPECT_DOUBLE_EQ(42.0, multiplication(21.0,2.0));
	EXPECT_DOUBLE_EQ(42.0, multiplication(-21.0,-2.0));
	EXPECT_DOUBLE_EQ(58.718, multiplication(21.352,2.75));
	EXPECT_DOUBLE_EQ(16.291576, multiplication(21.352,0.763));
	EXPECT_DOUBLE_EQ(16.291576, multiplication(-21.352,-0.763));
}

//test function "multiplication" for negative results
TEST(multiplication, negative_result)
{
	EXPECT_DOUBLE_EQ(-4.0, multiplication(-16.0,0.25));
	EXPECT_DOUBLE_EQ(-42.0, multiplication(21.0,-2.0));
	EXPECT_DOUBLE_EQ(-42.0, multiplication(-21.0,2.0));
	EXPECT_DOUBLE_EQ(-58.718, multiplication(21.352,-2.75));
	EXPECT_DOUBLE_EQ(-16.291576, multiplication(-21.352,0.763));
	EXPECT_DOUBLE_EQ(-16.291576, multiplication(-21.352,0.763));
}

//test function "multiplication" for operations with limits
TEST(multiplication, limits)
{
  double maxhalf = DBL_MAX /2.0;
  double minhalf  = DBL_MIN /2.0;

  EXPECT_ANY_THROW(multiplication(DBL_MAX,1.000001));
  EXPECT_ANY_THROW(multiplication(-DBL_MAX,1.00002));
  EXPECT_ANY_THROW(multiplication(DBL_MIN,1.000001));

  EXPECT_DOUBLE_EQ(DBL_MAX, multiplication(maxhalf,2.0));
  EXPECT_DOUBLE_EQ(DBL_MIN, multiplication(minhalf,2.0));
}

//----------------------------------------------
//----------------------------------------------

//test function "division"  for positive results
TEST(division, positive_result)
{
	EXPECT_DOUBLE_EQ(4.0, division(16.0,4.9));
	EXPECT_DOUBLE_EQ(42.0, division(21.0,0.5));
	EXPECT_DOUBLE_EQ(42.0, division(-21.0,-0.5));
	EXPECT_DOUBLE_EQ(7.76436364, division(21.352,2.75));
	EXPECT_DOUBLE_EQ(27.9842726, division(21.352,0.763));
	EXPECT_DOUBLE_EQ(27.9842726, division(-21.352,-0.763));
}

//test function "division" for negative results
TEST(division, negative_result)
{
	EXPECT_DOUBLE_EQ(-4.0, division(16.0,-4.9));
	EXPECT_DOUBLE_EQ(-42.0, division(-21.0,0.5));
	EXPECT_DOUBLE_EQ(-42.0, division(21.0,-0.5));
	EXPECT_DOUBLE_EQ(-7.76436364, division(-21.352,2.75));
	EXPECT_DOUBLE_EQ(-27.9842726, division(21.352,-0.763));
	EXPECT_DOUBLE_EQ(-27.9842726, division(-21.352,0.763));
}

//test function "division" for operations with limits
TEST(division, limits)
{
  double maxhalf = DBL_MAX /2.0;
  double minhalf  = DBL_MIN /2.0;

  EXPECT_ANY_THROW(division(DBL_MAX,0.999999));
  EXPECT_ANY_THROW(division(-DBL_MAX,0.99999999));
  EXPECT_ANY_THROW(division(DBL_MIN,0.999999999));

  EXPECT_DOUBLE_EQ(DBL_MAX, division(maxhalf,0.5));
  EXPECT_DOUBLE_EQ(DBL_MIN, division(minhalf,0.5));

}

//----------------------------------------------
//----------------------------------------------

//test function "factorial"  for positive results
TEST(factorial, positive_result)
{
}

//test function "factorial" for negative results
TEST(factorial, negative_result)
{
}

//test function "factorial" for operations with limits
TEST(factorial, limits)
{

}

//----------------------------------------------
//----------------------------------------------

//test function "powering"  for positive results
TEST(powering, positive_result)
{
}

//test function "powering" for negative results
TEST(powering, negative_result)
{
}

//test function "powering" for operations with limits
TEST(powering, limits)
{

}


//----------------------------------------------
//----------------------------------------------

//test function "sqrt" for operations with positive numbers
TEST(sqrt, positive_numbers)
{
  EXPECT_DOUBLE_EQ(5.0, sqrt(25.0));
  EXPECT_DOUBLE_EQ(9.0, sqrt(81.0));
  EXPECT_DOUBLE_EQ(25.4, sqrt(645.16));
  EXPECT_DOUBLE_EQ(0.0, sqrt(0.0));
  EXPECT_DOUBLE_EQ(1.0, sqrt(1.0));
}

//test function "sqrt" for operations with positive numbers
TEST(sqrt, negative_numbers)
{
  EXPECT_ANY_THROW(sqrt(-64.0));
  EXPECT_ANY_THROW(sqrt(-0.6));
}

//test function "sqrt" for operations with limits
TEST(sqrt, limits)
{

}

//----------------------------------------------
//----------------------------------------------

//test function "sine" for operations with positive numbers
TEST(sine, positive_numbers)
{
}

//test function "sine" for operations with positive numbers
TEST(sine, negative_numbers)
{
}

//test function "sine" for operations with limits
TEST(sine, limits)
{

}
