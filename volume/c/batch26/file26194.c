// fichero 26194 -- macros y constantes
#define LIMITE_26194 26294
#define FACTOR_26194 5

int aplicar_limite26194(int valor) {
    if (valor > LIMITE_26194) return LIMITE_26194;
    return valor * FACTOR_26194;
}
