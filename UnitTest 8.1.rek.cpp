#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 8.1.rek/Laba 8.1.rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rec
{
    TEST_CLASS(UnitTest81rec)
    {
    public:

        TEST_METHOD(ContainsFourSameTest)
        {
            Assert::IsTrue(ContainsFourSame("aaaa", 0));
            Assert::IsTrue(ContainsFourSame("xx1111y", 0));
            Assert::IsTrue(ContainsFourSame("abcdddd", 0));
            Assert::IsFalse(ContainsFourSame("aaa", 0));
            Assert::IsFalse(ContainsFourSame("abab", 0));
            Assert::IsFalse(ContainsFourSame("aaabaaab", 0));
            Assert::IsFalse(ContainsFourSame("", 0));
        }

        TEST_METHOD(ChangeTest)
        {
            char d[50];

            Assert::AreEqual("**", Change(d, "aaaa", 0, 0));
            Assert::AreEqual("a**c", Change(d, "abbbbc", 0, 0));
            Assert::AreEqual("**a", Change(d, "aaaaa", 0, 0));
            Assert::AreEqual("****", Change(d, "aaaabbbb", 0, 0));
            Assert::AreEqual("abc", Change(d, "abc", 0, 0));
            Assert::AreEqual("", Change(d, "", 0, 0));
        }
    };
}