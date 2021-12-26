/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_4;
    QAction *action_1;
    QAction *action_5;
    QAction *action_2;
    QAction *action_3;
    QAction *action_6;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(908, 504);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_1 = new QAction(MainWindow);
        action_1->setObjectName(QStringLiteral("action_1"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 908, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget_2->sizePolicy().hasHeightForWidth());
        dockWidget_2->setSizePolicy(sizePolicy1);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(dockWidgetContents_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_2);
        dockWidget_3 = new QDockWidget(MainWindow);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        sizePolicy1.setHeightForWidth(dockWidget_3->sizePolicy().hasHeightForWidth());
        dockWidget_3->setSizePolicy(sizePolicy1);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        gridLayout = new QGridLayout(dockWidgetContents_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(dockWidgetContents_3);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        dockWidget_3->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_3);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(action);
        menu->addAction(action_1);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addSeparator();
        menu->addAction(action_4);
        menu_2->addAction(action_5);
        menu_4->addAction(action_6);
        mainToolBar->addAction(action);
        mainToolBar->addAction(action_2);
        mainToolBar->addAction(action_3);
        mainToolBar->addAction(action_1);
        mainToolBar->addAction(action_5);
        mainToolBar->addAction(action_6);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\346\226\260\345\267\245\347\250\213", Q_NULLPTR));
        action_4->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        action_1->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\350\277\221\345\234\272\346\225\260\346\215\256", Q_NULLPTR));
        action_5->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\350\277\234\345\234\272\346\225\260\346\215\256", Q_NULLPTR));
        action_2->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\277\221\345\234\272\346\225\260\346\215\256", Q_NULLPTR));
        action_3->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\257\245\346\226\207\344\273\266", Q_NULLPTR));
        action_6->setText(QApplication::translate("MainWindow", "\347\250\213\345\272\217\346\226\207\346\241\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_6->setToolTip(QApplication::translate("MainWindow", "\347\250\213\345\272\217\346\226\207\346\241\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\277\220\350\241\214", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\350\247\206\345\233\276", Q_NULLPTR));
        menu_4->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\345\271\205\345\272\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\347\233\270\344\275\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\351\242\221\347\216\207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\350\241\214\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\210\227\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\346\216\242\345\244\264\345\210\260\345\244\251\347\272\277\350\267\235\347\246\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\350\241\214\346\211\253\346\217\217/\345\210\227\346\211\253\346\217\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
