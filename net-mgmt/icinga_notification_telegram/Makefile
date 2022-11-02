PORTNAME=	icinga_notification_telegram
DISTVERSIONPREFIX=	
DISTVERSION=	1.0
PORTREVISION=	0
CATEGORIES=	net-mgmt

MAINTAINER=	developer.kg@gmail.com
COMMENT=	
WWW=		https://github.com/EsterniTY/icinga_notification_telegram

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	esternity
GH_PROJECT=     icinga_notification_telegram
GH_TAGNAME=     v1.0

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	libexec/nagios/notification-telegram-host.sh \
                libexec/nagios/notification-telegram-service.sh

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/notification-telegram-host.sh ${STAGEDIR}${PREFIX}/libexec/nagios/
	${INSTALL_SCRIPT} ${WRKSRC}/notification-telegram-service.sh ${STAGEDIR}${PREFIX}/libexec/nagios/

.include <bsd.port.mk>
