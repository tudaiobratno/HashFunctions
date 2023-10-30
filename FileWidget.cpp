#include "FileWidget.h"

#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QLabel>

FileWidget::FileWidget(QWidget *p): QWidget(p) {

	resize(800, 200);

    QVBoxLayout *main_lay = new QVBoxLayout();
    
    QLineEdit *data = new QLineEdit(this);
    QTextEdit *result = new QTextEdit(this);
    QLabel *first = new QLabel(this);
    QLabel *second = new QLabel(this);

    first->setText(QString("Write a file path"));
    second->setText(QString("Result:"));

    main_lay->addWidget(first);
    main_lay->addWidget(data);
    main_lay->addWidget(second);
    main_lay->addWidget(result);

    this->setLayout(main_lay);

    
}