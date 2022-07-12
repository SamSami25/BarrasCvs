#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::cargarPeliculas()
{
    // Crear productos "quemados" en el código
     m_peliculas.append(new Peliculas(1, "Minions", 11.80));
     m_peliculas.append(new Peliculas(2, "Spiderman de Regreso a Casa", 15.30));
     m_peliculas.append(new Peliculas(3, "Intesamente", 9.00));
     m_peliculas.append(new Peliculas(4,"Salto en Paracaidas",21.00));
    // Podría leerse de una base de datos, de un archivo o incluso de Internet
    //para obtener el archivo

    QDir actual = QDir::current(); //directorio actual
    // El path al archivo CSV
    QString archivoProductos = actual.absolutePath() + "/debug/Productos.csv";
    QFile archivo(archivoProductos);

    //qDebug() << archivo.fileName();

    if (archivo.open(QIODevice::ReadOnly | QIODevice::Text)){

        bool primera = true;
        QTextStream in(&archivo);
        while (!in.atEnd()) {
            QString linea = in.readLine();
            if (primera){
                primera = false;
                continue;
            }
            QStringList datos = linea.split(";");
            QString precio = datos.at(2);
            float p = precio.toFloat();
            int id = datos.at(0).toInt();
            m_productos.append(new Producto(id, datos.at(1), p));
        }
        archivo.close();
    }else{
        qDebug()<< "No se pudo abrir el archivo";
    }
}

