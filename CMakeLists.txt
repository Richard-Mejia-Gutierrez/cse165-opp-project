cmake_minimum_required(VERSION 3.14)

project(PacMan LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Gui)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Gui Core OpenGL Widgets)


qt_standard_project_setup()

#add_library(PacMan SHARED
#  PacMan_global.h
#  pacman.cpp
#  pacman.h
#  openglwindow.h
#  openglwindow.cpp
#  main.cpp
#)

qt_add_executable(PacMan
    main.cpp
    openglwindow.cpp openglwindow.h
    pacman.cpp pacman.h
    game.h game.cpp
    monster.h monster.cpp
    points.h points.cpp
    score.h score.cpp
)

target_link_libraries(PacMan PRIVATE Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::OpenGL
    Qt${QT_VERSION_MAJOR}::Widgets
)

target_compile_definitions(PacMan PRIVATE PACMAN_LIBRARY)
