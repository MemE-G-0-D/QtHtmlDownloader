#include "downloaderhttp.h"
#include "ui_downloaderhttp.h"

DownloaderHTTP::DownloaderHTTP(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DownloaderHTTP)
{
    ui->setupUi(this);
}

DownloaderHTTP::~DownloaderHTTP()
{
    delete ui;
}

