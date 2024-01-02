#----------------------------------------------------------------------------
#
# Postgres-XC GTM client test makefile
#
# Copyright(c) 2010-2012 Postgres-XC Development Group
#
# src/gtm/client/test/Makefile
#
#-----------------------------------------------------------------------------
top_builddir=../../../..
include $(top_builddir)/src/Makefile.global
subdir=src/gtm/client

override CPPFLAGS := -I$(top_build_dir)/gtm/client $(CPPFLAGS)

OBJS=test_seq.o test_txn.o test_snap.o test_txnperf.o test_snapperf.o
LIBS =-lpthread 
LOADLIBES=-lpthread
CFLAGS=-g -O0

# all:test_txn test_seq test_snap test_txnperf test_snapperf
all:test_snap
# test_txn:test_txn.o ../libgtmclient.a ../../common/libgtmcommon.a ../../libpq/libgtmpq.a

# test_seq:test_seq.o ../libgtmclient.a ../../common/libgtmcommon.a ../../libpq/libgtmpq.a

test_snap:test_snap.o ../libgtmclient.a ../../common/libgtmcommon.a ../../libpq/libgtmpq.a

# test_txnperf:test_txnperf.o ../libgtmclient.a ../../common/libgtmcommon.a ../../libpq/libgtmpq.a

# test_snapperf:test_snapperf.o ../libgtmclient.a ../../common/libgtmcommon.a ../../libpq/libgtmpq.a



clean:
	rm -f $(OBJS)
	rm -f test_txn test_seq test_snap test_txnperf test_snapperf

distclean: clean

maintainer-clean: distclean
