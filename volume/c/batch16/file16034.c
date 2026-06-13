// fichero 16034 -- macros y constantes
#define LIMITE_16034 16134
#define FACTOR_16034 5

int aplicar_limite16034(int valor) {
    if (valor > LIMITE_16034) return LIMITE_16034;
    return valor * FACTOR_16034;
}
