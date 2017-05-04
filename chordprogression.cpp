#include "chordprogression.h"
#include "ui_chordprogression.h"
#include <QString>
#include <QStringList>
#include "key.h"
#include <QVariant>
#include <QtCore>
#include <QtGui>
#include <QTextEdit>
#include <stdlib.h>

// C Major
QString CMajorI = "C,E,G";
QStringList CMI = CMajorI.split(",");

QString CMajorIV = "F,A,C";
QStringList CMIV = CMajorIV.split(",");

QString CMajorV = "G,B,D";
QStringList CMV = CMajorV.split(",");

// G Major
QString GMajorI = "G,B,D";
QStringList GMI = GMajorI.split(",");

QString GMajorIV = "C,E,G";
QStringList GMIV = GMajorIV.split(",");

QString GMajorV = "D,F#,A";
QStringList GMV = GMajorV.split(",");

// D Major
QString DMajorI = "D,F#,A";
QStringList DMI = DMajorI.split(",");

QString DMajorIV = "G,B,D";
QStringList DMIV = DMajorIV.split(",");

QString DMajorV = "A,C#,E";
QStringList DMV = DMajorV.split(",");

// A Major
QString AMajorI = "A,C#,E";
QStringList AMI = AMajorI.split(",");

QString AMajorIV = "D,F#,A";
QStringList AMIV = AMajorIV.split(",");

QString AMajorV = "E,G#,B";
QStringList AMV = AMajorV.split(",");

// E Major
QString EMajorI = "E,G#,B";
QStringList EMI = EMajorI.split(",");

QString EMajorIV = "A,C#,E";
QStringList EMIV = EMajorIV.split(",");

QString EMajorV = "B,D#,F#";
QStringList EMV = EMajorV.split(",");

// B/Cb Major
QString BMajorI = "B,D#,F#";
QStringList BMI = BMajorI.split(",");

QString BMajorIV = "E,G#,B";
QStringList BMIV = BMajorIV.split(",");

QString BMajorV = "F#,A#,C#";
QStringList BMV = BMajorV.split(",");

// F#/Gb Major
QString FSMajorI = "F#,A#,C#";
QStringList FSMI = FSMajorI.split(",");

QString FSMajorIV = "B,D#,F#";
QStringList FSMIV = FSMajorIV.split(",");

QString FSMajorV = "C#, E#, D#";
QStringList FSMV = FSMajorV.split(",");

// C#/Db Major
QString CSMajorI = "C#, E#, D#";
QStringList CSMI = CSMajorI.split(",");

QString CSMajorIV = "F#,A#,C#";
QStringList CSMIV = CSMajorIV.split(",");

QString CSMajorV = "G#,B#,D#";
QStringList CSMV = CSMajorV.split(",");

// Ab Major
QString AFMajorI = "Ab,C,Eb";
QStringList AFMI = AFMajorI.split(",");

QString AFMajorIV = "Db,F,Ab";
QStringList AFMIV = AFMajorIV.split(",");

QString AFMajorV = "Eb,G,Bb";
QStringList AFMV = AFMajorV.split(",");

// Eb Major
QString EFMajorI = "Eb,G,Bb";
QStringList EFMI = EFMajorI.split(",");

QString EFMajorIV = "Ab,C,Eb";
QStringList EFMIV = EFMajorIV.split(",");

QString EFMajorV = "Bb,D,F";
QStringList EFMV = EFMajorV.split(",");

// Bb Major
QString BFMajorI = "Bb,D,F";
QStringList BFMI = BFMajorI.split(",");

QString BFMajorIV = "Eb,G,Bb";
QStringList BFMIV = BFMajorIV.split(",");

QString BFMajorV = "F,A,C";
QStringList BFMV = BFMajorV.split(",");

// F Major
QString FMajorI = "F,A,C";
QStringList FMI = FMajorI.split(",");

QString FMajorIV = "Bb,D,F";
QStringList FMIV = FMajorIV.split(",");

QString FMajorV = "C,E,G";
QStringList FMV = FMajorV.split(",");



ChordProgression::ChordProgression(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChordProgression)
{
    ui->setupUi(this);

    ui->comboBox->addItem("C major");
    ui->comboBox->addItem("G major");
    ui->comboBox->addItem("D major");
    ui->comboBox->addItem("A major");
    ui->comboBox->addItem("E major");
    ui->comboBox->addItem("B major");
    ui->comboBox->addItem("F# major");
    ui->comboBox->addItem("C# major");
    ui->comboBox->addItem("Bb major");
    ui->comboBox->addItem("Eb major");
    ui->comboBox->addItem("Ab major");
    ui->comboBox->addItem("F major");
}

ChordProgression::~ChordProgression()
{
    delete ui;
}


void ChordProgression::on_chordButton_clicked()
{
    int IFlag = 0;
    int IVFlag = 0;
    int VFlag = 0;
    QString note1;
    QString note2;
    QString note3;
    QString note4;
    QString note5;
    QString note6;

    // C Major
    if (ui->comboBox->currentText() == "C major") {

        note1 = "C";
        note6 = "C";

        // LineEdit_2
        foreach (QString note, CMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, CMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, CMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "C";
            }
            else {
                note2 = "F";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "C";
            }
            else {
                note2 = "G";
            }
        }
        else if (IFlag) note2 = "C";
        else if (IVFlag) note2 = "F";
        else if (VFlag) note2 = "G";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, CMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, CMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, CMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "C";
            }
            else {
                note3 = "F";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "C";
            }
            else {
                note3 = "G";
            }
        }
        else if (IFlag) note3 = "C";
        else if (IVFlag) note3 = "F";
        else if (VFlag) note3 = "G";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, CMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, CMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, CMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "C";
            }
            else {
                note4 = "F";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "C";
            }
            else {
                note4 = "G";
            }
        }
        else if (IFlag) note4 = "C";
        else if (IVFlag) note4 = "F";
        else if (VFlag) note4 = "G";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, CMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, CMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, CMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "C";
            }
            else {
                note5 = "F";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "C";
            }
            else {
                note5 = "G";
            }
        }
        else if (IFlag) note5 = "C";
        else if (IVFlag) note5 = "F";
        else if (VFlag) note5 = "G";
    }

    // G Major
    if (ui->comboBox->currentText() == "G major") {

        note1 = "G";
        note6 = "G";

        // LineEdit_2
        foreach (QString note, GMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, GMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, GMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "G";
            }
            else {
                note2 = "C";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "G";
            }
            else {
                note2 = "D";
            }
        }
        else if (IFlag) note2 = "G";
        else if (IVFlag) note2 = "C";
        else if (VFlag) note2 = "D";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, GMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, GMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, GMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "G";
            }
            else {
                note3 = "C";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "G";
            }
            else {
                note3 = "D";
            }
        }
        else if (IFlag) note3 = "G";
        else if (IVFlag) note3 = "C";
        else if (VFlag) note3 = "D";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, GMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, GMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, GMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "G";
            }
            else {
                note4 = "C";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "G";
            }
            else {
                note4 = "D";
            }
        }
        else if (IFlag) note4 = "G";
        else if (IVFlag) note4 = "C";
        else if (VFlag) note4 = "D";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, GMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, GMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, GMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "G";
            }
            else {
                note5 = "C";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "G";
            }
            else {
                note5 = "D";
            }
        }
        else if (IFlag) note5 = "G";
        else if (IVFlag) note5 = "C";
        else if (VFlag) note5 = "D";
    }

    // D major
    if (ui->comboBox->currentText() == "D major") {

        note1 = "D";
        note6 = "D";

        // LineEdit_2
        foreach (QString note, DMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, DMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, DMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "D";
            }
            else {
                note2 = "G";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "D";
            }
            else {
                note2 = "A";
            }
        }
        else if (IFlag) note2 = "D";
        else if (IVFlag) note2 = "G";
        else if (VFlag) note2 = "A";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, DMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, DMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, DMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "D";
            }
            else {
                note3 = "G";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "D";
            }
            else {
                note3 = "A";
            }
        }
        else if (IFlag) note3 = "D";
        else if (IVFlag) note3 = "G";
        else if (VFlag) note3 = "A";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, DMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, DMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, DMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "D";
            }
            else {
                note4 = "G";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "D";
            }
            else {
                note4 = "A";
            }
        }
        else if (IFlag) note4 = "D";
        else if (IVFlag) note4 = "G";
        else if (VFlag) note4 = "A";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, DMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, DMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, DMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "D";
            }
            else {
                note5 = "G";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "D";
            }
            else {
                note5 = "A";
            }
        }
        else if (IFlag) note5 = "D";
        else if (IVFlag) note5 = "G";
        else if (VFlag) note5 = "A";
    }


    // A major
    if (ui->comboBox->currentText() == "A major") {

        note1 = "A";
        note6 = "A";

        // LineEdit_2
        foreach (QString note, AMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, AMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, AMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "A";
            }
            else {
                note2 = "D";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "A";
            }
            else {
                note2 = "E";
            }
        }
        else if (IFlag) note2 = "A";
        else if (IVFlag) note2 = "D";
        else if (VFlag) note2 = "E";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, AMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, AMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, AMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "A";
            }
            else {
                note3 = "D";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "A";
            }
            else {
                note3 = "E";
            }
        }
        else if (IFlag) note3 = "A";
        else if (IVFlag) note3 = "D";
        else if (VFlag) note3 = "E";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, AMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, AMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, AMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "A";
            }
            else {
                note4 = "D";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "A";
            }
            else {
                note4 = "E";
            }
        }
        else if (IFlag) note4 = "A";
        else if (IVFlag) note4 = "D";
        else if (VFlag) note4 = "E";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, AMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, AMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, AMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "A";
            }
            else {
                note5 = "D";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "A";
            }
            else {
                note5 = "E";
            }
        }
        else if (IFlag) note5 = "A";
        else if (IVFlag) note5 = "D";
        else if (VFlag) note5 = "E";
    }

    // E major
    if (ui->comboBox->currentText() == "E major") {

        note1 = "E";
        note6 = "E";

        // LineEdit_2
        foreach (QString note, EMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, EMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, EMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "E";
            }
            else {
                note2 = "A";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "E";
            }
            else {
                note2 = "B";
            }
        }
        else if (IFlag) note2 = "E";
        else if (IVFlag) note2 = "A";
        else if (VFlag) note2 = "B";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, EMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, EMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, EMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "E";
            }
            else {
                note3 = "A";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "E";
            }
            else {
                note3 = "B";
            }
        }
        else if (IFlag) note3 = "E";
        else if (IVFlag) note3 = "A";
        else if (VFlag) note3 = "B";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, EMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, EMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, EMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "E";
            }
            else {
                note4 = "A";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "E";
            }
            else {
                note4 = "B";
            }
        }
        else if (IFlag) note4 = "E";
        else if (IVFlag) note4 = "A";
        else if (VFlag) note4 = "B";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, EMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, EMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, EMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "E";
            }
            else {
                note5 = "A";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "E";
            }
            else {
                note5 = "B";
            }
        }
        else if (IFlag) note5 = "E";
        else if (IVFlag) note5 = "A";
        else if (VFlag) note5 = "B";
    }

    // B major
    if (ui->comboBox->currentText() == "B major") {

        note1 = "B";
        note6 = "B";

        // LineEdit_2
        foreach (QString note, BMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, BMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, BMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "B";
            }
            else {
                note2 = "E";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "B";
            }
            else {
                note2 = "F#";
            }
        }
        else if (IFlag) note2 = "B";
        else if (IVFlag) note2 = "E";
        else if (VFlag) note2 = "F#";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, BMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, BMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, BMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "B";
            }
            else {
                note3 = "E";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "B";
            }
            else {
                note3 = "F#";
            }
        }
        else if (IFlag) note3 = "B";
        else if (IVFlag) note3 = "E";
        else if (VFlag) note3 = "F#";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, BMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, BMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, BMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "B";
            }
            else {
                note4 = "E";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "B";
            }
            else {
                note4 = "F#";
            }
        }
        else if (IFlag) note4 = "B";
        else if (IVFlag) note4 = "E";
        else if (VFlag) note4 = "F#";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, BMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, BMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, BMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "B";
            }
            else {
                note5 = "E";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "B";
            }
            else {
                note5 = "F#";
            }
        }
        else if (IFlag) note5 = "B";
        else if (IVFlag) note5 = "E";
        else if (VFlag) note5 = "F#";
    }

    // F# major
    if (ui->comboBox->currentText() == "F# major") {

        note1 = "F#";
        note6 = "F#";

        // LineEdit_2
        foreach (QString note, FSMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, FSMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, FSMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "F#";
            }
            else {
                note2 = "B";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "F#";
            }
            else {
                note2 = "C#";
            }
        }
        else if (IFlag) note2 = "F#";
        else if (IVFlag) note2 = "B";
        else if (VFlag) note2 = "C#";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, FSMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, FSMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, FSMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "F#";
            }
            else {
                note3 = "B";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "F#";
            }
            else {
                note3 = "C#";
            }
        }
        else if (IFlag) note3 = "F#";
        else if (IVFlag) note3 = "B";
        else if (VFlag) note3 = "C#";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, FSMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, FSMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, FSMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "F#";
            }
            else {
                note4 = "B";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "F#";
            }
            else {
                note4 = "C#";
            }
        }
        else if (IFlag) note4 = "F#";
        else if (IVFlag) note4 = "B";
        else if (VFlag) note4 = "C#";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, FSMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, FSMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, FSMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "F#";
            }
            else {
                note5 = "B";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "F#";
            }
            else {
                note5 = "C#";
            }
        }
        else if (IFlag) note5 = "F#";
        else if (IVFlag) note5 = "B";
        else if (VFlag) note5 = "C#";
    }
    // C# major
    if (ui->comboBox->currentText() == "C# major") {

        note1 = "C#";
        note6 = "C#";

        // LineEdit_2
        foreach (QString note, CSMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, CSMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, CSMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "C#";
            }
            else {
                note2 = "F#";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "C#";
            }
            else {
                note2 = "G#";
            }
        }
        else if (IFlag) note2 = "C#";
        else if (IVFlag) note2 = "F#";
        else if (VFlag) note2 = "G#";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, CSMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, CSMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, CSMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "C#";
            }
            else {
                note3 = "F#";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "C#";
            }
            else {
                note3 = "G#";
            }
        }
        else if (IFlag) note3 = "C#";
        else if (IVFlag) note3 = "F#";
        else if (VFlag) note3 = "G#";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, CSMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, CSMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, CSMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "C#";
            }
            else {
                note4 = "F#";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "C#";
            }
            else {
                note4 = "F#";
            }
        }
        else if (IFlag) note4 = "C#";
        else if (IVFlag) note4 = "F#";
        else if (VFlag) note4 = "G#";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, CSMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, CSMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, CSMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "C#";
            }
            else {
                note5 = "F#";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "C#";
            }
            else {
                note5 = "G#";
            }
        }
        else if (IFlag) note5 = "C#";
        else if (IVFlag) note5 = "F#";
        else if (VFlag) note5 = "G#";
    }
    // Bb major
    if (ui->comboBox->currentText() == "Bb major") {

        note1 = "Bb";
        note6 = "Bb";

        // LineEdit_2
        foreach (QString note, BFMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, BFMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, BFMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "Bb";
            }
            else {
                note2 = "Eb";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "Bb";
            }
            else {
                note2 = "F";
            }
        }
        else if (IFlag) note2 = "Bb";
        else if (IVFlag) note2 = "Eb";
        else if (VFlag) note2 = "F";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, BFMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, BFMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, BFMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "Bb";
            }
            else {
                note3 = "Eb";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "Bb";
            }
            else {
                note3 = "F";
            }
        }
        else if (IFlag) note3 = "Bb";
        else if (IVFlag) note3 = "Eb";
        else if (VFlag) note3 = "F";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, BFMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, BFMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, BFMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "Bb";
            }
            else {
                note4 = "Eb";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "Bb";
            }
            else {
                note4 = "F";
            }
        }
        else if (IFlag) note4 = "Bb";
        else if (IVFlag) note4 = "Eb";
        else if (VFlag) note4 = "F";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, BFMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, BFMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, BFMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "Bb";
            }
            else {
                note5 = "Eb";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "Bb";
            }
            else {
                note5 = "F";
            }
        }
        else if (IFlag) note5 = "Bb";
        else if (IVFlag) note5 = "Eb";
        else if (VFlag) note5 = "F";
    }
    // Eb major
    if (ui->comboBox->currentText() == "Eb major") {

        note1 = "Eb";
        note6 = "Eb";

        // LineEdit_2
        foreach (QString note, EFMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, EFMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, EFMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "Eb";
            }
            else {
                note2 = "Ab";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "Eb";
            }
            else {
                note2 = "Bb";
            }
        }
        else if (IFlag) note2 = "Eb";
        else if (IVFlag) note2 = "Ab";
        else if (VFlag) note2 = "Bb";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, EFMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, EFMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, EFMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "Eb";
            }
            else {
                note3 = "Ab";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "Eb";
            }
            else {
                note3 = "Bb";
            }
        }
        else if (IFlag) note3 = "Eb";
        else if (IVFlag) note3 = "Ab";
        else if (VFlag) note3 = "Bb";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, EFMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, EFMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, EFMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "Eb";
            }
            else {
                note4 = "Ab";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "Eb";
            }
            else {
                note4 = "Bb";
            }
        }
        else if (IFlag) note4 = "Eb";
        else if (IVFlag) note4 = "Ab";
        else if (VFlag) note4 = "Bb";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, EFMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, EFMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, EFMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "Eb";
            }
            else {
                note5 = "Ab";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "Eb";
            }
            else {
                note5 = "Bb";
            }
        }
        else if (IFlag) note5 = "Eb";
        else if (IVFlag) note5 = "Ab";
        else if (VFlag) note5 = "Bb";
    }
    // Ab major
    if (ui->comboBox->currentText() == "Ab major") {

        note1 = "Ab";
        note6 = "Ab";

        // LineEdit_2
        foreach (QString note, AFMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, AFMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, AFMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "Ab";
            }
            else {
                note2 = "Db";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "Ab";
            }
            else {
                note2 = "Eb";
            }
        }
        else if (IFlag) note2 = "Ab";
        else if (IVFlag) note2 = "Db";
        else if (VFlag) note2 = "Eb";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, AFMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, AFMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, AFMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "Ab";
            }
            else {
                note3 = "Db";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "Ab";
            }
            else {
                note3 = "Eb";
            }
        }
        else if (IFlag) note3 = "Ab";
        else if (IVFlag) note3 = "Db";
        else if (VFlag) note3 = "Eb";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, AFMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, AFMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, AFMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "Ab";
            }
            else {
                note4 = "Db";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "Ab";
            }
            else {
                note4 = "Eb";
            }
        }
        else if (IFlag) note4 = "Ab";
        else if (IVFlag) note4 = "Db";
        else if (VFlag) note4 = "Eb";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, AFMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, AFMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, AFMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "Ab";
            }
            else {
                note5 = "Db";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "Ab";
            }
            else {
                note5 = "Eb";
            }
        }
        else if (IFlag) note5 = "Ab";
        else if (IVFlag) note5 = "Db";
        else if (VFlag) note5 = "Eb";
    }

    // F major
    if (ui->comboBox->currentText() == "F major") {

        note1 = "F";
        note6 = "F";

        // LineEdit_2
        foreach (QString note, FMI) {
            if (ui->lineEdit_2->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, FMIV) {
            if (ui->lineEdit_2->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, FMV) {
            if (ui->lineEdit_2->text() == note) {
                VFlag = 1;
            }
        }
        int r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note2 = "F";
            }
            else {
                note2 = "Bb";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note2 = "F";
            }
            else {
                note2 = "C";
            }
        }
        else if (IFlag) note2 = "F";
        else if (IVFlag) note2 = "Bb";
        else if (VFlag) note2 = "C";

        int IFlag = 0;
        int IVFlag = 0;
        int VFlag = 0;

        //LineEdit_3
        foreach (QString note, FMI) {
            if (ui->lineEdit_3->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, FMIV) {
            if (ui->lineEdit_3->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, FMV) {
            if (ui->lineEdit_3->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note3 = "F";
            }
            else {
                note3 = "Bb";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note3 = "F";
            }
            else {
                note3 = "C";
            }
        }
        else if (IFlag) note3 = "F";
        else if (IVFlag) note3 = "Bb";
        else if (VFlag) note3 = "C";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_4
        foreach (QString note, FMI) {
            if (ui->lineEdit_4->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, FMIV) {
            if (ui->lineEdit_4->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, FMV) {
            if (ui->lineEdit_4->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note4 = "F";
            }
            else {
                note4 = "Bb";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note4 = "F";
            }
            else {
                note4 = "C";
            }
        }
        else if (IFlag) note4 = "F";
        else if (IVFlag) note4 = "Bb";
        else if (VFlag) note4 = "C";

        IFlag = 0;
        IVFlag = 0;
        VFlag = 0;

        // LineEdit_5
        foreach (QString note, FMI) {
            if (ui->lineEdit_5->text() == note) {
                IFlag = 1;
            }
        }
        foreach (QString note, FMIV) {
            if (ui->lineEdit_5->text() == note) {
                IVFlag = 1;
            }
        }
        foreach (QString note, FMV) {
            if (ui->lineEdit_5->text() == note) {
                VFlag = 1;
            }
        }
        r = rand() % 2;
        if (IFlag && IVFlag) {
            if (r) {
                note5 = "F";
            }
            else {
                note5 = "Bb";
            }
        }
        else if (IFlag && VFlag) {
            if (r) {
                note5 = "F";
            }
            else {
                note5 = "C";
            }
        }
        else if (IFlag) note5 = "F";
        else if (IVFlag) note5 = "Bb";
        else if (VFlag) note5 = "C";
    }


      QString str = note1 + ", " + note2 + ", " + note3 + ", " + note4 + ", " + note5 + ", " + note6;
      QTextEdit *txt = new QTextEdit();
      txt->setText(str);
      txt->show();

}
