// fichero 40246 -- macros y constantes
#define LIMITE_40246 40346
#define FACTOR_40246 2

int aplicar_limite40246(int valor) {
    if (valor > LIMITE_40246) return LIMITE_40246;
    return valor * FACTOR_40246;
}
