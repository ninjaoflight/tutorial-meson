saludo_sources = ['saludo.cpp']
saludo_args = ['-DBUILDING_LIBSAMPLEd']
saludo_dep = shared_library('lib-saludo',
                        saludo_sources,
                        include_directories : saludo_inc,
                        cpp_args: saludo_args,
                        dependencies : fmt_dep)