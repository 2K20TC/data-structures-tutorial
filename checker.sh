#!/bin/sh
# Copyright 2018, Training Cell MEC

CC=cc
VERSION="0.1"

PROJ_PATH=$(pwd)
SOL_FILE="solution.c"
TESTCASE_DIR="tests"
OUTPUT_DIR=output

HELP_TEXT="Usage: $0 [-c CC ] [-d PATH] [-h] PROBLEM"

PROBLEM=

help() {
	echo "$HELP_TEXT"
	exit 0
}

error_exit() {
	echo "critical error: $1"
	exit 1
}

while [ $# != 0 ]; do
	case $1 in
		-h) help ;;
		-c) CC=$2 ; shift ;;
		-d) PROJ_PATH=$2 ; shift ;;
		-*) ;;
		*) PROBLEM=$1 ;;
	esac
	shift
done

[ -z "$PROBLEM" ] && error_exit "no problem specified"

# scratch directory
if [ ! -d "${PROJ_PATH}/${OUTPUT_DIR}" ]; then
	mkdir "${PROJ_PATH}/${OUTPUT_DIR}" ||
		error_exit "directory creation failed"
fi
find "${PROJ_PATH}/${OUTPUT_DIR}/" -maxdepth 1 -type f -delete ||
	error_exit "directory operation failed"

# build the source
$CC -o "${PROJ_PATH}/${OUTPUT_DIR}/bin" "${PROJ_PATH}/${PROBLEM}/${SOL_FILE}" ||
	error_exit "compilation failed"

# verify the output
for cs in $(find "${PROJ_PATH}/${PROBLEM}/${TESTCASE_DIR}/"\
	-maxdepth 1 -iname 'in*.txt' -type f -exec basename "{}" \;); do
	op_n=$(echo $cs | sed 's/in\(.\)\.txt/\1/') # n as in nth test case

	"${PROJ_PATH}/${OUTPUT_DIR}/bin" <"${PROJ_PATH}/${PROBLEM}/${TESTCASE_DIR}/in${op_n}.txt"\
		>"${PROJ_PATH}/${OUTPUT_DIR}/op${op_n}.txt"

	cat "${PROJ_PATH}/${OUTPUT_DIR}/op${op_n}.txt" | shasum | cut -d ' ' -f 1 |
		cmp -s -n 40 "${PROJ_PATH}/${PROBLEM}/${TESTCASE_DIR}/op${op_n}_hashed.txt" - &&
		echo "test case ${op_n} passed" || echo "test case ${op_n} failed"
done

# cleanup
rm -r "${PROJ_PATH}/${OUTPUT_DIR}/" ||
       error_exit "directory operation failed"	
