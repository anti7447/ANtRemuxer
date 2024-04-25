cmake_minimum_required(VERSION 3.29)
project(ScreenShoter)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-4.0)


set(SOURCE_EXE Remuxer.cpp)
set(SOURCE_LIB MainWindow.cpp)

add_library(MainWindow STATIC ${SOURCE_LIB})

link_directories ( ${GTKMM_LIBRARY_DIRS} )
include_directories( ${GTKMM_INCLUDE_DIRS} )

add_executable(Remuxer ${SOURCE_EXE})

target_link_libraries(Remuxer ${GTKMM_LIBRARIES} MainWindow)