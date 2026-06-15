// fichero 26194 -- macros y constantes -- MODIFICADO
#define LIMITE_26194 26394
#define FACTOR_26194 6

int aplicar_limite26194(int valor) {
    if (valor > LIMITE_26194) return LIMITE_26194;
    return valor * FACTOR_26194;
}
