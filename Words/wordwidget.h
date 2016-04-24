#ifndef WORDWIDGET_H
#define WORDWIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QListWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
class WordWidget : public QWidget
{
    Q_OBJECT
public:
    explicit WordWidget(QWidget *parent = 0);

signals:

public slots:

private:
    QLineEdit *m_search;
    QListWidget *m_words;
    QPushButton *m_add;
    QPushButton *m_rm;
    QTextEdit *m_text;
};

#endif // WORDWIDGET_H
