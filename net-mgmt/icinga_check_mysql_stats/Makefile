PORTNAME=	icinga_check_mysql_stats
DISTVERSIONPREFIX=	
DISTVERSION=	2023-08-31.1
PORTREVISION=	0
CATEGORIES=	net-mgmt

MAINTAINER=	developer.kg@gmail.com
COMMENT=	
WWW=		https://github.com/EsterniTY/icinga_check_mysql_stats

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	esternity
GH_PROJECT=	icinga_check_mysql_stats
GH_TAGNAME=	v2023-08-31.1

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	libexec/nagios/check_mysql_stats.py

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/check_mysql_stats.py ${STAGEDIR}${PREFIX}/libexec/nagios/

.include <bsd.port.mk>
