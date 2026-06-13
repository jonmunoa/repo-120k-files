// fichero 7210 -- macros y constantes
#define LIMITE_7210 7310
#define FACTOR_7210 1

int aplicar_limite7210(int valor) {
    if (valor > LIMITE_7210) return LIMITE_7210;
    return valor * FACTOR_7210;
}
