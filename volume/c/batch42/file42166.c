// fichero 42166 -- macros y constantes
#define LIMITE_42166 42266
#define FACTOR_42166 2

int aplicar_limite42166(int valor) {
    if (valor > LIMITE_42166) return LIMITE_42166;
    return valor * FACTOR_42166;
}
