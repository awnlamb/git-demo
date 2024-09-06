#include "paddle.h"
#include <QBrush>

Paddle::Paddle()
{
    setRect(0, 0, m_width, m_height);
    setBrush((QBrush)Qt::red);
}

void Paddle::move(Paddle::MoveType moveType)
{
    if(validMove(moveType) && moveType == UP)
        setPos(x()- m_moveStep, y());
    else if(validMove(moveType) && moveType == DOWN)
        setPos(x() + m_moveStep, y());
}

void Paddle::randomMove(qreal ballY)
{
    MoveType m = ((y() - ballY) > -10) ? UP : DOWN;
    //    MoveType moveType = static_cast<MoveType>(-(qrand() % 2) + 1);
    move(m);
}

void Paddle::keyReleaseEvent(QKeyEvent *event)
{
    switch (event->key())
    {
    case Qt::Key_Left:
        move(UP);
        break;
    case Qt::Key_Right:
        move(DOWN);
        break;
    default:
        break;
    }
}

bool Paddle::validMove(Paddle::MoveType moveType)
{
    if(moveType == UP) return (x() - m_moveStep) >= 0;
    else if(moveType == DOWN) return (x() + m_moveStep) <=800;
    else return false;
}

int Paddle::width()
{
    return m_width;
}

int Paddle::height()
{
    return m_height;
}
