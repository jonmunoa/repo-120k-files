// fichero 16070 -- macros y constantes
#define LIMITE_16070 16170
#define FACTOR_16070 1

int aplicar_limite16070(int valor) {
    if (valor > LIMITE_16070) return LIMITE_16070;
    return valor * FACTOR_16070;
}
