#include "gtkmm/builder.h"
#include "gtkmm/button.h"
#include "gtkmm/entry.h"
#include <appWindow.hpp>

AppWindow::AppWindow() : Gtk::ApplicationWindow() {}

AppWindow::AppWindow(BaseObjectType *cobject,
                     const Glib::RefPtr<Gtk::Builder> &refBuilder)
    : Gtk::ApplicationWindow(cobject), m_refBuilder(refBuilder),
      btnActualizar(refBuilder->get_widget<Gtk::Button>("btnActualizar")),
      txtNombre(refBuilder->get_widget<Gtk::Entry>("txtNombre")) {
	if (btnActualizar && txtNombre) {
		btnActualizar->signal_clicked().connect(
		    sigc::mem_fun(*this, &AppWindow::onBtnActualizarClickeds));
	}
}

// static
AppWindow *AppWindow::create() {
	// Load the Builder file and instantiate its widgets.
	// auto refBuilder =
	//    Gtk::Builder::create_from_resource("/net/xravn/tutorial-meson/assets/window.ui");

	auto builder = Gtk::Builder::create_from_file(std::string(UI_RESOURCE_FILE),
	                                              "tutorialMeson");

	auto window =
	    Gtk::Builder::get_widget_derived<AppWindow>(builder, "tutorialMeson");
	if (!window)
		throw std::runtime_error(R"(No "app_window" object in window.ui)");

	return window;
}
void AppWindow::onBtnActualizarClickeds() {
	saludo.setNombre(txtNombre->get_text());
	btnActualizar->set_label(saludo.saludar());
	txtNombre->set_tooltip_text(saludo.saludar());
}