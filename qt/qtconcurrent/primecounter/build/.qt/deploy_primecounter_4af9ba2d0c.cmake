include(D:/g/learn/qt/qtconcurrent/primecounter/build/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/primecounter-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE D:/g/learn/qt/qtconcurrent/primecounter/build/primecounter.exe
    GENERATE_QT_CONF
)
