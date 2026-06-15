// fichero 26050 -- macros y constantes -- MODIFICADO
#define LIMITE_26050 26250
#define FACTOR_26050 2

int aplicar_limite26050(int valor) {
    if (valor > LIMITE_26050) return LIMITE_26050;
    return valor * FACTOR_26050;
}
