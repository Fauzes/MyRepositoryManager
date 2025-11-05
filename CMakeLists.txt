cmake_minimum_required(VERSION 3.10)

project(MyRepositryManager LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

#if(ANDROID)
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
#    if (ANDROID_ABI STREQUAL "armeabi-v7a")
#        set(ANDROID_EXTRA_LIBS
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
#            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
#    endif()
#endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

if(ANDROID)
  add_library(MyRepositryManager SHARED
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui

  )
else()
  add_executable(MyRepositryManager
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    Model/Storege/stoegeobject.h
    Model/Storege/types_storege_objects.h
    Model/Storege/stoegeobject.cpp
    Model/Storege/wardrobe_storege_obj.cpp
    Model/Storege/wardrobe_storege_obj.h
    Model/Storege/box_s_storege_obj.cpp
    Model/Storege/box_s_storege_obj.h
    Model/Storege/box_storege_obj.cpp
    Model/Storege/box_storege_obj.h
    Model/base/MyGeometry.h
    Model/base/MyGeometry.cpp
    Model/base/FullStatus.h
    Model/base/FullStatus.cpp
    Model/Storege/Shelf.h
    Model/Storege/Shelf.cpp
    Model/base/DiscardedStatys.h
    Model/base/DiscardedStatys.cpp
    Model/base/MyNumber.h
    Model/base/MyNumber.cpp
    Interfacer/base/IDiscarded_obj.h
    Interfacer/base/IFull_obj.h
    Interfacer/base/ILimit_obj.h
    Interfacer/base/IMyGeometry_obj.h
    Interfacer/base/IMyNumber_obj.h
    Interfacer/Storege/IStoegeObject.h
  )
endif()

target_link_libraries(MyRepositryManager PRIVATE Qt5::Widgets)
