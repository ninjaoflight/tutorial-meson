bin_inc = include_directories('include')

bin_sources = [
    'src/app.cpp',
    'src/appWindow.cpp',
    'src/source.cpp'
]
bin_link = [
#    saludo_lib
]
bin_deps = [
    saludo_dep,
    gtkmm_dep
]
saludo_bin = executable('saludo', bin_sources,
                        include_directories : bin_inc,
                        dependencies : bin_deps)

assets_dir = join_paths(meson.source_root(), 'assets/')
assets_out = join_paths(meson.build_root(), 'assets/')

cp_cmd = ['cp', '-r', assets_dir, assets_out]

if host_machine.system() == 'windows'
    cp_cmd = ['powershell', 'cp', '-r', assets_dir, assets_out]
endif

custom_target(
    'assets',
    output: 'dummy',
    command : cp_cmd,
    install : false,
    build_by_default : true)