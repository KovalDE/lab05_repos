#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.1/Lab 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c = (g(1., 0) + g((-1.), 0)) / g(0,1.);
			Assert::AreEqual(c, 2.);
		}
	};
}
