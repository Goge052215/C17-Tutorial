cmake_minimum_required(VERSION 3.26)
project(C_tutorial C)

set(CMAKE_C_STANDARD 11)

add_executable(C_tutorial C_tutorial/1.1_Helloworld.c)
add_executable(1.2_Variables C_tutorial/1.2_Variables.c)
add_executable(1.3_printf C_tutorial/1.3_printf_scanf.c)
add_executable(2.1_arithmetic C_tutorial/2.1_expression.c)
add_executable(2.2_statements C_tutorial/2.2_statements.c)
add_executable(2.3_loops C_tutorial/2.3_loops.c)
add_executable(3.1_integers C_tutorial/3.1_integers.c)
add_executable(3.2_arays C_tutorial/3.2_arays.c)
add_executable(3.3_functions C_tutorial/3.3_functions.c)
