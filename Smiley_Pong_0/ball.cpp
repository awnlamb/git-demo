#include "ball.h"
#include "config.h"

#include <QBrush>
#include <QTimer>
#include <QList>

Ball::Ball()
{
    setRect(0, 0, m_width, m_height);
    setBrush((QBrush)Qt::green);
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    points=0;
    timer->start(50);
    dx = -1;
    dy = -1;
    m_speed = 10;
}

/*void Ball::setPaddles(Paddle *player, Paddle *computer)
{
    m_player = player;
    m_computer = computer;
}*/

void Ball::setPaddle(Paddle *player)
{
    m_player=player;
}

bool Ball::insideBoard()
{
    if (y()>BOARD_HEIGHT)
    return false;
    else return true;
}

//QRectF Ball::boundingRect() const
//{
//    return QRectF(x(), y(), m_width, m_height);
//}

int Ball::width()
{
    return m_width;
}

int Ball::height()
{
    return m_height;
}

int Ball::speed()
{
    return m_speed;
}

int Ball::point()
{
    return points;
}

void Ball::move()
{
    //points=0;
    //ball collides with players
    /*if(collidesWithItem(m_computer) || collidesWithItem(m_player)){
        //        dx = -dx;
        dx = -dx;
        dy = -(rand() % 3) ; // random y
    }*/
    if(collidesWithItem(m_player))
    {
        /*dx = -dx;
        dy = -(rand() % 3) - 1; // random y*/
        dy=-dy;
        dx=-(rand()%3)+1;
        points++;
    }
    else if(/*y()>BOARD_HEIGHT - PADDLE_HEIGHT ||*/ y()<0) {
        dy = -dy;
    }
    else if(x()>BOARD_WIDTH-PADDLE_HEIGHT || x()<0)
    {
        dx=-dx;
    }
    /*else if(x()==0)
    {
        dx=-dx;
        //dy=-dy;
    }
    else if(y()==0)
    {
        dy=-dy;
    }*/
    else if (y()>BOARD_HEIGHT)
    {

    }
    else {
        //dy = -(rand() % 2) + 1; // random y
    }
    setPos(x() + (m_speed * dx), y() + (m_speed * dy));
    //m_computer->randomMove(y());
}
