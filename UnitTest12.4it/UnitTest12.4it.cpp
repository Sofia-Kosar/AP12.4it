#include "pch.h"
#include "CppUnitTest.h"
#include "../AP12.4it/AP12.4it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest124it
{
	TEST_CLASS(UnitTest124it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* L = NULL;
			LAdd(L, 3);
			LAdd(L, 4);
			LAdd(L, 3);
			LAdd(L, 3);
			LAdd(L, 5);
			LAdd(L, 3);
			Assert::AreEqual(LCount(L, 3), 4);

		}
	};
}
