#include "stdafx.h"
#include "CppUnitTest.h"
#include "/My Documents/Visual Studio 2015/Projects/ConsoleApplication1/ConsoleApplication1/line.h"
#include "/My Documents/Visual Studio 2015/Projects/ConsoleApplication1/ConsoleApplication1/line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
				line line1;
				line line2;
				line1.a = 2;
				line1.b = 3;
				line1.c = 1;
				line2.a = 3;
				line2.b = 2;
				line2.c = 5;
				line k;

				Assert::AreEqual(true, k.peresech(line1, line2));
						
			// TODO: Разместите здесь код своего теста
		}

	};
}