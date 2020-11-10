#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.2/Lab 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{	
			double t;
			t = A(1.,1.,1.);
			Assert::AreEqual(t, (-1.));
		}
	};
}
