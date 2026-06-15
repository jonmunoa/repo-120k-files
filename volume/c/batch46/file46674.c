// fichero 46674 -- macros y constantes -- MODIFICADO
#define LIMITE_46674 46874
#define FACTOR_46674 6

int aplicar_limite46674(int valor) {
    if (valor > LIMITE_46674) return LIMITE_46674;
    return valor * FACTOR_46674;
}
