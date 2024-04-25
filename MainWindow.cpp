#include "MainWindow.h"
#include <iostream>

MainWindow::MainWindow()
: m_button("Make screenshot")
{
    set_default_size(600, 20);

    m_button.set_margin(10);

    m_button.signal_clicked()
        .connect(sigc::mem_fun(*this,
                 &MainWindow::on_button_clicked));

    set_child(m_button);
}

MainWindow::~MainWindow() { }

void MainWindow::on_button_clicked() {
    std::cout << "Start makes screenshot..." << std::endl;
}
