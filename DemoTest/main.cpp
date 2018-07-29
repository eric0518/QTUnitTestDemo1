#include "ctestrunner.h"
#include "cdirectortest.h"
#include "csingertest.h"

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    CTestRunner testRunner;
    testRunner.addTest(new CDirectorTest());
    testRunner.addTest(new CSingerTest());

    bool pass = testRunner.runTests();

    QThread::msleep(5000);
    qDebug() << "=========================================================";
    qDebug() << "Overall result: " << (pass ? "PASS" : "FAIL");
    qDebug() << "=========================================================";

    return 0;
}
