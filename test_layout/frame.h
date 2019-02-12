#ifndef FRAME_H
#define FRAME_H
#include <QFrame>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
class Frame:public QFrame
{
    Q_OBJECT
private:
    QGridLayout *m_layout;
    QPushButton *but;
    QPushButton *but1;
    QLineEdit *m_lineLogin;
    QLineEdit *m_linePassword;

public:
    Frame(QWidget *parent=0);
    virtual~Frame(){}
};
#endif // FRAME_H
