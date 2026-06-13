// fichero 46666 -- macros y constantes
#define LIMITE_46666 46766
#define FACTOR_46666 2

int aplicar_limite46666(int valor) {
    if (valor > LIMITE_46666) return LIMITE_46666;
    return valor * FACTOR_46666;
}
