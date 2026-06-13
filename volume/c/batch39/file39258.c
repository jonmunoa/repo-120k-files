// fichero 39258 -- macros y constantes
#define LIMITE_39258 39358
#define FACTOR_39258 4

int aplicar_limite39258(int valor) {
    if (valor > LIMITE_39258) return LIMITE_39258;
    return valor * FACTOR_39258;
}
