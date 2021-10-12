saludo_sources = ['saludo.cpp']
saludo_args = ['-DBUILDING_LIBSAMPLEd']
saludo_lib = shared_library('lib-saludo',
                        saludo_sources,
                        include_directories : saludo_inc,
                        cpp_args: saludo_args,
                        dependencies : fmt_dep)
saludo_dep = declare_dependency(
    link_with: saludo_lib,
    include_directories: saludo_inc
)
