PORTNAME=	icinga_check_plugins
DISTVERSIONPREFIX=	
DISTVERSION=	2023-06-30.1
PORTREVISION=	0
CATEGORIES=	net-mgmt

MAINTAINER=	developer.kg@gmail.com
COMMENT=	
WWW=		https://github.com/EsterniTY/icinga_check_plugins

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake:noninja compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	esternity
GH_PROJECT=     icinga_check_plugins
GH_TAGNAME=     v2023-06-30.1

CMAKE_BUILD_TYPE=Release

RUN_DEPENDS=	/usr/local/include/net-snmp:net-mgmt/net-snmp
BUILD_DEPENDS=	${RUN_DEPENDS}

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	libexec/nagios/check_iftraffic \
                libexec/nagios/check_mt_cpu \
                libexec/nagios/check_mt_temp

.include <bsd.port.mk>
