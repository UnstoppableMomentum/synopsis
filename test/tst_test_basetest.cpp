#include <QString>
#include <QtTest>
#include "test_variant.h"

int main(int argc, char *argv[])
{
    int iRes = 0;
    {
        Test_synopsis_Variant tc;
        int iResTest = QTest::qExec(&tc, argc, argv);
        if (iResTest) {
            iRes = -1;
        }
    }
    return iRes;

}

