// fichero 43998 -- macros y constantes -- MODIFICADO
#define LIMITE_43998 44198
#define FACTOR_43998 5

int aplicar_limite43998(int valor) {
    if (valor > LIMITE_43998) return LIMITE_43998;
    return valor * FACTOR_43998;
}
