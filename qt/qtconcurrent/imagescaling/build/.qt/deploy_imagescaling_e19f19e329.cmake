include(D:/g/learn/qt/qtconcurrent/imagescaling/build/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/imagescaling-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE D:/g/learn/qt/qtconcurrent/imagescaling/build/imagescaling.exe
    GENERATE_QT_CONF
)
