# This file contains the substitution-rules for "sed"
CONF_FILE=	config.sed

# Space-separated list of all subdirectories, where we should proceed to
COMMAND_SUBDIR=	commands
WWW_SUBDIR=	www
INC_SUBDIR=	include
MAN_SUBDIR=	man
SUBDIRS=	${INC_SUBDIR} ${COMMAND_SUBDIR} ${WWW_SUBDIR} ${MAN_SUBDIR}

THISDIR=	.

all: ${CONF_FILE} configure
	@${MAKE} subdir TRGT=all DIRS="${SUBDIRS}"

${CONF_FILE}: config configure
	./configure

subdir:
	@(for i in ${DIRS}; do \
	echo "====> ${THISDIR}/$$i";\
	cd ${THISDIR}/$$i; \
	${MAKE} THISDIR=${THISDIR}/$${i} ${TRGT} DESTDIR=${DESTDIR} ;\
	cd .. ; \
	echo "<==== ${THISDIR}/$${i}";\
	done)
	
clean:
	@${MAKE} subdir TRGT=clean DIRS="${SUBDIRS}"
	rm -f *.php
	rm -f *.gen

distclean: clean
	@${MAKE} subdir TRGT=distclean DIRS="${SUBDIRS}"
	@(for i in ${SUBDIRS}; do \
	echo "rm -f $${i}/Makefile" ; \
	rm -f $${i}/Makefile ; \
	done)
	rm -f config.sed

ChangeLog: CVS/Entries
	rcs2log -l 70 -i 2 -t 4 -v \
	-u "bus	Michael Bussmann	bus@mb-net.net" \
	-u "lestinsky	Michael Lestinsky	michael@lestinsky.de" \
	-u "michael	Michael Lestinsky	michael@lestinsky.de" \
	-r -d ">2001-01-01 00:00" | \
	sed -e 's:/cvsroot/koch-suite/::g' > $@

install-temp-for-remote: install-includes install-www

install-man:
	@${MAKE} subdir TRGT=install DIRS="${MAN_SUBDIR}" DESTDIR=${DESTDIR}

install-command:
	@${MAKE} subdir TRGT=install DIRS="${COMMAND_SUBDIR}" DESTDIR=${DESTDIR}

install-includes:
	@${MAKE} subdir TRGT=install DIRS="${INC_SUBDIR}" DESTDIR=${DESTDIR}

install-www:
	@${MAKE} subdir TRGT=install DIRS="${WWW_SUBDIR}" DESTDIR=${DESTDIR}

install: ${CONF_FILE} install-includes install-command install-www install-man

.PHONY: subdir clean distclean ChangeLog
