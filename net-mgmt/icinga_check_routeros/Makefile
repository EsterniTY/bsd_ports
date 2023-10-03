PORTNAME=		icinga_check_routeros
DISTVERSIONPREFIX=	
DISTVERSION=		0.5
PORTREVISION=		2
CATEGORIES=		net-mgmt

MAINTAINER=		developer.kg@gmail.com
COMMENT=		Monitoring MikroTik devices
WWW=			https://github.com/DinoTools/monitoring-check_routeros

LICENSE=		LGPL3+
LICENSE_FILE=		${WRKSRC}/LICENSES/GPL-3.0-or-later.txt

USE_GITHUB=		yes
GH_ACCOUNT=		DinoTools
GH_PROJECT=		monitoring-check_routeros
GH_TAGNAME=		0.5

BUILD_DEPENDS=		
RUN_DEPENDS=		${PYTHON_PKGNAMEPREFIX}click>=8.0.0:devel/py-click@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}librouteros>=3.2.1:net-mgmt/py-librouteros@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}nagiosplugin>=1.2.4:sysutils/py-nagiosplugin@${PY_FLAVOR}

USES=			python:3.6+

NO_BUILD=		yes
NO_ARCH=		yes

PLIST_FILES=		libexec/nagios/check_routeros.py

do-install:
			${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
			${INSTALL_SCRIPT} ${WRKSRC}/check_routeros.py ${STAGEDIR}${PREFIX}/libexec/nagios/

.include <bsd.port.mk>
