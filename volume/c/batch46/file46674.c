// fichero 46674 -- macros y constantes
#define LIMITE_46674 46774
#define FACTOR_46674 5

int aplicar_limite46674(int valor) {
    if (valor > LIMITE_46674) return LIMITE_46674;
    return valor * FACTOR_46674;
}
