﻿#include "pch.h"
#include "CppUnitTest.h"
#include "PrimeNumberLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(is_prime_number(1), false);
			Assert::AreEqual(is_prime_number(7), true); 
			Assert::AreEqual(is_prime_number(15), false);
		}
	};
}
