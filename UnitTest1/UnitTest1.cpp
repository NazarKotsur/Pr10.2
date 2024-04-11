#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
#include <string>
#include "../Pr10.2/Pr10.2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ofstream testFile("testfile.txt");
			if (testFile.is_open()) {
				testFile << "This is a test file.";
				testFile.close();
			}

			int expectedResult = 5; // ќч≥кувана к≥льк≥сть сл≥в у файл≥
			int actualResult = countWords("testfile.txt");

			Assert::AreEqual(expectedResult, actualResult);
		}
	};
}