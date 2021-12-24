cmake_minimum_required(VERSION 3.11)
project(eglinfo VERSION 0.1)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(GNUInstallDirs)

set(EGLINFO_SOURCES main.cpp)

find_package(EGL REQUIRED)
find_package(OpenGL REQUIRED)
set(EGLINFO_INCLUDE_DIRECTORIES ${EGL_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIR})
set(EGLINFO_LIBRARIES ${EGL_LIBRARIES} ${OPENGL_opengl_LIBRARY})
add_definitions(${EGL_DEFINITIONS})

add_executable(eglinfo ${EGLINFO_SOURCES})
set_property(TARGET eglinfo PROPERTY CXX_STANDARD 11)
target_include_directories(eglinfo PUBLIC ${EGLINFO_INCLUDE_DIRECTORIES})
target_link_libraries (eglinfo ${EGLINFO_LIBRARIES})

install(TARGETS eglinfo DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT "runtime")
