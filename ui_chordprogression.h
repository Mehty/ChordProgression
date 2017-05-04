/********************************************************************************
** Form generated from reading UI file 'chordprogression.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHORDPROGRESSION_H
#define UI_CHORDPROGRESSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChordProgression
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox;
    QPushButton *chordButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ChordProgression)
    {
        if (ChordProgression->objectName().isEmpty())
            ChordProgression->setObjectName(QStringLiteral("ChordProgression"));
        ChordProgression->resize(400, 140);
        centralWidget = new QWidget(ChordProgression);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_1 = new QLineEdit(centralWidget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));

        horizontalLayout->addWidget(lineEdit_1);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout->addWidget(lineEdit_6);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        chordButton = new QPushButton(centralWidget);
        chordButton->setObjectName(QStringLiteral("chordButton"));

        horizontalLayout->addWidget(chordButton);


        verticalLayout->addLayout(horizontalLayout);

        ChordProgression->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ChordProgression);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        ChordProgression->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ChordProgression);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ChordProgression->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ChordProgression);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ChordProgression->setStatusBar(statusBar);

        retranslateUi(ChordProgression);

        QMetaObject::connectSlotsByName(ChordProgression);
    } // setupUi

    void retranslateUi(QMainWindow *ChordProgression)
    {
        ChordProgression->setWindowTitle(QApplication::translate("ChordProgression", "ChordProgression", Q_NULLPTR));
        label->setText(QApplication::translate("ChordProgression", "Enter 6 notes as melody line and choose the key signature:", Q_NULLPTR));
        lineEdit_5->setText(QString());
        chordButton->setText(QApplication::translate("ChordProgression", "Get Chords", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChordProgression: public Ui_ChordProgression {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHORDPROGRESSION_H
