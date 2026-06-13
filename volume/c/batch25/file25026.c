// fichero 25026 -- macros y constantes
#define LIMITE_25026 25126
#define FACTOR_25026 2

int aplicar_limite25026(int valor) {
    if (valor > LIMITE_25026) return LIMITE_25026;
    return valor * FACTOR_25026;
}
