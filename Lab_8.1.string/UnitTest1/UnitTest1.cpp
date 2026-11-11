#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_8.1.string\Lab_8.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "a,-b,-c";
			int t = Count(s);
			Assert::AreEqual(2, t);
		}
	};
}
