// fichero 50210 -- macros y constantes
#define LIMITE_50210 50310
#define FACTOR_50210 1

int aplicar_limite50210(int valor) {
    if (valor > LIMITE_50210) return LIMITE_50210;
    return valor * FACTOR_50210;
}
