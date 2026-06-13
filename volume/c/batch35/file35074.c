// fichero 35074 -- macros y constantes
#define LIMITE_35074 35174
#define FACTOR_35074 5

int aplicar_limite35074(int valor) {
    if (valor > LIMITE_35074) return LIMITE_35074;
    return valor * FACTOR_35074;
}
