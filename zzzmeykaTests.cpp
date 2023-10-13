#include "pch.h"
#include "CppUnitTest.h"
#include "../zzzmeyka/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace zzzmeykaTests
{
	TEST_CLASS(zzzmeykaTests)
	{
		
		TEST_METHOD(TestCheck_Finish)
		{
			Assert::IsTrue(Check_finish(31) == true);
			Assert::IsFalse(Check_finish(30) == false);
			Assert::IsFalse(Check_finish(29) == true);
		}

		TEST_METHOD(TestSizeSnake)
		{
			Assert::IsTrue(size(1) == 3);
			Assert::IsTrue(size(10000) == 10002);
			Assert::IsFalse(size(100) == 101);
		}

		TEST_METHOD(TestMode)
		{
			Assert::IsTrue(HardMode('y') == true);
			Assert::IsTrue(HardMode('n') == false);
			Assert::IsFalse(HardMode('n') == true);
		}

	};
}
