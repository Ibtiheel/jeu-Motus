#include "verif.h"
#include "ui_verif.h"
#include<time.h>
#include <QString>
#include <QMessageBox>
#include<QtGlobal>
#include<QVector>
#include <QtWidgets>
#include <cstdlib>      // std::rand, std::srand
#include<iostream>
#include<windows.h>
#include <QGraphicsItem>
#include <QStringList>
#include<QTableWidget>
#include <QByteArray>
#include<QPushButton>
#include <QTextStream> // Flux sortant du fichier

#include <algorithm>
#include<string>
using namespace std;


Verif::Verif(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Verif)
{
    ui->setupUi(this);

}

Verif::~Verif()
{
    delete ui;
}
Verif::piocheMot()
{

    srand (time(NULL));
    int n=rand() %2;
    return n;
    }


void Verif::on_monButton_clicked(){


    QMessageBox msg;
    QString ch;

    QStringList tab = { "azertyu", "helveti", "timesko" };
    ch=ui->textEdit->toPlainText();
int c=0;
  QChar m1=tab[c][0];
  QChar m2=ch[1];
  QChar m3=ch[2];
  QChar m4=ch[3];
  QChar m5=ch[4];
  QChar m6=ch[5];
  QChar m7=ch[6];
  ui->textBrowser->append(m1);
  ui->textBrowser-> setStyleSheet("QTextBrowser { background-color: red; }");
  ui->textBrowser_3->append(m2);
  ui->textBrowser_4->append(m3);

     ui->textBrowser_5->append(m4);
     ui->textBrowser_6->append(m5);
     ui->textBrowser_7->append(m6);
     ui->textBrowser_8->append(m7);

     int n=ch.size();

        if (n>7)
        {

               msg.setText("le mot contient 7 caractères");
       msg.exec();
    }  else if  (n < 7)
        {    msg.setText("le mot contient 7 caractères");
            msg.exec();}
        else {
                   if(tab[c]==ch){
                       ui->textBrowser-> setStyleSheet("QTextBrowser { background-color: red; }");

               ui->textBrowser_3-> setStyleSheet("QTextBrowser { background-color: red; }");
               ui->textBrowser_4-> setStyleSheet("QTextBrowser { background-color: red; }");
               ui->textBrowser_5-> setStyleSheet("QTextBrowser { background-color: red; }");
               ui->textBrowser_6-> setStyleSheet("QTextBrowser { background-color: red; }");
               ui->textBrowser_7-> setStyleSheet("QTextBrowser { background-color: red; }");
               ui->textBrowser_8-> setStyleSheet("QTextBrowser { background-color: red; }");
               msg.setText("bravo");
                   msg.exec();
                   close();

                   }
               else {  int i=0;

                       while(i!=ch.size())
                       {
                           if (ch[i]==tab[c][i])

                                   {

                                    if (i==0)
                                    {
                                        ui->textBrowser-> setStyleSheet("QTextBrowser { background-color: red; }");

                                    }
                                    if (i==1)
                                    {
                                        ui->textBrowser_3-> setStyleSheet("QTextBrowser { background-color: red; }");

                                    }
                                    if (i==2)
                                    {
                                        ui->textBrowser_4-> setStyleSheet("QTextBrowser { background-color: red; }");

                                    }
                                    if (i==3)
                                    {
                                        ui->textBrowser_5-> setStyleSheet("QTextBrowser { background-color: red; }");

                                    }
                                    if (i==4)
                                    {
                                        ui->textBrowser_6-> setStyleSheet("QTextBrowser { background-color: red; }");

                                    }
                                    if (i==5)
                                    {
                                        ui->textBrowser_7-> setStyleSheet("QTextBrowser { background-color: red; }");

                                    }
                                    if (i==6)
                                    {
                                        ui->textBrowser_8-> setStyleSheet("QTextBrowser { background-color: red; }");

                                    }



                                   }
                            else {
                                   int j;
                                   j=0;
                                   bool ok=false;

                                   while(j!=tab[c].size() && (ok==false))
                                   {

                                     if ((ch[i]==tab[c][j])  )
                                        {
                                         if (i==0)
                                         {
                                             ui->textBrowser ->setStyleSheet("border: 10px solid yellow; border-radius: 20px;");

                                         }
                                         if (i==1)
                                         {
                                             ui->textBrowser_3-> setStyleSheet("border: 10px solid yellow; border-radius: 20px;");

                                         }
                                         if (i==2)
                                         {
                                             ui->textBrowser_4-> setStyleSheet("border: 10px solid yellow; border-radius: 20px;");

                                         }
                                         if (i==3)
                                         {
                                             ui->textBrowser_5-> setStyleSheet("border: 10px solid yellow; border-radius: 20px;");
                                         }
                                         if (i==4)
                                         {
                                             ui->textBrowser_6->setStyleSheet("border:10px solid yellow; border-radius: 20px;");

                                         }
                                         if (i==5)
                                         {
                                             ui->textBrowser_7->setStyleSheet("border: 10px solid yellow; border-radius: 20px;");

                                         }
                                         if (i==6)
                                         {
                                             ui->textBrowser_8->setStyleSheet("border: 10px solid yellow; border-radius:20px;");
                                         }


                                         ok=true;
                                       }
                                    else {
                                           j++;
                                           ok=false;

                                       }
                                   }
                                   if (ok==false)
                                   {



                                       if (i==0)
                                       {
                                           ui->textBrowser-> setStyleSheet("QTextBrowser { background-color: white; }");

                                       }
                                       if (i==1)
                                       {
                                           ui->textBrowser_3-> setStyleSheet("QTextBrowser { background-color: white; }");

                                       }
                                       if (i==2)
                                       {
                                           ui->textBrowser_4-> setStyleSheet("QTextBrowser { background-color:white; }");

                                       }
                                       if (i==3)
                                       {
                                           ui->textBrowser_5-> setStyleSheet("QTextBrowser { background-color: white; }");

                                       }
                                       if (i==4)
                                       {
                                           ui->textBrowser_6-> setStyleSheet("QTextBrowser { background-color: white; }");

                                       }
                                       if (i==5)
                                       {
                                           ui->textBrowser_7-> setStyleSheet("QTextBrowser { background-color: white; }");

                                       }
                                       if (i==6)
                                       {
                                           ui->textBrowser_8-> setStyleSheet("QTextBrowser { background-color: white; }");

                                       }









                                   }

                               }
                            i++;
                           }



}
 }}

