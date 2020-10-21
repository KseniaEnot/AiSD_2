#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2/lab2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab2Test
{
	TEST_CLASS(lab2Test)
	{
	public:
		static const int N = 10;  
		int search;

		TEST_METHOD(testBinarySearch)
		{
			int arr[N];
			for (size_t i = 0; i < N; i++)
				arr[i] = i + 1;
			search = 3;
			Assert::AreEqual(BinarySearch(arr,N,search),2);
		}

		TEST_METHOD(testBinarySearch2)
		{
			int arr[N];
			for (size_t i = 0; i < N; i++)
				arr[i] = i*2;
			search = 2;
			Assert::AreEqual(BinarySearch(arr, N, search), 1);
		}

		TEST_METHOD(testBinarySearch3)
		{
			int arr[N];
			for (size_t i = 0; i < N; i++)
				arr[i] = i * 2;
			search = 0;
			Assert::AreEqual(BinarySearch(arr, N, search), 0);
		}

		TEST_METHOD(testBinarySearch4)
		{
			int arr[N];
			for (size_t i = 0; i < N; i++)
				arr[i] = i * 2;
			search = 18;
			Assert::AreEqual(BinarySearch(arr, N, search), 9);
		}
		TEST_METHOD(testBinarySearchNotFound)
		{
			int arr[N];
			for (size_t i = 0; i < N; i++)
				arr[i] = i * 2;
			search = 1;
			Assert::AreEqual(BinarySearch(arr, N, search), -1);
		}
		TEST_METHOD(testBinarySearchNotFound2)
		{
			int arr[N];
			for (size_t i = 0; i < N; i++)
				arr[i] = i * 2;
			search = 22;
			Assert::AreEqual(BinarySearch(arr, N, search), -1);
		}

		TEST_METHOD(testBubleSort)
		{
			int arr[N] = { 5, 2, 7, 1, 9, 8, 3, 4, 10, 6 };
			BubleSort(N, arr);
			for (size_t i = 0; i < N; i++)
			{
				Assert::AreEqual(arr[i], (int)(i + 1));
			}
		}

		TEST_METHOD(testBubleSortwithemptyplace)
		{
			int arr[N] = { 5, 2, 7, 1, 9, 8, 3, 4, 11, 6 };
			BubleSort(N, arr);
			for (size_t i = 0; i < N-1; i++)
			{
				Assert::AreEqual(arr[i], (int)(i + 1));
			}
			Assert::AreEqual(arr[N-1], 11);
			
		}

		TEST_METHOD(testBogoSort)
		{
			int arr[N] = { 5, 2, 7, 1, 9, 8, 3, 4, 10, 6 };
			BogoSort(N, arr);
			for (size_t i = 0; i < N; i++)
			{
				Assert::AreEqual(arr[i], (int)(i + 1));
			}
		}

		TEST_METHOD(testBogoSortwithemptyplace)
		{
			int arr[N] = { 5, 2, 7, 1, 9, 8, 3, 4, 11, 6 };
			BogoSort(N, arr);
			for (size_t i = 0; i < N - 1; i++)
			{
				Assert::AreEqual(arr[i], (int)(i + 1));
			}
			Assert::AreEqual(arr[N - 1], 11);
		}

		TEST_METHOD(testCountingSort)
		{
			char Carr[N] = { '4','1','a','t','0','e','v','v','5','0' };
			CountingSort(N, Carr);
			char SortedCarr[N] = { '0','0','1','4','5','a','e','t','v','v'};
			for (size_t i = 0; i < N; i++)
			{
				Assert::AreEqual(Carr[i], SortedCarr[i]);
			}
		}

		TEST_METHOD(testQuickSort)
		{
			int arr[N] = { 5, 2, 7, 1, 9, 8, 3, 4, 10, 6 };
			QuickSort(0,N-1, arr);
			for (size_t i = 0; i < N; i++)
			{
				Assert::AreEqual(arr[i], (int)(i + 1));
			}
		}

		TEST_METHOD(testQuickSortwithemptyplace)
		{
			int arr[N] = { 5, 2, 7, 1, 9, 8, 3, 4, 11, 6 };
			QuickSort(0, N - 1, arr);
			for (size_t i = 0; i < N - 1; i++)
			{
				Assert::AreEqual(arr[i], (int)(i + 1));
			}
			Assert::AreEqual(arr[N - 1], 11);
		}
	};
}
