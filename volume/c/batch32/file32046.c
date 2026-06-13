// fichero 32046 -- macros y constantes
#define LIMITE_32046 32146
#define FACTOR_32046 2

int aplicar_limite32046(int valor) {
    if (valor > LIMITE_32046) return LIMITE_32046;
    return valor * FACTOR_32046;
}
