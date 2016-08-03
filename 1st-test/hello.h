#ifndef HELLO_H
#define HELLO_H

#include <QLabel>

namespace Ui {
class Hello;
}

class Hello : public QLabel
{
    Q_OBJECT

public:   
    Hello();
};

#endif // HELLO_H
