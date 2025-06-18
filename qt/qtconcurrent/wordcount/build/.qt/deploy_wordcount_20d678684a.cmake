include(D:/g/learn/qt/qtconcurrent/wordcount/build/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/wordcount-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE D:/g/learn/qt/qtconcurrent/wordcount/build/wordcount.exe
    GENERATE_QT_CONF
)
