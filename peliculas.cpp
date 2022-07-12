#include "peliculas.h"

Peliculas::Peliculas()
{

}

QString Peliculas::nombre() const
{
    return m_nombre;
}

void Peliculas::setNombre(const QString &nombre)
{
    m_nombre = nombre;
}

double Peliculas::getHoras() const
{
    return horas;
}

void Peliculas::setHoras(double value)
{
    horas = value;
}

Peliculas::Peliculas(QObject *parent) : QObject(parent)
{

}

Peliculas::Peliculas(int id, const QString &nombre, double horas, QObject *parent) : QObject(parent),
    m_id(id),
    m_nombre(nombre),
    m_horas(horas)
{}

int Peliculas::id() const
{
    return m_id;
}

void Peliculas::setId(int id)
{
    m_id = id;
}

Peliculas::Peliculas()
{

}
