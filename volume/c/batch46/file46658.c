// fichero 46658 -- macros y constantes
#define LIMITE_46658 46758
#define FACTOR_46658 4

int aplicar_limite46658(int valor) {
    if (valor > LIMITE_46658) return LIMITE_46658;
    return valor * FACTOR_46658;
}
