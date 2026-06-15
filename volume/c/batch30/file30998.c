// fichero 30998 -- macros y constantes -- MODIFICADO
#define LIMITE_30998 31198
#define FACTOR_30998 5

int aplicar_limite30998(int valor) {
    if (valor > LIMITE_30998) return LIMITE_30998;
    return valor * FACTOR_30998;
}
