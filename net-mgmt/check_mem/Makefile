PORTNAME=	check_mem
DISTVERSIONPREFIX=	
DISTVERSION=	1.0
PORTREVISION=	0
CATEGORIES=	net-mgmt

MAINTAINER=	developer.kg@gmail.com
COMMENT=	
WWW=		http://sysadminsjourney.com/content/2009/06/04/new-and-improved-checkmempl-nagios-plugin

LICENSE=	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	justintime
GH_PROJECT=	nagios-plugins
GH_TAGNAME=	9d20150

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	libexec/nagios/check_mem.pl

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/check_mem/check_mem.pl ${STAGEDIR}${PREFIX}/libexec/nagios/

.include <bsd.port.mk>
