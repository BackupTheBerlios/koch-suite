# This file contains the substitution-rules for "sed"
CONF_FILE=	config.sed

# Space-separated list of all subdirectories, where we should proceed to
COMMAND_SUBDIR=	commands
WWW_SUBDIR=	www
INC_SUBDIR=	include
MAN_SUBDIR=	man
SUBDIRS=	${INC_SUBDIR} ${COMMAND_SUBDIR} ${WWW_SUBDIR} ${MAN_SUBDIR}

THISDIR=	.

all: ${CONF_FILE}
	@make subdir TRGT=all DIRS="${SUBDIRS}"

${CONF_FILE}: config
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
	@make subdir TRGT=clean DIRS="${SUBDIRS}"
	rm -f *.php
	rm -f *.gen

distclean: clean
	@make subdir TRGT=distclean DIRS="${SUBDIRS}"
	@(for i in ${SUBDIRS}; do \
	echo "rm -f $${i}/Makefile" ; \
	rm -f $${i}/Makefile ; \
	done)
	rm -f config.sed

install-man:
	@make subdir TRGT=install DIRS="${MAN_SUBDIR}" DESTDIR=${DESTDIR}

install-command:
	@make subdir TRGT=install DIRS="${COMMAND_SUBDIR}" DESTDIR=${DESTDIR}

install-includes:
	@make subdir TRGT=install DIRS="${INC_SUBDIR}" DESTDIR=${DESTDIR}

install-www:
	@make subdir TRGT=install DIRS="${WWW_SUBDIR}" DESTDIR=${DESTDIR}

install: ${CONF_FILE} install-includes install-command install-www install-man

.PHONY: subdir clean distclean
