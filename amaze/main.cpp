#include "MazeWindow.h"
#include <QApplication>
#include <iostream>
#include <cstdio>

#include "util/PathAlgorithm.h"
#include "alg/KissAlgorithm.h"

using namespace std;
using namespace util;
using namespace alg;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MazeWindow w;
    w.show();

    // Console output via Qt Creator
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Hello World\n";
    PathAlgorithm * alg = new KissAlgorithm();
    cout << alg->hasNext() << endl;
    printf("%d" , alg->hasNext());
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

    return a.exec();
}
