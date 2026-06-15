// fichero 18998 -- macros y constantes -- MODIFICADO
#define LIMITE_18998 19198
#define FACTOR_18998 5

int aplicar_limite18998(int valor) {
    if (valor > LIMITE_18998) return LIMITE_18998;
    return valor * FACTOR_18998;
}
