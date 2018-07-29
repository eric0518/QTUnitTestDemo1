#include "cdirector.h"

CDirector::CDirector(QObject *parent) : QObject(parent)
{

}

// public slots
void CDirector::startPlay()
{
    m_playState = Started;
}

void CDirector::finishPlay()
{
    m_playState = Finished;
}

CDirector::PlayState CDirector::playState()
{
    return m_playState;
}
