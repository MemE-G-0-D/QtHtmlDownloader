#ifndef DOWNLOADERHTTP_H
#define DOWNLOADERHTTP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DownloaderHTTP; }
QT_END_NAMESPACE

class DownloaderHTTP : public QMainWindow
{
    Q_OBJECT

public:
    DownloaderHTTP(QWidget *parent = nullptr);
    ~DownloaderHTTP();

private:
    Ui::DownloaderHTTP *ui;
};
#endif // DOWNLOADERHTTP_H
