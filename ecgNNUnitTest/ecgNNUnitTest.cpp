#include "pch.h"
#include "CppUnitTest.h"
#include "../ecgNNTest/Matrix.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ecgNNUnitTest
{
	TEST_CLASS(ecgNNUnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Matrix a(2, 2);
			a[0][0] = 1, a[0][1] = 1, a[1][0] = 0, a[1][1] = 1;
			Matrix b = a * a;
			if (!((int)b[0][0] == 1 && (int)b[0][1] == 2 && (int)b[1][0] == 0 && (int)b[1][1] == 1)) {
				Assert::Fail();
			}
		}
	};
}
