echo off
rem 将子目录下的mainwindow.ui复制到当前文件下，并且编译
copy .\qtapp6\mainwindow.ui mainwindow.ui
pyuic5 -o ui_mainwindow.py mainwindow.ui