#ifndef CHORDPROGRESSION_H
#define CHORDPROGRESSION_H

#include <QMainWindow>

namespace Ui {
class ChordProgression;
}

class ChordProgression : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChordProgression(QWidget *parent = 0);
    ~ChordProgression();

private slots:
    void on_chordButton_clicked();

private:
    Ui::ChordProgression *ui;
};

#endif // CHORDPROGRESSION_H
