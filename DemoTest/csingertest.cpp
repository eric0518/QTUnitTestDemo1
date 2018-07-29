#include "csingertest.h"


void CSingerTest::initTestCase()
{
}

void CSingerTest::cleanupTestCase()
{
}

void CSingerTest::testStartSingClassical()
{
    CSinger singer;
    singer.startSing(CSinger::Classical);
    QTRY_COMPARE(singer.songCategory(), CSinger::Classical);
}

void CSingerTest::testStartSingPop()
{
    CSinger singer;
    singer.startSing(CSinger::Pop);
    QTRY_COMPARE(singer.songCategory(), CSinger::Pop);
}

void CSingerTest::testStartSingBlues()
{
    CSinger singer;
    singer.startSing(CSinger::Blues);
    QTRY_COMPARE(singer.songCategory(), CSinger::Blues);
}

