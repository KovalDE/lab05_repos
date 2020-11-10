#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.4/Lab 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double ss0;
			ss0 = S0(0,0);
			Assert::AreEqual(ss0, 1.);
			double ss1;
			ss1 = S1(0,0,0);
			Assert::AreEqual(ss1, 1.);
			double ss2;
			ss2 = S2(0, 0, 0);
			Assert::AreEqual(ss2, 1.);
			double ss3;
			ss3 = S3(0,0,0,0);
			Assert::AreEqual(ss3, 1.);
			double ss4;
			ss4 = S4(0, 0, 0,0);
			Assert::AreEqual(ss4, 1.);
		}
	};
}
