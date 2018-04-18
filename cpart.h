#ifndef CPART_H
#define CPART_H


#include <QMetaType>
#include <QList>
#include <QString>
#include <QObject>


class cPart : public QObject
{
	Q_OBJECT
public:
	cPart(qint32 iID = -1);

	void			setID(const qint32& iID);
	qint32			id();

	void			setName(const QString& szName);
	QString			name();

	void			setSortOrder(const qint32& iSortOrder);
	qint32			sortOrder();

	void			setDescription(const QString& szDescription);
	QString			description();

	void			setFile(const QString& szFile);
	QString			file();

private:
	qint32			m_iID;
	QString			m_szName;
	qint32			m_iSortOrder;
	QString			m_szDescription;
	QString			m_szFile;
};

Q_DECLARE_METATYPE(cPart*)

class cPartList : public QList<cPart*>
{
public:
	bool			load();
	bool			save();

	cPart*			add(const qint32& iID);
	cPart*			find(const qint32& iID);
};

#endif // CPART_H