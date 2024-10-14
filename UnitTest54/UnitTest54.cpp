#include "pch.h"
#include "CppUnitTest.h"
#include "../lab54/lab54.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = S0(1, 5);
			Assert::AreEqual(result, 1.27008, 0.000001);
		}
		TEST_METHOD(TestMethod2)
		{
			double result = S1(1, 5, 1);
			Assert::AreEqual(result, 1.27008, 0.000001);
		}
		TEST_METHOD(TestMethod3)
		{
			double result = S2(1, 5, 5);
			Assert::AreEqual(result, 1.27008, 0.000001);
		}
		TEST_METHOD(TestMethod4)
		{
			double result = S3(1, 5, 1, 1);
			Assert::AreEqual(result, 1.27008, 0.000001);
		}
		TEST_METHOD(TestMethod5)
		{
			double result = S4(1, 5, 5, 1);
			Assert::AreEqual(result, 1.27008, 0.000001);
		}
	};
}
