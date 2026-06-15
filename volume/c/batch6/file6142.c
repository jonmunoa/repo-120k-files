// fichero 6142 -- macros y constantes -- MODIFICADO
#define LIMITE_6142 6342
#define FACTOR_6142 4

int aplicar_limite6142(int valor) {
    if (valor > LIMITE_6142) return LIMITE_6142;
    return valor * FACTOR_6142;
}
