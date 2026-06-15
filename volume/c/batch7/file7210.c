// fichero 7210 -- macros y constantes -- MODIFICADO
#define LIMITE_7210 7410
#define FACTOR_7210 2

int aplicar_limite7210(int valor) {
    if (valor > LIMITE_7210) return LIMITE_7210;
    return valor * FACTOR_7210;
}
