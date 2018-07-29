#include <QString>
#include <QtTest>
#include <QCoreApplication>
#include "cdirector.h"

class CDirectorTest : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();

    void testStartPlay();
    void testFinishPlay();
};

void CDirectorTest::initTestCase()
{
}

void CDirectorTest::cleanupTestCase()
{
}

void CDirectorTest::testStartPlay()
{
    CDirector director;
    director.startPlay();

    QTRY_COMPARE(director.playState(), CDirector::Started);
}
void CDirectorTest::testFinishPlay()
{
    CDirector director;
    director.finishPlay();

    QTRY_COMPARE(director.playState(), CDirector::Finished);
}
