#include "chordprogression.h"
#include <QApplication>
#include <QStringList>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChordProgression w;
    w.show();

    return a.exec();
}
