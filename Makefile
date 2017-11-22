BINDIR?=	/usr/local/bin

INSTALL?=	install
MKDIR?=	mkdir -p
RMDIR?=	rmdir
RM?=	rm -f

INSTALL_PROGRAM=${INSTALL} -m ${BINMODE}
BINMODE=	755

all:
	g++ ./soulsum.cpp -std=c++11 -O3 -o soulsum

clean:
	${RM} ./soulsum

install:
	${INSTALL_PROGRAM} ./soulsum ${BINDIR}/soulsum

uninstall:
	${RM} ${BINDIR}/soulsum

deinstall: uninstall
