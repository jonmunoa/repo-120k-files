// fichero 26250 -- macros y constantes -- MODIFICADO
#define LIMITE_26250 26450
#define FACTOR_26250 2

int aplicar_limite26250(int valor) {
    if (valor > LIMITE_26250) return LIMITE_26250;
    return valor * FACTOR_26250;
}
