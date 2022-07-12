#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QMainWindow>
#include <QDebug>
#include <QDialog>
#include <QDir>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

#include "peliculas.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

private:
    Ui::Principal *ui;
    QList<Peliculas*> m_peliculas;
    void cargarPeliculas();
};
#endif // PRINCIPAL_H
