// fichero 13998 -- macros y constantes -- MODIFICADO
#define LIMITE_13998 14198
#define FACTOR_13998 5

int aplicar_limite13998(int valor) {
    if (valor > LIMITE_13998) return LIMITE_13998;
    return valor * FACTOR_13998;
}
