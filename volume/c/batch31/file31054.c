// fichero 31054 -- macros y constantes
#define LIMITE_31054 31154
#define FACTOR_31054 5

int aplicar_limite31054(int valor) {
    if (valor > LIMITE_31054) return LIMITE_31054;
    return valor * FACTOR_31054;
}
