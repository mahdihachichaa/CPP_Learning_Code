set(executables
    translator
    exo3
    exo4
)
foreach(executable ${executables})
    add_executable(c1-${executable} ${executable}.cpp)
endforeach()

