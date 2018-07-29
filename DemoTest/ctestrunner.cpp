#include "ctestrunner.h"
#include <QDebug>

CTestRunner::CTestRunner(QObject *parent) :
    QObject(parent),
    m_overallResult(0)
{
}

void CTestRunner::addTest(QObject * test)
{
    test->setParent(this);
    m_tests.append(test);
}

bool CTestRunner::runTests()
{
    int argc =0;
    char * argv[] = {0};
    QCoreApplication app(argc, argv);
    QTimer::singleShot(0, this, SLOT(run()) );
    app.exec();

    return m_overallResult == 0;
}

// private slots:
void CTestRunner::run()
{
    doRunTests();
    QCoreApplication::instance()->quit();

}

// private:
void CTestRunner::doRunTests()
{
    foreach (QObject * test, m_tests)
    {
        m_overallResult |= QTest::qExec(test);
    }
}
