CMAKE_MINIMUM_REQUIRED(VERSION 2.6)


add_executable(Main main.cpp contacts.cpp Controller.cpp Owner.cpp)


SET(SOURCE_FILES Contacts.h Controller.h Owner.h Person.h)
SET(CMAKE_C_COMPILER "gcc")
