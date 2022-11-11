#!/bin/bash
sudo su
cd ~
mkdir gcc_all && cd gcc_all
#
curl -L https://ftpmirror.gnu.org/gcc/gcc-9.1.0/gcc-9.1.0.tar.xz | tar xf -
#
curl -L ftp://gcc.gnu.org/pub/gcc/infrastructure/gmp-6.1.0.tar.bz2 | tar xf -
curl -L ftp://gcc.gnu.org/pub/gcc/infrastructure/mpfr-3.1.4.tar.bz2 | tar xf -
curl -L ftp://gcc.gnu.org/pub/gcc/infrastructure/mpc-1.0.3.tar.gz | tar xf -
curl -L ftp://gcc.gnu.org/pub/gcc/infrastructure/isl-0.18.tar.bz2 | tar xf -
#
#
cd gmp*
mkdir build && cd build
../configure --prefix=/usr/local/gcc-9.1 --enable-cxx
make -j 8
sudo make install-strip
#
#
cd ../..
cd mpfr*
mkdir build && cd build
../configure --prefix=/usr/local/gcc-9.1 --with-gmp=/usr/local/gcc-9.1
make -j 8 && sudo make install-strip
#
#
cd ../..
cd mpc*
mkdir build && cd build
../configure --prefix=/usr/local/gcc-9.1 \
             --with-gmp=/usr/local/gcc-9.1 \
             --with-mpfr=/usr/local/gcc-9.1
#
make -j 8 && sudo make install-strip
#
cd ../..
cd isl*
mkdir build && cd build
../configure --prefix=/usr/local/gcc-9.1 --with-gmp-prefix=/usr/local/gcc-9.1
make -j 8 && sudo make install-strip


cd ../..
cd gcc*
mkdir build && cd build
../configure --prefix=/usr/local/gcc-9.1 \
             --enable-checking=release \
             --with-gmp=/usr/local/gcc-9.1 \
             --with-mpfr=/usr/local/gcc-9.1 \
             --with-mpc=/usr/local/gcc-9.1 \
             --enable-languages=c,c++,fortran \
             --with-isl=/usr/local/gcc-9.1 \
             --program-suffix=-9.1

make -j 8 && sudo make install-strip
export PATH=/usr/local/gcc-9.1/bin:$PATH
echo 'export PATH=/usr/local/gcc-9.1/bin:$PATH' >> ~/.bash_profile
echo 'export PATH=/usr/local/gcc-9.1/bin:$PATH' >> ~/.zshrc
