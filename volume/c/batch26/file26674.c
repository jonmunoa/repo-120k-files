// fichero 26674 -- macros y constantes -- MODIFICADO
#define LIMITE_26674 26874
#define FACTOR_26674 6

int aplicar_limite26674(int valor) {
    if (valor > LIMITE_26674) return LIMITE_26674;
    return valor * FACTOR_26674;
}
