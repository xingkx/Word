#include "wordwidget.h"
#include <QGridLayout>
WordWidget::WordWidget(QWidget *parent) :
    QWidget(parent)
{
    m_search = new QLineEdit();
    m_words = new QListWidget();
    m_add = new QPushButton();
    m_add->setText("add");
    m_rm = new QPushButton();
    m_rm->setText("rm");
    m_text = new QTextEdit();
    QHBoxLayout *hbl = new QHBoxLayout();
    hbl->addWidget(m_add);
    hbl->addWidget(m_rm);
    QVBoxLayout *v = new QVBoxLayout();
    v->addLayout(hbl);
    v->addWidget(m_text);
    QVBoxLayout *vbl = new QVBoxLayout();
    vbl->addWidget(m_search);
    vbl->addWidget(m_words);
    QHBoxLayout *bl = new QHBoxLayout();
    bl->addLayout(vbl);
    bl->addLayout(v);
    this->setLayout(bl);
    this->show();

}
