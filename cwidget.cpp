#include "cwidget.h"


cWidget::cWidget(cPartWindow* parent) :
	QWidget(parent),
	m_type(TYPE_part),
	m_lpWidget(parent),
	m_lpWindow(0)
{
}

cWidget::cWidget(QWidget* parent) :
	QWidget(parent),
	m_type(TYPE_unknown),
	m_lpWidget(0),
	m_lpWindow(0)
{
}

void cWidget::setWindow(QMdiSubWindow* lpWindow)
{
	m_lpWindow	= lpWindow;
}

QMdiSubWindow* cWidget::window()
{
	return(m_lpWindow);
}

QWidget* cWidget::widget()
{
	return(m_lpWidget);
}

cWidget::TYPE cWidget::type()
{
	return(m_type);
}
