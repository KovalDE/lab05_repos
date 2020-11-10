#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.3/Lab 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double l,v;
			l = h1(0);
			v = pow(0, 3 * 1 + 1) / (((3 * 1 + 1)) * (3 * 1) * (3 * 1 - 1));;
			Assert::AreEqual(l,2.);
			Assert::AreEqual(v, 0.);
		}
	};
}
