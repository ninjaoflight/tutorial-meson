test_sources = [
    'source.cpp',
    'saludo-test.cpp'
]

test_dependencies = [
    catch2_dep
]

testexe = executable('testexe', test_sources,
                     include_directories : saludo_inc,
                     link_with : saludo_lib,
                     dependencies: test_dependencies)
test('saludolib test', testexe)