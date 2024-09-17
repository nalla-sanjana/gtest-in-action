#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
  //Arrange
  string input="";
  int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
  
  
}

TEST(StringCalculatorTestSuite,add_ZeroInputString_ZeroIsExpected){
  //Arrange
  string input= "0";
  int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}


 

TEST(StringCalculatorTestSuite,add_when_passed_two_comma_delimited_numbers_SumIsExpected){
  //Arrange
  string input= "1,2";
  int expectedValue=3;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}


TEST(StringCalculatorTestSuite,add_when_passed_multiple_comma_delimited_numbers_SumIsExpected){
  //Arrange
  string input= "1,2,3";
  int expectedValue=6;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_NegativeInput_Invalid_argumentIsExpected){
  //Arrange
  string input= "-1";
  //Act
  
  //Assert
  ASSERT_THROW(Add(input), invalid_argument);
 }

TEST(StringCalculatorTestSuite,add_when_passed_numbers_over_1000_Ignorethem){
  //Arrange
  string input= "1,1001,3";
  int expectedValue=4;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}





