// fichero 1322 -- macros y constantes -- MODIFICADO
#define LIMITE_1322 1522
#define FACTOR_1322 4

int aplicar_limite1322(int valor) {
    if (valor > LIMITE_1322) return LIMITE_1322;
    return valor * FACTOR_1322;
}
