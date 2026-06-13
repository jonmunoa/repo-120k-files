// fichero 43998 -- macros y constantes
#define LIMITE_43998 44098
#define FACTOR_43998 4

int aplicar_limite43998(int valor) {
    if (valor > LIMITE_43998) return LIMITE_43998;
    return valor * FACTOR_43998;
}
