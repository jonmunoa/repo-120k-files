// fichero 26330 -- macros y constantes
#define LIMITE_26330 26430
#define FACTOR_26330 1

int aplicar_limite26330(int valor) {
    if (valor > LIMITE_26330) return LIMITE_26330;
    return valor * FACTOR_26330;
}
