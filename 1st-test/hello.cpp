#include "hello.h"
#include "ui_hello.h"

Hello::Hello()
{
        resize(200, 100);
        setWindowTitle("Hello!");
        setAlignment(Qt::AlignCenter);
        setText("Hello World!");
}
