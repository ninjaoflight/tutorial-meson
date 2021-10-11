test_sources = [
    'source.cpp',
    'saludo-test.cpp'
]

testexe = executable('testexe', test_sources,
                     include_directories : saludo_inc,
                     link_with : saludo_dep,
                     dependencies: [catch2_dep]
                     )
test('saludolib test', testexe)