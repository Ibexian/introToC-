all: simple
simple: account.o transaction.o classes.o
	clang++ account.o transaction.o classes.o -Wno-c++11-extensions -o simple
account.o: account.cpp headers/account.h headers/transaction.h
	clang++ -c account.cpp
transaction.o: transaction.cpp headers/transaction.h
	clang++ -c transaction.cpp
classes.o: classes.cpp headers/account.h
	clang++ -c classes.cpp
