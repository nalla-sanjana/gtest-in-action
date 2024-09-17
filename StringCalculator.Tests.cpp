#include "StringCalculator.h"
#include <gtest/gtest.h>

class StringCalculatorFixture:public testing::Test{
protected:
   string input;
   int expectedValue;
   int actualValue;
};

TEST_F(StringCalculatorFixture, add_emptyInputString_ZeroIsExpected){
 input="";
   expectedValue=0;
  actualValue=Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}



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

TEST(StringCalculatorTestSuite,add_when_passed_a_delimiter_SumIsExpected){
  //Arrange
  string input= "//;\n1;2";
  int expectedValue=3;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_when_passed_multicharacter_delimiter_SumIsExpected){
  //Arrange
  string input= "//[***]\n8***2***3";
  int expectedValue=13;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_when_passed_multiple_delimiters_SumIsExpected){
  //Arrange
  string input= "//[*][%]\n4*2%3";
  int expectedValue=9;
  //Act
  int actualValue=Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}







