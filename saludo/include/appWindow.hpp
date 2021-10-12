#pragma once
#include <gtkmm-4.0/gtkmm/applicationwindow.h>
#include <gtkmm-4.0/gtkmm/builder.h>
#include <gtkmm-4.0/gtkmm/button.h>
#include <gtkmm-4.0/gtkmm/entry.h>
#include <saludo/saludo.hpp>
#include <string_view>

class AppWindow : public Gtk::ApplicationWindow {
  protected:
	Glib::RefPtr<Gtk::Builder> m_refBuilder;
	Saludo saludo;
	Glib::RefPtr<Gtk::Button> btnActualizar;
	Glib::RefPtr<Gtk::Entry>txtNombre;

  public:
	AppWindow();
	AppWindow(BaseObjectType *cobject,
	          const Glib::RefPtr<Gtk::Builder> &refBuilder);

	static AppWindow *create();

	void onBtnActualizarClickeds();

  private:
	constexpr static std::string_view UI_RESOURCE_FILE = "assets/tutorialMeson.ui";
};