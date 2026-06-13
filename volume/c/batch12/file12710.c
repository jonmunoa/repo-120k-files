// fichero 12710 -- macros y constantes
#define LIMITE_12710 12810
#define FACTOR_12710 1

int aplicar_limite12710(int valor) {
    if (valor > LIMITE_12710) return LIMITE_12710;
    return valor * FACTOR_12710;
}
