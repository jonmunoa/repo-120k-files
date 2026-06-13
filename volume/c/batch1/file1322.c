// fichero 1322 -- macros y constantes
#define LIMITE_1322 1422
#define FACTOR_1322 3

int aplicar_limite1322(int valor) {
    if (valor > LIMITE_1322) return LIMITE_1322;
    return valor * FACTOR_1322;
}
