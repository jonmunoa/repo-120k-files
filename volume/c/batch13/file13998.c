// fichero 13998 -- macros y constantes
#define LIMITE_13998 14098
#define FACTOR_13998 4

int aplicar_limite13998(int valor) {
    if (valor > LIMITE_13998) return LIMITE_13998;
    return valor * FACTOR_13998;
}
