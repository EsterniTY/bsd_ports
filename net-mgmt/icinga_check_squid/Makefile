PORTNAME=	icinga_check_squid
DISTVERSIONPREFIX=
DISTVERSION=	1.1.1
PORTREVISION=	0
CATEGORIES=	net-mgmt

MAINTAINER=	developer.kg@gmail.com
COMMENT=	
WWW=		https://github.com/DinoTools/monitoring-check_squid

LICENSE=	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	DinoTools
GH_PROJECT=	monitoring-check_squid
GH_TAGNAME=	9e7936b

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	libexec/nagios/check_squid

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/check_squid ${STAGEDIR}${PREFIX}/libexec/nagios/

.include <bsd.port.mk>
