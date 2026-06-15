// fichero 1998 -- macros y constantes -- MODIFICADO
#define LIMITE_1998 2198
#define FACTOR_1998 5

int aplicar_limite1998(int valor) {
    if (valor > LIMITE_1998) return LIMITE_1998;
    return valor * FACTOR_1998;
}
