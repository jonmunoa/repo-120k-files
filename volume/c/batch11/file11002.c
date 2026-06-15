// fichero 11002 -- macros y constantes -- MODIFICADO
#define LIMITE_11002 11202
#define FACTOR_11002 4

int aplicar_limite11002(int valor) {
    if (valor > LIMITE_11002) return LIMITE_11002;
    return valor * FACTOR_11002;
}
