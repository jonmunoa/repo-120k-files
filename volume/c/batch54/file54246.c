// fichero 54246 -- macros y constantes
#define LIMITE_54246 54346
#define FACTOR_54246 2

int aplicar_limite54246(int valor) {
    if (valor > LIMITE_54246) return LIMITE_54246;
    return valor * FACTOR_54246;
}
