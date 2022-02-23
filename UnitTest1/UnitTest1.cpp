#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab7.1\lab7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{

		

		TEST_METHOD(test_calc)
		{
			const int rowCount = 5;
			const int colCount = 9;

			int matrix[rowCount][colCount] = {
				{-23,  -16,  30,  54,  15, -16,  37,  31,  42},
				{ 35, -18,  19,  25,  19, -12,  -7, -26,  16},
				{ 53,  25,  -7, -25,  -5, -11,  35, -30, 28},
				{ -29,  27,  -7,  53,   9,  -6,  16,  30 , 10},
				{  14, -22,   1,  42,  45, -27,  17, -30,  52},

			};

			int expctedMatrix[rowCount][colCount] = {
				{-23,  -16,  30,  54,  15, -16,  37,  31,  42},
				{ 35, -18,  19,  25,  19, -12,  -7, -26,  16},
				{ 53,  25,  -7, -25,  -5, -11,  35, -30, 28},
				{ -29,  27,  -7,  53,   9,  -6,  16,  30 , 10},
				{  14, -22,   1,  42,  45, -27,  17, -30,  52},

			};

			int* matrixPointers[rowCount] = {
				matrix[0],
				matrix[1],
				matrix[2],
				matrix[3],
			};

			int Sum = 0;
			int Count = 0;

			Calc(matrixPointers, rowCount, colCount, Sum, Count);

			for (int row = 0; row < rowCount; row++)
				for (int column = 0; column < colCount; column++)
					Assert::AreEqual(expctedMatrix[row][column], matrix[row][column]);

			Assert::AreEqual(530, Sum);
			Assert::AreEqual(18, Count);
		}
	};
}