// fichero 42246 -- macros y constantes
#define LIMITE_42246 42346
#define FACTOR_42246 2

int aplicar_limite42246(int valor) {
    if (valor > LIMITE_42246) return LIMITE_42246;
    return valor * FACTOR_42246;
}
