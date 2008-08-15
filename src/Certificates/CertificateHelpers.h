#ifndef CERTUTIL_H
#define CERTUTIL_H

class QString;
namespace QCA {
	class CertificateCollection;
}

class CertificateHelpers 
{
	public:
		static QCA::CertificateCollection allCertificates(const QStringList& dirs);
		static QString resultToString(int result, QCA::Validity);

	protected:
		static QString validityToString(QCA::Validity);
};

#endif
