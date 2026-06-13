// fichero 16310 -- macros y constantes
#define LIMITE_16310 16410
#define FACTOR_16310 1

int aplicar_limite16310(int valor) {
    if (valor > LIMITE_16310) return LIMITE_16310;
    return valor * FACTOR_16310;
}
