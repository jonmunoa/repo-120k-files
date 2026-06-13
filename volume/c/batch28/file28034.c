// fichero 28034 -- macros y constantes
#define LIMITE_28034 28134
#define FACTOR_28034 5

int aplicar_limite28034(int valor) {
    if (valor > LIMITE_28034) return LIMITE_28034;
    return valor * FACTOR_28034;
}
