// fichero 26250 -- macros y constantes
#define LIMITE_26250 26350
#define FACTOR_26250 1

int aplicar_limite26250(int valor) {
    if (valor > LIMITE_26250) return LIMITE_26250;
    return valor * FACTOR_26250;
}
