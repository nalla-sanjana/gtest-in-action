#include "StringCalculator.h"
#include <gtest/gtest.h>
#include <vector>

class TestDataPair{
public:
    string input;
    int expectedValue;
    TestDataPair(string _input,int _expectedValue) : input{_input}, expectedValue{_expectedValue}{
      }
};

class StringCalculatorDataDrivenFixture:public testing::Test{

protected:
  vector<TestDataPair*> dataList;

   //Before Each Test Case
  void SetUp(){
      dataList.push_back(new TestDataPair { "",0});
      dataList.push_back(new TestDataPair { "0",0});
      dataList.push_back(new TestDataPair { "1",1});
      dataList.push_back(new TestDataPair { "1,2",3});
      dataList.push_back(new TestDataPair { "1,2,3",6});
  }
};

TEST_F(StringCalculatorDataDrivenFixture,DataDrivenTestCase){
     for (TestDataPair* dataPairPtr : dataList) {
        int actualValue=Add(dataPairPtr->input);
        ASSERT_EQ(actualValue,dataPairPtr->expectedValue);
    }
}
TEST(StringCalculatorDataDrivenTestSuite,DataDrivenTestCase){

  TestDataPair pair_one { "",0};
  TestDataPair pair_two { "0",0};
  TestDataPair pair_three { "1",1};
  TestDataPair pair_four { "1,2",3};
  TestDataPair pair_five { "1,2,3",6};

  
  //Iterate using a range-based for-loop
    for (TestDataPair dataPair : dataList) {
        int actualValue=Add(dataPair.input);
        ASSERT_EQ(actualValue,dataPair.expectedValue);
    }

}
