# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD$

PORTNAME=	qt4
PORTVERSION=	${PYQT4_VERSION}
PORTREVISION=	1
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python bindings for the Qt 4 toolkit (meta port)

USES=		metaport python pyqt:4
USE_PYTHON=	flavors

# Keep these synchronized with _USE_PYQT_ALL / _USE_PYQT4_ONLY in Mk/Use/pyqt.mk
OPTIONS_DEFINE=		assistant core dbus dbussupport declarative \
			demo designer designerplugin doc gui help \
			multimedia network opengl phonon qscintilla2 \
			script scripttools sql svg test webkit xml \
			xmlpatterns
OPTIONS_DEFAULT=	${OPTIONS_DEFINE}

.for opt in ${OPTIONS_DEFINE}
${opt}_USE=	PYQT=${opt}_run
${opt}_DESC=	${py-${opt}_DESC}
.endfor

.include <bsd.port.mk>
