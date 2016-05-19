BINDIR?=	/usr/local/bin

INSTALL?=	install
MKDIR?=	mkdir -p
RMDIR?=	rmdir
RM?=	rm -f

INSTALL_PROGRAM=${INSTALL} -m ${BINMODE}
BINMODE=	755

all: soulsum
	g++ ./soulsum.cpp -o soulsum

clean:
	${RM} ./soulsum

install:
	${INSTALL_PROGRAM} ./soulsum ${BINDIR}/soulsum

uninstall:
	${RM} ${BINDIR}/soulsum

deinstall: uninstall
