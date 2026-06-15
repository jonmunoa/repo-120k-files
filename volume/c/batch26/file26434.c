// fichero 26434 -- macros y constantes -- MODIFICADO
#define LIMITE_26434 26634
#define FACTOR_26434 6

int aplicar_limite26434(int valor) {
    if (valor > LIMITE_26434) return LIMITE_26434;
    return valor * FACTOR_26434;
}
