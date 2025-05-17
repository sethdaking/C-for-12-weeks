cmake_minimum_required(VERSION 3.20)
project(StudyApp LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Set Qt path and modules
find_package(Qt6 REQUIRED COMPONENTS Core Quick Gui Multimedia Sql)

# Include custom CMake modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# Define source directories
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(QML_DIR ${CMAKE_SOURCE_DIR}/qml)

# Include all source files
file(GLOB_RECURSE SOURCE_FILES
    ${SRC_DIR}/*.cpp
    ${SRC_DIR}/*.h
)

# Define the executable
add_executable(${PROJECT_NAME}
    ${SOURCE_FILES}
    ${QML_DIR}/main.qml
    ${QML_DIR}/components/*.qml
    ${QML_DIR}/screens/*.qml
)

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    ${SRC_DIR}
    ${SRC_DIR}/core
    ${SRC_DIR}/auth
    ${SRC_DIR}/chat
    ${SRC_DIR}/calls
    ${SRC_DIR}/study
    ${SRC_DIR}/ai
    ${SRC_DIR}/db
    ${SRC_DIR}/utils
)

# Link Qt6 libraries
target_link_libraries(${PROJECT_NAME}
    Qt6::Core
    Qt6::Gui
    Qt6::Quick
    Qt6::Multimedia
    Qt6::Sql
)

# Android and iOS specific options
if(ANDROID)
    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_SOURCE_DIR}/android")
elseif(IOS)
    set(MACOSX_BUNDLE_GUI_IDENTIFIER com.studyapp.mobile)
    set(MACOSX_BUNDLE_BUNDLE_NAME StudyApp)
endif()

# Install target
install(TARGETS ${PROJECT_NAME}
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
