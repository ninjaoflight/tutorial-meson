#pragma once
#include <gtkmm-4.0/gtkmm/application.h>

class AppWindow;

class App : public Gtk::Application {
  protected:
	App();

  public:
	static Glib::RefPtr<App> create();

  protected:
	// Override default signal handlers:
	void on_activate() override;

  private:
	AppWindow *create_appwindow();
	void on_hide_window(Gtk::Window *window);
};