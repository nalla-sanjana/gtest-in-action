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




TEST(StringCalculatorTestSuite,add_Negative_ZeroIsExpected){
  //Arrange
  string input= -1;
  int expectedValue=0;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_GT(actualValue,expectedValue);
  
  
}


