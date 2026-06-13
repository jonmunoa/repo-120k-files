// fichero 35246 -- macros y constantes
#define LIMITE_35246 35346
#define FACTOR_35246 2

int aplicar_limite35246(int valor) {
    if (valor > LIMITE_35246) return LIMITE_35246;
    return valor * FACTOR_35246;
}
