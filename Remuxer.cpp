#include <iostream>
#include <gtkmm/application.h>
#include <libavutil/timestamp.h>
#include <libavformat/avformat.h>

#include "MainWindow.h"

int main(int argc, char* argv[])
{
	std::cout << "Hello!!!!" << argv[0] << std::endl;

	auto app = Gtk::Application::create("ru.YourAnti.ScreenShoter");

	return app->make_window_and_run<MainWindow>(argc, argv); 
}