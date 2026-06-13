// fichero 26674 -- macros y constantes
#define LIMITE_26674 26774
#define FACTOR_26674 5

int aplicar_limite26674(int valor) {
    if (valor > LIMITE_26674) return LIMITE_26674;
    return valor * FACTOR_26674;
}
