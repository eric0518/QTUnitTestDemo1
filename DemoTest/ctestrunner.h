#ifndef CTESTRUNNER_H
#define CTESTRUNNER_H

#include <QObject>
#include <QList>
#include <QTimer>
#include <QCoreApplication>
#include <QtTest>

class CTestRunner : public QObject
{
    Q_OBJECT
public:
    explicit CTestRunner(QObject *parent = 0);

    void addTest(QObject * test);
    bool runTests();

private slots:
    void run();

private:
    void doRunTests();

private:
    QList<QObject *> m_tests;
    int m_overallResult;
};

#endif // CTESTRUNNER_H
