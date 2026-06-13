// fichero 11002 -- macros y constantes
#define LIMITE_11002 11102
#define FACTOR_11002 3

int aplicar_limite11002(int valor) {
    if (valor > LIMITE_11002) return LIMITE_11002;
    return valor * FACTOR_11002;
}
