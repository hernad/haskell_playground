ghc  -c -O hs_fibonacci.hs

INC=/Library/Frameworks/GHC.framework/Versions/Current/usr/lib/ghc-7.4.2/include/

ghc --make -no-hs-main -optc-O -I$INC run_hs.c hs_fibonacci.o -o run_hs
