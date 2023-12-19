#ifndef ABOUT_DIALOG_H
#define ABOUT_DIALOG_H

class AboutDialog : public QDialog
{
    Q_OBJECT
public:
	AboutDialog(QWidget *parent = NULL);
private slots:
	void help();
};

#endif