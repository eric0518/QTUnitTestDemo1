#ifndef CDIRECTORTEST
#define CDIRECTORTEST

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

#endif // CDIRECTORTEST

