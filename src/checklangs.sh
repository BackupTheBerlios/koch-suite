#!/bin/sh

LANGS="de en es"
rest=${LANGS}

for lang in $LANGS ; do
  echo "Summerizing $lang"
  awk '{ FS="[ \t]*=[ \t]*"; } /^[ \t]*\$Lang/ { print $1 }' \
      include/$lang.inc | sort > /tmp/$lang.$$
done

for lang in ${LANGS} ; do

  rest=`echo ${rest} | sed -e "s:${lang}::"`

  for other in ${rest} ; do
    if [ "${lang}" != "${other}" ] ; then
      echo "Comparing Language-Files ${lang} <==> ${other}"
      diff -u /tmp/$other.$$ /tmp/$lang.$$
    fi
  done

done
