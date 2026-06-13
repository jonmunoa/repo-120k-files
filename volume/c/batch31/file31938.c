// fichero 31938 -- macros y constantes
#define LIMITE_31938 32038
#define FACTOR_31938 4

int aplicar_limite31938(int valor) {
    if (valor > LIMITE_31938) return LIMITE_31938;
    return valor * FACTOR_31938;
}
