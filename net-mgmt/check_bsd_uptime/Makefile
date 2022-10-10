PORTNAME=	check_bsd_uptime
DISTVERSIONPREFIX=	
DISTVERSION=	1.1
PORTREVISION=	0
CATEGORIES=	net-mgmt

MAINTAINER=	developer.kg@gmail.com
COMMENT=	
WWW=		https://github.com/bmccorkle/check_bsd_uptime

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	bmccorkle

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	libexec/nagios/check_bsd_uptime

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/check_bsd_uptime ${STAGEDIR}${PREFIX}/libexec/nagios/

.include <bsd.port.mk>
