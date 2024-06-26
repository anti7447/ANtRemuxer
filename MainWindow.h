#ifndef GTKMM_MAINWINDOW_H
#define GTKMM_MAINWINDOW_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

// Main Window Class
class MainWindow : public Gtk::Window
{
public:
    MainWindow();
    ~MainWindow();

protected:
    //Signal handlers:
    void on_button_clicked();

    //Member widgets:
    Gtk::Button m_button;
};

#endif