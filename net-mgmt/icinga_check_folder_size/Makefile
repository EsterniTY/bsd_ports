PORTNAME=	icinga_check_folder_size
DISTVERSIONPREFIX=	
DISTVERSION=	2023-01-31.1
PORTREVISION=	0
CATEGORIES=	net-mgmt

MAINTAINER=	developer.kg@gmail.com
COMMENT=	
WWW=		https://github.com/EsterniTY/icinga_check_folder_size

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	esternity
GH_PROJECT=     icinga_check_folder_size
GH_TAGNAME=     v2023-01-31.1

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	libexec/nagios/check_folder_size

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/check_folder_size ${STAGEDIR}${PREFIX}/libexec/nagios/

.include <bsd.port.mk>
