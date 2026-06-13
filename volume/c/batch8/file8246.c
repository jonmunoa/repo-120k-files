// fichero 8246 -- macros y constantes
#define LIMITE_8246 8346
#define FACTOR_8246 2

int aplicar_limite8246(int valor) {
    if (valor > LIMITE_8246) return LIMITE_8246;
    return valor * FACTOR_8246;
}
