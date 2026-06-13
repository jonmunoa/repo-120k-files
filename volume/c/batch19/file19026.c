// fichero 19026 -- macros y constantes
#define LIMITE_19026 19126
#define FACTOR_19026 2

int aplicar_limite19026(int valor) {
    if (valor > LIMITE_19026) return LIMITE_19026;
    return valor * FACTOR_19026;
}
