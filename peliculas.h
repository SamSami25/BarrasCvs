#ifndef PELICULAS_H
#define PELICULAS_H

#include <QObject>

class Peliculas : public QObject
{
    Q_OBJECT

private:

    int m_id;
    QString m_nombre;
    double m_horas;

public:
    explicit Peliculas(QObject *parent = nullptr);
    Peliculas(int id,const QString &nombre, double horas, QObject *parent = nullptr );

    int id() const;
    void setId(int id);
    QString nombre() const;
    void setNombre(const QString &nombre);
    double getHoras() const;
    void setHoras(double value);
};

#endif // PELICULAS_H
