#include "csinger.h"

CSinger::CSinger(QObject *parent) : QObject(parent)
{
    m_songCategory = Unkonwn;
}

// public slots
void CSinger::startSing(SongCategory category)
{
    m_songCategory = category;
}
CSinger::SongCategory CSinger::songCategory()
{
    return m_songCategory;
}
