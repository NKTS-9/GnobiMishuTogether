#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_db = QSqlDatabase::addDatabase("QSQLITE"); //соединение объекта базы данных
                                    // с СУБД
    m_db.setDatabaseName("myDB");  //определение имени базы данных
    query = new QSqlQuery(m_db); // создание объекта для запроса
    if(!m_db.open()) // проверка на ошибку при открытии или создании базы данных
        throw "can't open database";
    if(!m_db.tables().contains("Naruto")) // если в базе не существует таблица  Naruto,
    { //то создание таблицы  Naruto и заполнение данными
        query->clear(); // очистка запроса
  query->exec("CREATE TABLE Naruto(ID INTEGER PRIMARY KEY, Name VARCHAR, Age INTEGER, Team VARCHAR, Rank VARCHAR);");  // исполнение запроса на добавление записи
        query->clear();
        query->exec("INSERT INTO Naruto (ID,Name,Age,Team,Rank) VALUES (1,'Hatake Kakashi', 26, 'Team#7', 'Jonin');");
        query->clear();
        query->exec("INSERT INTO Naruto (ID,Name,Age,Team,Rank) VALUES (2,'Uzumaki Naruto', 12, 'Team#7', 'Genin');");
    }
    model = new QSqlTableModel(this,m_db); // создание
                              // редактируемой модели базы данных
    model->setTable("Naruto"); // создание модели таблицы  Naruto

    model->select(); // заполнение модели данными
    model->setEditStrategy(QSqlTableModel::OnFieldChange); // выбор стратегии
                    //  сохранения изменений в базе данных
                    //- сохранение происходит при переходе к другому полю
    ui->tableView->setModel(model); // соединение модели
                    // и ее табличного представления в форме
}

MainWindow::~MainWindow()
{
    delete ui;
    delete query;
    delete model;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->lineEditName->text().isEmpty()||ui->lineEditAge->text().isEmpty()||ui->lineEditID->text().isEmpty()||ui->lineEditTeam->text().isEmpty()||ui->lineEditRank->text().isEmpty())
        return;
    QString id = ui->lineEditID->text();
    QString name = ui->lineEditName->text();
    QString age = ui->lineEditAge->text();
    QString team = ui->lineEditTeam->text();
    QString rank = ui->lineEditRank->text();
    QString buf = tr("INSERT INTO Naruto (ID,Name,Age,Team,Rank) VALUES (")+id+tr(",'")+name+tr("',")+age+tr(",'")+team+tr("','")+rank+tr("');");
    query->clear();
    query->exec(buf);
    model->select();
}

void MainWindow::on_pushButton_4_clicked()
{
    model->setFilter("Age>19");
        model->select();
        ui->tableView->setModel(model);
}

void MainWindow::on_pushButton_5_clicked()
{
    model->setFilter("Age<20");
        model->select();
        ui->tableView->setModel(model);
}

void MainWindow::on_pushButton_3_clicked()
{
    model->setFilter("");
        model->select();
        ui->tableView->setModel(model);
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->lineEditIDD->text().isEmpty())
            return;
        QString id = ui->lineEditIDD->text();
        query->clear();
        query->exec(tr("DELETE FROM Naruto WHERE ID=")+id);
        model->select();
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEditID->setText("13");
    ui->lineEditName->setText("Vsevolod Ryndin");
    ui->lineEditRank->setText("Ubol'd1");
    ui->lineEditAge->setText("20");
    ui->lineEditTeam->setText("NKTS-91");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEditID->setText("6");
    ui->lineEditName->setText("Andrew Kim");
    ui->lineEditRank->setText("Ubol'd2");
    ui->lineEditAge->setText("20");
    ui->lineEditTeam->setText("NKTS-91");
}
