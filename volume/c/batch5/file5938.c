// fichero 5938 -- macros y constantes
#define LIMITE_5938 6038
#define FACTOR_5938 4

int aplicar_limite5938(int valor) {
    if (valor > LIMITE_5938) return LIMITE_5938;
    return valor * FACTOR_5938;
}
