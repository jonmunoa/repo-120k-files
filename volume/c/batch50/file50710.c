// fichero 50710 -- macros y constantes
#define LIMITE_50710 50810
#define FACTOR_50710 1

int aplicar_limite50710(int valor) {
    if (valor > LIMITE_50710) return LIMITE_50710;
    return valor * FACTOR_50710;
}
