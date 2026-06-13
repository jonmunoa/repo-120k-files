// fichero 28710 -- macros y constantes
#define LIMITE_28710 28810
#define FACTOR_28710 1

int aplicar_limite28710(int valor) {
    if (valor > LIMITE_28710) return LIMITE_28710;
    return valor * FACTOR_28710;
}
