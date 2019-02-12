#include <frame.h>

Frame::Frame(QWidget *parent):QFrame(parent)
{
    m_layout=new QGridLayout(this);
    but=new QPushButton("OK",this);
    but1=new QPushButton("Quit",this);
    m_lineLogin=new QLineEdit("Login...",this);
    m_linePassword=new QLineEdit("Password...",this);
    but->setSizePolicy(QSizePolicy::Minimum,
                    QSizePolicy::Preferred);
    but1->setSizePolicy(QSizePolicy::Minimum,
                    QSizePolicy::Preferred);
    m_layout->addWidget(but,0,0);
    m_layout->addWidget(but1,1,0);
    m_layout->addWidget(m_lineLogin,0,1);
    m_layout->addWidget(m_linePassword,1,1);
    m_lineLogin->setSizePolicy(/*HORIZONTAL*/
                          QSizePolicy::Fixed,
                          /*VERTICAL*/
                          QSizePolicy::Preferred);
    m_linePassword->setSizePolicy(/*HORIZONTAL*/
                          QSizePolicy::Fixed,
                          /*VERTICAL*/
                          QSizePolicy::Preferred);
   but->setStyleSheet(
                "QPushButton{"
                "background-color: rgb(60, 60, 60);"
                "border-radius: 4px transparent;"
                "border-bottom: 3px transparent;"
                "border-right: 2px transparent;"
                "border-left: 2px transparent;}"
                "QPushButton:hover{"
                "background-color: rgb(255,130,00);} "
                "QPushButton:pressed  {"
                "background-color: rgb(232,95,76); } "
                );
   but1->setStyleSheet(
                "QPushButton{"
                "background-color: rgb(200, 200, 1);"
                "border-radius: 4px transparent;"
                "border-bottom: 3px transparent;"
                "border-right: 2px transparent;"
                "border-left: 2px transparent;}"
                "QPushButton:hover{"
                "background-color: rgb(12,80,00);} "
                "QPushButton:pressed  {"
                "background-color: rgb(100,10,10); } "
                );
}
