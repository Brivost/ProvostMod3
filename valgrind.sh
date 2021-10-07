#!/bin/bash

COUNT=0 #Count number of errors and leaks

valgrind --leak-check=full test1 2>&1 | grep -q "no leaks are possible"
# exit status of grep: 0 if success, non-zero if fail
if [ $? != 0 ] ; then
		echo "There are leaks in test1"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test1 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test1"
		COUNT=$COUNT+1
fi

valgrind --leak-check=full test2 2>&1 | grep -q "no leaks are possible"
if [ $? != 0 ] ; then
		echo "There are leaks in test2"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test2 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test2"
		COUNT=$COUNT+1
fi

valgrind --leak-check=full test3 2>&1 | grep -q "no leaks are possible"
if [ $? != 0 ] ; then
		echo "There are leaks in test3"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test3 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test3"
		COUNT=$COUNT+1
fi

valgrind --leak-check=full test4 2>&1 | grep -q "no leaks are possible"
if [ $? != 0 ] ; then
		echo "There are leaks in test4"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test4 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test4"
		COUNT=$COUNT+1
fi

valgrind --leak-check=full test5 2>&1 | grep -q "no leaks are possible"
if [ $? != 0 ] ; then
		echo "There are leaks in test5"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test5 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test5"
		COUNT=$COUNT+1
fi

valgrind --leak-check=full test6 2>&1 | grep -q "no leaks are possible"
if [ $? != 0 ] ; then
		echo "There are leaks in test6"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test6 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test6"
		COUNT=$COUNT+1
fi

valgrind --leak-check=full test7 2>&1 | grep -q "no leaks are possible"
if [ $? != 0 ] ; then
		echo "There are leaks in test7"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test7 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test7"
		COUNT=$COUNT+1
fi

valgrind --leak-check=full test8 2>&1 | grep -q "no leaks are possible"
if [ $? != 0 ] ; then
		echo "There are leaks in test8"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test8 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test8"
		COUNT=$COUNT+1
fi

valgrind --leak-check=full test9 2>&1 | grep -q "no leaks are possible"
if [ $? != 0 ] ; then
		echo "There are leaks in test9"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test9 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test9"
		COUNT=$COUNT+1
fi

valgrind --leak-check=full test10 2>&1 | grep -q "no leaks are possible"
if [ $? != 0 ] ; then
		echo "There are leaks in test10"
		COUNT=$COUNT+1
fi
valgrind --leak-check=full test10 2>&1 | grep -q "0 errors"
if [ $? != 0 ] ; then
		echo "There are errors in test10"
		COUNT=$COUNT+1
fi

if [ $COUNT == 0 ] ; then
		echo "0 errors and 0 leaks"
fi
