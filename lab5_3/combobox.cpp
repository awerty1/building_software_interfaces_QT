#include <QHBoxLayout>
#include "combobox.h"

ComboBoxEx::ComboBoxEx(QWidget *parent) : QWidget(parent)
{
    QStringList distros = {"Arch", "Xubuntu", "Redhat", "Debian", "Mandriva", "Gentoo"};
    //QStringList distros; distros << "arch" << "xubuntu" << "redhat" << "debian" << "mandriva";

    QHBoxLayout *hbox = new QHBoxLayout(this);

    combo = new QComboBox();
    combo->addItems(distros);

    hbox->addWidget(combo);
    hbox->addSpacing(15);
    //hbox->addStretch();

    label = new QLabel("Arch", this);
    hbox->addWidget(label);

    connect(combo, static_cast<void(QComboBox::*)(const QString &)>(&QComboBox::activated),
            label, &QLabel::setText);

}
