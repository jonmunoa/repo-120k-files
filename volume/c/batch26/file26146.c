// fichero 26146 -- macros y constantes -- MODIFICADO
#define LIMITE_26146 26346
#define FACTOR_26146 3

int aplicar_limite26146(int valor) {
    if (valor > LIMITE_26146) return LIMITE_26146;
    return valor * FACTOR_26146;
}
