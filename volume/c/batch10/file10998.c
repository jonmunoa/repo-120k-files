// fichero 10998 -- macros y constantes -- MODIFICADO
#define LIMITE_10998 11198
#define FACTOR_10998 5

int aplicar_limite10998(int valor) {
    if (valor > LIMITE_10998) return LIMITE_10998;
    return valor * FACTOR_10998;
}
