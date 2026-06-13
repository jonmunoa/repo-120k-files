// fichero 30246 -- macros y constantes
#define LIMITE_30246 30346
#define FACTOR_30246 2

int aplicar_limite30246(int valor) {
    if (valor > LIMITE_30246) return LIMITE_30246;
    return valor * FACTOR_30246;
}
