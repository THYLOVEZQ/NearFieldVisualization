import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QFileDialog, QTreeWidgetItem, QMenu, QAction
from ui_mainwindow import Ui_MainWindow
from PyQt5.QtCore import QObject, pyqtSlot, pyqtSignal, QDir, Qt
import matplotlib as mpl
import numpy as np
from matplotlib.figure import Figure
from matplotlib.backends.backend_qt5agg import FigureCanvasQTAgg as FigureCanvas, NavigationToolbar2QT as NavigationToolBar
from file_Object import file_Object
from PyQt5.QtGui import QIcon, QCursor
import os
from enum import Enum
from PyQt5 import QtCore
import webbrowser

class TreeItemType(Enum):    ##节点类型枚举类型
   itTopItem=1001    #顶层节点
   itGroupItem=1002  #组节点
   itImageItem=1003  #图片文件节点

class TreeColNum(Enum):   ##目录树的列号枚举类型
   colItem=0         #分组/文件名列
   colItemType=1     #节点类型列


class QmyMainWindow(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.setWindowTitle("近场测量系统")
        icon = QIcon("./img/icon2.svg")
        self.ui.action.setIcon(icon)
        icon = QIcon("./img/icon3.svg")
        self.ui.action_4.setIcon(icon)
        icon = QIcon("./img/icon4.svg")
        self.ui.action_1.setIcon(icon)
        icon = QIcon("./img/icon7.svg")
        self.ui.action_2.setIcon(icon)
        icon = QIcon("./img/icon9.svg")
        self.ui.action_3.setIcon(icon)
        icon = QIcon("./img/icon.svg")
        self.ui.action_5.setIcon(icon)
        icon = QIcon("./img/icon10.svg")
        self.ui.action_6.setIcon(icon)
        ##rcParams[]参数设置，以正确显示汉字
        mpl.rcParams['font.sans-serif'] = ['KaiTi', 'SimHei']
        mpl.rcParams['font.size'] = 12
        mpl.rcParams['axes.unicode_minus'] = False
        self.itemFlags = (Qt.ItemIsSelectable | Qt.ItemIsUserCheckable
                          | Qt.ItemIsEnabled | Qt.ItemIsAutoTristate)
        self.ui.mainToolBar.setToolButtonStyle(Qt.ToolButtonTextBesideIcon)
        self.__initTree()
        textEdit = self.ui.treeWidget
        textEdit.setContextMenuPolicy(QtCore.Qt.CustomContextMenu)
        textEdit.customContextMenuRequested[QtCore.QPoint].connect(self.myListWidgetContext)

        #创建绘图系统
        # self.__initFigure()
        #绘图
        # self.__drawFigure()



    #显示近场数据
    @pyqtSlot()
    def __displayFile(self):
        self.__fig = mpl.figure.Figure(figsize=(8, 5))
        self.__fig.suptitle("近场数据")
        figCanvas = FigureCanvas(self.__fig)
        self.setCentralWidget(figCanvas)



    #=======由connectSlotsByName()自动与组件的信号关联的槽函数
    # 这里必须加@pyqtSlot()，因为如果不加这句程序会不知道调用的是有参triggered还是无参，所以程序会执行两次
    @pyqtSlot()
    def on_action_triggered(self):
        icon = QIcon("./img/icon6.svg")
        item = QTreeWidgetItem(TreeItemType.itTopItem.value)  # 节点类型
        item.setIcon(TreeColNum.colItem.value, icon)
        item.setText(TreeColNum.colItem.value, "工程文件")  # 第1列
        self.ui.treeWidget.addTopLevelItem(item)
        parItem = item
        item = QTreeWidgetItem(TreeItemType.itGroupItem.value)  # 节点类型
        item.setText(0, "近场数据")
        #self.ui.treeWidget.currentItem()获得的当前项是指当前鼠标和键盘焦点所在项
        # parItem = self.ui.treeWidget.currentItem()
        parItem.addChild(item)
        item = QTreeWidgetItem(TreeItemType.itGroupItem.value)  # 节点类型
        item.setText(0, "远场数据")
        parItem.addChild(item)

    def on_action_4_triggered(self):
        sys.exit(app.exec_())

    #该函数为显示近场数据
    @pyqtSlot()
    def on_action_1_triggered(self):
        print(self.ui.treeWidget.currentItem().data(TreeColNum.colItem.value, Qt.UserRole))
        self.__displayFile()

    #该函数用于添加近场文件
    @pyqtSlot()
    def on_action_2_triggered(self):
        fileList, flt = QFileDialog.getOpenFileNames(self,
                                                     "选择一个或多个文件", "", "dat(*.dat)")
        # 多选文件,返回两个结果，fileList是一个列表类型，存储了所有文件名； flt是设置的文件filter，即"Images(*.jpg)"
        if (len(fileList) < 1):  # fileList是list[str]
            return
        #这里要选择添加节点的父节点
        parItem = self.ui.treeWidget.currentItem()
        if(parItem.type()==TreeItemType.itGroupItem.value and parItem.text(TreeColNum.colItem.value)=="近场数据"):
            fileNum = len(fileList)
            if(fileNum == 2):
                icon = QIcon("./img/icon8.svg")
                item = QTreeWidgetItem(TreeItemType.itImageItem.value)  # 节点类型
                item.setIcon(TreeColNum.colItem.value, icon)
                item.setText(TreeColNum.colItem.value, "幅度文件")  # 第1列
                item.setData(TreeColNum.colItem.value, Qt.UserRole, fileList[0])
                parItem.addChild(item)
                item = QTreeWidgetItem(TreeItemType.itImageItem.value)  # 节点类型
                item.setIcon(TreeColNum.colItem.value, icon)
                item.setText(TreeColNum.colItem.value, "相位文件")  # 第1列
                item.setData(TreeColNum.colItem.value, Qt.UserRole, fileList[1])
                parItem.addChild(item)
            else:
                #警告:必须输入两组数据，一组为幅度信息，一组为相位信息
                return
        elif(parItem.type==TreeItemType.itTopItem):
            # parItem=parItem.child(0)
            print("0")

    def __initTree(self):
        #初始化目录树
        self.ui.treeWidget.clear()
        self.ui.treeWidget.header().hide()
        icon = QIcon("./img/icon6")
        item = QTreeWidgetItem(TreeItemType.itTopItem.value)
        item.setIcon(TreeColNum.colItem.value, icon)
        item.setText(TreeColNum.colItem.value, "工程文件")
        # item.setFlags(self.itemFlags)
        # item.setCheckState(TreeColNum.colItem.value, Qt.Checked)

        # item.setData(TreeColNum.colItem.value, Qt.UserRole, "")
        self.ui.treeWidget.addTopLevelItem(item)
        #设置子节点对齐
        # self.ui.treeWidget.setIndentation(0)
        item = QTreeWidgetItem(TreeItemType.itGroupItem.value)
        item.setText(0, "近场数据")
        self.ui.treeWidget.topLevelItem(0).addChild(item)
        item = QTreeWidgetItem(TreeItemType.itGroupItem.value)
        item.setText(0, "远场数据")
        self.ui.treeWidget.topLevelItem(0).addChild(item)

    @pyqtSlot()  ##添加目录节点
    def on_action_4_triggered(self):
        sys.exit(app.exec_())


    def myListWidgetContext(self):## 自定义右键按钮
        popMenu = QMenu()
        popMenu.addAction(QAction(u'字体放大', self))
        popMenu.addAction(QAction(u'字体减小', self))
        popMenu.triggered[QAction].connect(self.processtrigger)
        popMenu.exec_(QCursor.pos())

        # 右键按钮事件
    def processtrigger(self, q):
        text = self.newTextEdit.toPlainText()
        if not text.strip():
            return
        # 输出那个Qmenu对象被点击
        if q.text() == "字体放大":
            self.fontSize += 2
        elif q.text() == "字体减小":
            self.fontSize -= 2


    @pyqtSlot()
    def on_action_3_triggered(self):##删除选择节点
        item = self.ui.treeWidget.currentItem()
        #获得当前顶层节点的index值
        index = self.ui.treeWidget.indexOfTopLevelItem(item)
        if(item.type()==TreeItemType.itTopItem.value):
            self.ui.treeWidget.takeTopLevelItem(index)
        elif(item.type()==TreeItemType.itGroupItem.value):
            #不能删除分组节点
            return
        else:
            parItem = item.parent()
            parItem.removeChild(item)

    @pyqtSlot()
    def on_action_6_triggered(self):#这里默认用IE打开，如何优化？使其使用系统默认浏览器打开网页
        webbrowser.open("https://thylovezj.github.io/categories/PYQT5/")


if __name__ == "__main__":
    app = QApplication(sys.argv)
    form = QmyMainWindow()
    icon = QIcon("./img/icon1.svg")
    form.setWindowIcon(icon)
    form.show()
    sys.exit(app.exec_())

