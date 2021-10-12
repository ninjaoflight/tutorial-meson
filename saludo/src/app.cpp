#include <app.hpp>
#include <appWindow.hpp>
#include <iostream>

App::App()
    : Gtk::Application("net.xravn.ejemploMeson",
                       Gio::Application::Flags::HANDLES_OPEN) {}

Glib::RefPtr<App> App::create() {
	return Glib::make_refptr_for_instance<App>(new App());
}

AppWindow *App::create_appwindow() {
	auto appwindow = AppWindow::create();

	// Make sure that the application runs for as long this window is still
	// open.
	add_window(*appwindow);

	// A window can be added to an application with
	// Gtk::Application::add_window() or Gtk::Window::set_application(). When
	// all added windows have been hidden or removed, the application stops
	// running (Gtk::Application::run() returns()), unless
	// Gio::Application::hold() has been called.

	// Delete the window when it is hidden.
	appwindow->signal_hide().connect(
	    sigc::bind(sigc::mem_fun(*this, &App::on_hide_window), appwindow));

	return appwindow;
}

void App::on_activate() {
	try {
		// The application has been started, so let's show a window.
		auto appwindow = create_appwindow();
		appwindow->present();
	}
	// If create_appwindow() throws an exception (perhaps from Gtk::Builder),
	// no window has been created, no window has been added to the application,
	// and therefore the application will stop running.
	catch (const Glib::Error &ex) {
		std::cerr << "App::on_activate(): " << ex.what() << std::endl;
	} catch (const std::exception &ex) {
		std::cerr << "App::on_activate(): " << ex.what() << std::endl;
	}
}

void App::on_hide_window(Gtk::Window *window) { delete window; }