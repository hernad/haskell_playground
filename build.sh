ghc  -c -O fibonacci_hs.hs

ghc -optc-O run_haskell.c fibonacci_hs.o Safe_stub.o -o run_haskell
