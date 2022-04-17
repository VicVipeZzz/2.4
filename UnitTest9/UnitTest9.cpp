#include "pch.h"
#include "CppUnitTest.h"
#include "../2.4/Vector.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest9
{
	TEST_CLASS(UnitTest9)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			bool a;
			Vector b(2);
			Vector c(2);
			a = (b == c);
			Assert::IsTrue(a);
		}
	};
}
