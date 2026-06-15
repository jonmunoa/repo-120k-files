// fichero 10162 -- macros y constantes -- MODIFICADO
#define LIMITE_10162 10362
#define FACTOR_10162 4

int aplicar_limite10162(int valor) {
    if (valor > LIMITE_10162) return LIMITE_10162;
    return valor * FACTOR_10162;
}
