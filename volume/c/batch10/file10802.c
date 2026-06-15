// fichero 10802 -- macros y constantes -- MODIFICADO
#define LIMITE_10802 11002
#define FACTOR_10802 4

int aplicar_limite10802(int valor) {
    if (valor > LIMITE_10802) return LIMITE_10802;
    return valor * FACTOR_10802;
}
