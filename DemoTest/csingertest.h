#ifndef CSINGERTEST
#define CSINGERTEST

#include <QString>
#include <QtTest>
#include <QCoreApplication>
#include "csinger.h"

class CSingerTest : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();

    void testStartSingClassical();
    void testStartSingPop();
    void testStartSingBlues();
};

#endif // CSINGERTEST

