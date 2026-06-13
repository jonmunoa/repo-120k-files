// fichero 7938 -- macros y constantes
#define LIMITE_7938 8038
#define FACTOR_7938 4

int aplicar_limite7938(int valor) {
    if (valor > LIMITE_7938) return LIMITE_7938;
    return valor * FACTOR_7938;
}
