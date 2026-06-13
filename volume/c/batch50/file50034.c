// fichero 50034 -- macros y constantes
#define LIMITE_50034 50134
#define FACTOR_50034 5

int aplicar_limite50034(int valor) {
    if (valor > LIMITE_50034) return LIMITE_50034;
    return valor * FACTOR_50034;
}
