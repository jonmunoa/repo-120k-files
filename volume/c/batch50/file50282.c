// fichero 50282 -- macros y constantes
#define LIMITE_50282 50382
#define FACTOR_50282 3

int aplicar_limite50282(int valor) {
    if (valor > LIMITE_50282) return LIMITE_50282;
    return valor * FACTOR_50282;
}
