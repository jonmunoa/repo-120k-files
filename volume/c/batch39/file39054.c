// fichero 39054 -- macros y constantes
#define LIMITE_39054 39154
#define FACTOR_39054 5

int aplicar_limite39054(int valor) {
    if (valor > LIMITE_39054) return LIMITE_39054;
    return valor * FACTOR_39054;
}
