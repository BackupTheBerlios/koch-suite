#!/usr/bin/make

# This file contains the substitution-rules for "sed"
CONF_FILE=	config.sed

# Space-separated list of all subdirectories, where we should proceed to
SUBDIRS=	include commands www

THISDIR=	.

all: config
	@make subdir TRGT=all

config:
	./configure

subdir:
	@(for i in ${SUBDIRS}; do \
	echo "====> ${THISDIR}/$$i";\
	cd ${THISDIR}/$$i; \
	${MAKE} THISDIR=${THISDIR}/$${i} CONF_FILE=../${CONF_FILE} ${TRGT};\
	cd .. ; \
	echo "<==== ${THISDIR}";\
	done)
	
clean:
	@make subdir TRGT=clean
	rm -f *.php
	rm -f *.gen
	rm -f config.sed

distclean: clean
	@make subdir TRGT=distclean
	@(for i in ${SUBDIRS}; do \
	echo "rm $${i}/Makefile" ; \
	rm $${i}/Makefile ; \
	done)

install:
	@make subdir TRGT=install

.PHONY: distclean clean subdir all config
