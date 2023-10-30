#include "Widget.h"

#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QComboBox>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include "FileWidget.h"


Widget::Widget(QWidget *p): QWidget(p) {

	resize(800, 800);


    QVBoxLayout *main_lay = new QVBoxLayout();
    QHBoxLayout *box_lay = new QHBoxLayout();
   

    QLabel *name = new QLabel(this);
    QComboBox *hash_box = new QComboBox(this);
    QComboBox *data_type_box = new QComboBox(this);
    QPushButton *check_button = new QPushButton(this);
    FileWidget *file_wid = new FileWidget(this);
    
    name->setText(QString("Choose the hash and type of data"));
    check_button->setText(QString("Check!"));

    box_lay->addWidget(hash_box);
    box_lay->addWidget(data_type_box);


    main_lay->addWidget(name);
    main_lay->addLayout(box_lay);
    main_lay->addWidget(check_button);
    main_lay->addWidget(file_wid);

    this->setLayout(main_lay);

    
}