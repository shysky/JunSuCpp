#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_JunSuQt.h"

#include "Mapping/MapControl.h"
#include <QPainter>
#include <QWheelEvent>

#include "QFileDialog.h"

using namespace SuperMap::Mapping;
class JunSuQt : public QMainWindow
{
	Q_OBJECT

public:
	JunSuQt(QWidget *parent = Q_NULLPTR);
	~JunSuQt();
private:
	Ui::JunSuQtClass ui;
	MapControl* m_pMapControl;

	void OpenWorkspace(string strPath);
	void CloseWorkspace();
	void Pan();

	UGLayer* m_pLastEditLayer;
	void ResetLastEditLayer(UGLayer* pLayer);

//method
private:
	unsigned int getMouseOrKeyFlag(QMouseEvent* event);

// window init
private:
	void initMenuBar();
	void initToolBar();

// override parent
private:
	virtual void paintEvent(QPaintEvent* event);
	virtual void wheelEvent(QWheelEvent* event);
	virtual void mousePressEvent(QMouseEvent* event);
	virtual void mouseReleaseEvent(QMouseEvent* event);
	virtual void mouseMoveEvent(QMouseEvent* event);
	virtual void resizeEvent(QResizeEvent* event);
	virtual void keyPressEvent(QKeyEvent* event);
	virtual void mouseDoubleClickEvent(QMouseEvent *event);
// menu function
private slots:
	void Menu_File_Open();
	void Menu_File_Close();
	void Menu_Draw_Point();
	void Menu_Draw_Line();
	void Menu_Draw_Polygon();
	void Menu_Edit_PanMap();
};