// fichero 32606 -- macros y constantes
#define LIMITE_32606 32706
#define FACTOR_32606 2

int aplicar_limite32606(int valor) {
    if (valor > LIMITE_32606) return LIMITE_32606;
    return valor * FACTOR_32606;
}
