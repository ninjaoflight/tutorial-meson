project(
	'saludo', 'cpp',
	default_options : ['cpp_std=c++17'],
	version : '1.0.0',
	license : 'BSD-3')

# con este parametro podemos establecer una bandera de compilacion para 
# todas las unidades de traduccion (cpp)
#add_global_arguments('-DSOME_TOKEN=value', language : 'cpp')

#glib_dep = dependency('glib-2.0')
fmt_dep = dependency(
	'fmt',
	fallback: ['fmt', 'fmt_dep'])


# la sintaxis de una dependencia es 
# - nombre de la dependencia
# - para fallback es lo siguiente
#    - nombre del wrap
#    - la variable que contiene la dependencia (usualmente "libreria_dep")
# si se requieren mas variables se puede realizar de manera manual de la siguiente forma
#if not catch2_dep.found()
#	catch2_subproj = subproject('catch2')
#	catch2_dep = catch2_subproj.get_variable('catch2_dep')
#   variable_extra = catch2_subproj.get_variable('variable')
#endif

catch2_dep = dependency(
				'catch2',
				fallback : ['catch2', 'catch2_dep'])

gtkmm_dep = dependency('gtkmm-3.0')

subdir('lib-saludo')
subdir('saludo')
subdir('test')

pkg_mod = import('pkgconfig')
pkg_mod.generate(libraries : saludo_dep,
				 version : '1.0',
				 name : 'lib-saludo',
				 filebase : 'lib-saludo',
				 description : 'ejemplo de libreria con meson.')