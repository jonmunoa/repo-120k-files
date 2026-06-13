// fichero 12310 -- macros y constantes
#define LIMITE_12310 12410
#define FACTOR_12310 1

int aplicar_limite12310(int valor) {
    if (valor > LIMITE_12310) return LIMITE_12310;
    return valor * FACTOR_12310;
}
