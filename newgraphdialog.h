#ifndef NEWGRAPHDIALOG_H
#define NEWGRAPHDIALOG_H

#include <QDialog>
#include "graphingwindow.h"
#include "dbchandler.h"

namespace Ui {
class NewGraphDialog;
}

class NewGraphDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewGraphDialog(DBCHandler *handler, QWidget *parent = 0);
    ~NewGraphDialog();
    void getParams(GraphParams &);
    void setParams(GraphParams &);
    void clearParams();

private slots:
    void addButtonClicked();
    void colorSwatchClick();
    void loadMessages();
    void loadSignals(int idx);
    void fillFormFromSignal(int idx);
    void setSignalActive(bool);
    void setStandardActive(bool);

private:
    Ui::NewGraphDialog *ui;
    DBCHandler *dbcHandler;
};

#endif // NEWGRAPHDIALOG_H
